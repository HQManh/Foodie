using CakeOrder;
using CakeOrder.InGame;
using CookingGraph;
using UnityEngine;

namespace AnhPD.FoodOrder.Autoplay
{
	public sealed class CookingBotRunner : MonoBehaviour, IAutoplayCheatTarget
	{
		[Header("Pacing")]
		[Tooltip("How often the bot is ASKED to decide. The real cadence is Pick Interval in the cheat panel, which the bot enforces itself against gameplay time - this only has to be frequent enough not to miss the deadline. It must never wait for animations.")]
		[Range(1f, 30f)]
		[SerializeField]
		private float _ticksPerSecond = 8f;

		[Header("Scoring")]
		[Tooltip("Which scoring profile to pick with. Changeable while the bot runs - the pause menu's cheat section exposes it.")]
		[SerializeField]
		private CookingBotPickingStrategy _strategy;

		[Tooltip("Chance a decision uses the strategy at all. 0 = pick at random among legal moves, 1 = always score. Turn it down to watch a level fail like a weak player would.")]
		[Range(0f, 1f)]
		[SerializeField]
		private float _intelligent = 1f;

		[Tooltip("Rows of each queue the bot may look at. 0 uses the graph's own map.visibleRows.")]
		[Min(0f)]
		[SerializeField]
		private int _visibleLookaheadRows = 3;

		[Tooltip("Keep hidden rows unreadable even if the snapshot still carries their ingredient.")]
		[SerializeField]
		private bool _respectHiddenStatus = true;

		[Tooltip("0 = leave the package default. Set for a reproducible run.")]
		[SerializeField]
		private int _randomSeed;

		[Header("Auto-retry")]
		[Tooltip("On a loss, feed what went wrong back into the bot and replay the level. Keeps going until it wins, the player stops it, hearts run out, or the attempt cap is hit.")]
		[SerializeField]
		private bool _autoRetryOnLose = true;

		[Header("Diagnostics")]
		[Tooltip("Log every accepted pick with its score.")]
		[SerializeField]
		private bool _logDecisions;

		[Tooltip("Dump the legacy id -> graph node table once, at init.")]
		[SerializeField]
		private bool _logIdMapOnInit;

		private CookingEstimatorBot _bot;

		private CookingBotBridge _bridge;

		private GraphNodeIdMap _ids;

		private LevelBaseCakeOrderAbstract _level;

		private float _nextTickAt;

		private bool _initFailed;

		private CookingBotConsoleLog _log;

		private bool _autoResumeChecked;

		private const float PopupDismissInterval = 0.5f;

		private float _nextPopupDismissAt;

		public static CookingBotRunner Instance { get; private set; }

		public bool IsEnabled { get; private set; }

		public bool IsTicking
		{
			get
			{
				if (IsEnabled && _bot != null && _bot.IsInitialized)
				{
					return CanPlayNow();
				}
				return false;
			}
		}

		bool IAutoplayCheatTarget.IsAutoplayEnabled => IsEnabled;

		CookingBotPickingStrategy IAutoplayCheatTarget.PickingStrategy => (_bot != null) ? _bot.PickingStrategy : _strategy;

		CookingBotPickingStrategy IAutoplayCheatTarget.EffectivePickingStrategy => (_bot != null) ? _bot.EffectivePickingStrategy : _strategy;

		float IAutoplayCheatTarget.Intelligent => (_bot != null) ? _bot.Intelligent : _intelligent;

		private void Awake()
		{
			Instance = this;
			UICakePauseMenuInGame.RegisterAutoplay(this);
			LevelPlayLoadAndSetupControl.onLevelEnded += OnLevelEnded;
			CookingBotAutoRetry.onPickIntervalChanged += OnPickIntervalChanged;
			CookingBotAutoRetry.onWorkWaitStrategyChanged += OnWorkWaitStrategyChanged;
			CookingBotAutoRetry.onVerboseLoggingChanged += OnVerboseLoggingChanged;
			CookingBotAutoRetry.onAdaptiveStrategyIntervalChanged += OnAdaptiveStrategyIntervalChanged;
		}

		private void OnAdaptiveStrategyIntervalChanged(int picks)
		{
			if (_bot != null)
			{
				_bot.SetAdaptiveStrategyPickInterval(picks);
			}
		}

		private void OnWorkWaitStrategyChanged(CookingBotWorkWaitStrategy strategy)
		{
			if (_bot != null)
			{
				_bot.SetWorkWaitStrategy(strategy);
			}
		}

		private void OnVerboseLoggingChanged(bool enabled)
		{
			if (_bot != null)
			{
				if (_log == null)
				{
					_log = new CookingBotConsoleLog(this);
				}
				_bot.SetVerboseLogging(enabled, _log);
			}
		}

		private void OnPickIntervalChanged(float seconds)
		{
			if (_bot != null)
			{
				_bot.SetPickIntervalSeconds(seconds);
			}
		}

		private void OnDestroy()
		{
			LevelPlayLoadAndSetupControl.onLevelEnded -= OnLevelEnded;
			CookingBotAutoRetry.onPickIntervalChanged -= OnPickIntervalChanged;
			CookingBotAutoRetry.onWorkWaitStrategyChanged -= OnWorkWaitStrategyChanged;
			CookingBotAutoRetry.onVerboseLoggingChanged -= OnVerboseLoggingChanged;
			CookingBotAutoRetry.onAdaptiveStrategyIntervalChanged -= OnAdaptiveStrategyIntervalChanged;
			UICakePauseMenuInGame.UnregisterAutoplay(this);
			if (!CookingBotAutoRetry.IsLooping)
			{
				CookingBotAutoRetry.ClearTimeScale();
			}
			if (Instance == this)
			{
				Instance = null;
			}
		}

		private void OnLevelEnded(CakeLevelEndResultData result)
		{
			if (result != null && _bot != null && _bot.IsInitialized && result.resultType == GameResultType.Lose)
			{
				IsEnabled = false;
				CookingBotFailureReport report = new CookingBotFailureReport();
				report.reason = CookingBotAutoRetry.ReasonOf(result.endReason);
				report.progress01 = ((result.customerData != null) ? result.customerData.Progress : (-1f));
				_bot.AccumulateFailure(report);
			}
		}

		void IAutoplayCheatTarget.ToggleAutoplay()
		{
			Toggle();
		}

		void IAutoplayCheatTarget.SetPickingStrategy(CookingBotPickingStrategy strategy)
		{
			SetPickingStrategy(strategy);
		}

		void IAutoplayCheatTarget.SetIntelligent(float value)
		{
			SetIntelligent(value);
		}

		public void SetPickingStrategy(CookingBotPickingStrategy strategy)
		{
			_strategy = strategy;
			if (_bot != null)
			{
				_bot.SetPickingStrategy(strategy);
			}
		}

		public void SetIntelligent(float value)
		{
			_intelligent = Mathf.Clamp01(value);
			if (_bot != null)
			{
				_bot.SetIntelligent(_intelligent);
			}
		}

		public void Toggle()
		{
			if (!IsEnabled && !CookingBotAutoRetry.IsLooping)
			{
				Run();
			}
			else
			{
				Stop();
			}
		}

		public void Run()
		{
			if (!EnsureInitialized())
			{
				Debug.LogWarning("[CookingBot] could not initialize, autoplay not started", this); /* literal recovered by guess */
				return;
			}
			_nextTickAt = 0f;
			IsEnabled = true;
			CakeOrderDataTracking.MarkBotControlled();
			if (_autoRetryOnLose && _level != null && _level.InitData != null)
			{
				CookingBotAutoRetry.Begin(_level.InitData.mapId, _level.InitData.levelIndex);
			}
			CookingBotAutoRetry.ApplyTimeScale();
			string attemptSuffix = "";
			if (_autoRetryOnLose)
			{
				attemptSuffix = string.Format(" (attempt {0})", CookingBotAutoRetry.AttemptCount); /* literal recovered by guess */
			}
			Debug.Log("[CookingBot] started" + attemptSuffix, this); /* literal recovered by guess */
		}

		public void Stop()
		{
			bool wasEnabled = IsEnabled;
			bool wasLooping = CookingBotAutoRetry.IsLooping;
			IsEnabled = false;
			CookingBotAutoRetry.Stop("manual stop"); /* literal recovered by guess */
			if (wasEnabled || wasLooping)
			{
				Debug.Log("[CookingBot] stopped", this); /* literal recovered by guess */
			}
		}

		public void ReInitialize()
		{
			_bot = null;
			_bridge = null;
			_ids = null;
			_initFailed = false;
			IsEnabled = false;
		}

		private bool EnsureInitialized()
		{
			if (_bot != null && _bot.IsInitialized)
			{
				return true;
			}
			if (_initFailed)
			{
				return false;
			}
			_initFailed = true;
			MessyController game = MessyController.Ins;
			_level = LevelBaseCakeOrderAbstract.Instance;
			if (game == null || _level == null)
			{
				Debug.LogError("[CookingBot] no active level or game controller", this); /* literal recovered by guess */
				return false;
			}
			CookingGraphAsset graph = _level.CookingProcessGraphSO;
			MapIngredientLookupTable lookup = _level.IngredientLookupTable;
			if (graph == null || lookup == null)
			{
				Debug.LogError("[CookingBot] level has no cooking graph or ingredient lookup table", this); /* literal recovered by guess */
				return false;
			}
			_ids = GraphNodeIdMap.Build(game.recipeConfig, lookup);
			if (_ids.IsEmpty)
			{
				Debug.LogError("[CookingBot] legacy id -> graph node map is empty", this); /* literal recovered by guess */
				return false;
			}
			if (_logIdMapOnInit)
			{
				Debug.Log(_ids.Describe(), this);
			}
			CustomerOrderData orders = null;
			string orderDataString = ((_level.InitData != null) ? _level.InitData.customerOrderDataString : null);
			if (!string.IsNullOrEmpty(orderDataString))
			{
				// TODO(unrecovered): the character-id list passed to TryParse comes from an unnamed database singleton
				System.Collections.Generic.IReadOnlyList<string> characterIds = null;
				if (!CustomerOrderTranslator.TryParse(orderDataString, graph, out orders, out var issue, characterIds))
				{
					orders = null;
					Debug.LogWarning("[CookingBot] customer orders did not parse: " + issue, this); /* literal recovered by guess */
				}
			}
			_bridge = new CookingBotBridge(game, _level, _ids, orders, _level.InitData);
			EstimatorBotSettings settings = new EstimatorBotSettings();
			settings.intelligent = _intelligent;
			settings.pickIntervalSeconds = CookingBotAutoRetry.PickIntervalSeconds;
			settings.workWaitStrategy = CookingBotAutoRetry.WorkWaitStrategy;
			settings.adaptiveStrategyPickInterval = CookingBotAutoRetry.AdaptiveStrategyPickInterval;
			settings.visibleLookaheadRows = _visibleLookaheadRows;
			settings.respectHiddenStatus = _respectHiddenStatus;
			if (_randomSeed != 0)
			{
				settings.randomSeed = _randomSeed;
			}
			_bot = new CookingEstimatorBot(_bridge, _bridge, settings);
			_bot.Init(graph, CookingBotAutoRetry.Knowledge);
			if (CookingBotAutoRetry.Knowledge.failureCount < 1)
			{
				_bot.SetPickingStrategy(_strategy);
			}
			else
			{
				_strategy = _bot.PickingStrategy;
			}
			_log = new CookingBotConsoleLog(this);
			_bot.SetVerboseLogging(CookingBotAutoRetry.VerboseLogging, _log);
			_bridge.Reset();
			CookingBotAutoRetry.ReportEffectiveSettings(_bot.PickIntervalSeconds, default(CookingBotWorkWaitStrategy) /* ResolveWorkWaitStrategy is not defined on CookingEstimatorBot; default used */, _bot.PickingStrategy, _bot.EffectivePickingStrategy, CookingBotAutoRetry.Knowledge.adaptiveStrategyPickInterval);
			_initFailed = false;
			return true;
		}

		private void Update()
		{
			CookingBotAutoRetry.EnsureTimeScale();
			TryAutoResume();
			if (!IsEnabled || _bot == null || !_bot.IsInitialized)
			{
				return;
			}
			TryDismissBlockingPopup();
			if (!CanPlayNow() || Time.unscaledTime < _nextTickAt)
			{
				return;
			}
			_nextTickAt = Time.unscaledTime + 1f / Mathf.Max(1f, _ticksPerSecond);
			if (_bot.Tick() && _logDecisions)
			{
				BotDecision decision = _bot.LastDecision;
				if (decision != null)
				{
					string strategyText = "";
					if (decision.strategyMode != decision.pickingStrategy)
					{
						strategyText = string.Format(" [{0}<-{1}]", decision.strategyMode, decision.pickingStrategy); /* literal recovered by guess */
					}
					int? queueIndex = null;
					if (decision.option != null)
					{
						queueIndex = decision.option.queueIndex;
					}
					string head = string.Format("[CookingBot] pick queue={0}", queueIndex); /* literal recovered by guess */
					string scoreText = string.Format(" score={0}", decision.score); /* literal recovered by guess */
					string randomText = (decision.randomFallback ? " (random)" : "");
					string tail = string.Format(" customer={0} pending={1}{2}", decision.customerIndex, _bot.PendingPickCount, strategyText); /* literal recovered by guess */
					Debug.Log(string.Concat(head, scoreText, randomText, tail), this);
				}
			}
		}

		private void TryAutoResume()
		{
			if (_autoResumeChecked || IsEnabled)
			{
				return;
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level == null || level.InitData == null || MessyController.Ins == null)
			{
				return;
			}
			CakeLevelInitData initData = level.InitData;
			_autoResumeChecked = true;
			if (CookingBotAutoRetry.ShouldAutoResume(initData.mapId, initData.levelIndex))
			{
				string attemptText = string.Format("[CookingBot] auto-resuming, attempt {0}", CookingBotAutoRetry.AttemptCount); /* literal recovered by guess */
				string failureText = string.Format(" after {0} failures", CookingBotAutoRetry.Knowledge.failureCount); /* literal recovered by guess */
				Debug.Log(attemptText + failureText, this);
				Run();
			}
		}

		private void TryDismissBlockingPopup()
		{
			if (Time.unscaledTime < _nextPopupDismissAt)
			{
				return;
			}
			UIInLevelCakeOrder inLevelUi = UIInLevelCakeOrder.InstanceUIInLevel;
			var popup = ((inLevelUi != null) ? inLevelUi.TopPopup : null);
			if (popup == null)
			{
				return;
			}
			// TODO(unrecovered): three further popup types (besides UICakePauseMenuInGame) are exempt from auto-dismissal; their names are not visible in the pseudocode
			if (!(popup is UICakePauseMenuInGame))
			{
				_nextPopupDismissAt = Time.unscaledTime + PopupDismissInterval;
				Debug.Log("[CookingBot] dismissing blocking popup " + popup.GetType().Name, this); /* literal recovered by guess */
				popup.Hide();
			}
		}

		private bool CanPlayNow()
		{
			if (_level == null || MessyController.Ins == null)
			{
				return false;
			}
			if (!_level.IsAllowInteract)
			{
				return false;
			}
			IngredientSpawnerController spawner = MessyController.Ins.Spawner;
			if (spawner == null)
			{
				return false;
			}
			return spawner.IsRunning;
		}

		private void DumpIdMap()
		{
			if (EnsureInitialized())
			{
				Debug.Log(_ids.Describe(), this);
			}
		}

		private void DumpSnapshot()
		{
			if (EnsureInitialized())
			{
				BotGameState state = _bridge.ReadState();
				string[] lines = new string[6];
				lines[0] = string.Format("[CookingBot] snapshot rev={0} playing={1}", state.revision, state.isPlaying); /* literal recovered by guess */
				lines[1] = string.Format(" queues={0} pickupables={1}", state.visibleQueues.Count, state.pickupables.Count);
				lines[2] = string.Format(" grid cells={0} committed={1}", state.grid.cells.Count, state.committedIngredients.Count);
				lines[3] = string.Format(" saveMeBag items={0}", (state.saveMeBag != null) ? state.saveMeBag.items.Count : 0);
				lines[4] = string.Format(" customers={0} preview={1}", state.customerOrders.Count, state.previewOrders.Count);
				lines[5] = string.Format(" unmapped={0}", _bridge.UnmappedIdCount);
				Debug.Log(string.Concat(lines), this);
			}
		}
	}
}
