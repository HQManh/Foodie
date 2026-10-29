using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using CookingGraph;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame
{

public abstract class LevelBaseCakeOrderAbstract : MonoSingleton<LevelBaseCakeOrderAbstract>
{
	// The game scripts reach the input-block modifier as inputBlockers; it is the same object as BlockPlayerInteractModifiers
	// (the BoolModifier at +0x58 in the original). The name inputBlockers is the game code's guess, not recovered from the binary.
	public Utilities.BoolModifierWithRegisteredSource inputBlockers
	{
		get
		{
			PreSetUp();
			return BlockPlayerInteractModifiers;
		}
	}

	public delegate void OnPlayStateChangedDelegate(LevelPlayState oldState, LevelPlayState newState);

	public class BoosterData
	{
		public const string KEY_PARAM_DURATION = "dur";

		public const string KEY_PARAM_SPEED = "spd";

		public const string KEY_PARAM_NUM = "num";

		public bool? appliedSuccessfully;

		public BoosterType boosterEffect;

		public Dictionary<string, int> paramsInt;

		public int GetDuration()
		{
			return paramsInt != null && paramsInt.TryGetValue(KEY_PARAM_DURATION, out int duration) ? duration : 0;
		}

		public int GetSpeed()
		{
			return paramsInt != null && paramsInt.TryGetValue(KEY_PARAM_SPEED, out int speed) ? speed : 2;
		}

		public int GetNum()
		{
			return paramsInt != null && paramsInt.TryGetValue(KEY_PARAM_NUM, out int num) ? num : 1;
		}
	}

	private class BoosterRuntimeData
	{
		public BoosterData boosterData;

		public Action<BoosterData> onEnd;
	}

	public class ConfigSaveMeOnOutOfServeSlots
	{
		public int numMaxServeSlotsToRemove;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUpLevel_003Ed__75 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelBaseCakeOrderAbstract _003C_003E4__this;

		public CakeLevelInitData initData;

		public CakeLevelRuntimeData runtimeData;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CStartTutorial_003Ed__82 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public LevelBaseCakeOrderAbstract _003C_003E4__this;

		public string tutorialId;

		public Action onDone;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[Header("Cooking Process Graph")]
	[SerializeField]
	private CookingGraphAsset _cookingGraphSO;

	[SerializeField]
	private MapIngredientLookupTable _ingredientLookupTable;

	[Header("Background")]
	[SerializeField]
	private InGameBackgroundsControl _backgroundControl;

	public Func<bool> onCustomerOutOfTime;

	private Queue<BoosterRuntimeData> _pendingBoosters = new Queue<BoosterRuntimeData>();

	private readonly Dictionary<BoosterType, bool> _boosterUsable = new Dictionary<BoosterType, bool>();

	// The static constructor fills this with Enum.GetValues(typeof(BoosterType)).
	private static readonly BoosterType[] AllBoosterTypes = (BoosterType[])Enum.GetValues(typeof(BoosterType));

	public CookingGraphAsset CookingProcessGraphSO => _cookingGraphSO;

	public MapIngredientLookupTable IngredientLookupTable => _ingredientLookupTable;

	public InGameBackgroundsControl BackgroundControl => _backgroundControl;

	public abstract ISpawnControl SpawnControl { get; }

	public CakeLevelInitData InitData { get; private set; }

	public CakeLevelRuntimeData RuntimeData { get; private set; }

	public OrderPricingCalculator OrderPricingCalculator { get; private set; } = new OrderPricingCalculator();

	public LevelPlayState PlayState { get; private set; }

	public bool IsLevelSetupComplete => (int)PlayState > 0;

	public BoolModifierWithRegisteredSource BlockPlayerInteractModifiers { get; private set; }

	// Decompiled: reads BlockPlayerInteractModifiers.Value and returns true when it is false.
	public bool IsAllowInteract => !BlockPlayerInteractModifiers.Value;

	public virtual bool HasLevelTutorial => false;

	public virtual bool LastSaveMeApplied { get; protected set; }

	public event OnPlayStateChangedDelegate onPlayStateChanged;

	public event Action onBlockPlayerInteractChanged;

	public event Action<float> onFastForwardEndgame;

	public event Action onFastForwardEndgameEnded;

	public event Action<BoosterData> onBoosterEffectApplied;

	public event Action<BoosterData> onBoosterEffectExpired;

	public event Action<BoosterType, bool> onBoosterUsableChanged;

	public event Action onOutOfServeSlot;

	public event Action onUseMoreServeSlot;

	public event Action onBeltDeadlock;

	protected override void Awake()
	{
		base.Awake();
		BackgroundColorGradingControl.ApplySkinPresetOnGameplayEnter();
		PreSetUp();
	}

	protected virtual void Update()
	{
		if (PlayState == LevelPlayState.Playing)
		{
			ProcessBoosterEffect();
			RefreshBoosterUsable();
		}
	}

	protected override void OnDestroy()
	{
		base.OnDestroy();
	}

	private void PreSetUp()
	{
		if (BlockPlayerInteractModifiers == null)
		{
			BlockPlayerInteractModifiers = new BoolModifierWithRegisteredSource(OnBlockPlayerInteractModifiersChanged);
		}
	}

	private void OnBlockPlayerInteractModifiersChanged()
	{
		this.onBlockPlayerInteractChanged?.Invoke();
	}

	public async UniTask SetUpLevel(CakeLevelInitData initData, CakeLevelRuntimeData runtimeData)
	{
		// Rebuilt from the decompiled state machine. The original awaits only the background control's SetUp.
		if (IsLevelSetupComplete)
		{
			return;
		}
		PreSetUp();
		InitData = initData;
		RuntimeData = runtimeData;
		// The object at +0x48 is the OrderPricingCalculator; its first field (+0x10) is set from initData.restaurantParams (+0xc0).
		OrderPricingCalculator.SetUp(initData.restaurantParams);
		if (_backgroundControl != null)
		{
			await _backgroundControl.SetUp(initData.levelMetadata.weatherEffect);
		}
		// The decompiled state machine awaits the subclass hook right after the background set-up.
		await OnSetUpLevel();
		UnityEngine.Debug.Log("Level setup complete");
		SetPlayState(LevelPlayState.Setup);
	}

	public virtual UniTask SetUpUI(UIInLevelCakeOrder mainUI)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public virtual bool TryGetBeltBottomWorldY(out float worldY)
	{
		worldY = default(float);
		return false;
	}

	public virtual bool TryGetBoosterPanelWorldY(out float worldY)
	{
		worldY = default(float);
		return false;
	}

	public void NotiStartUITutorial()
	{
	}

	[AsyncStateMachine(typeof(_003CStartTutorial_003Ed__82))]
	public UniTask StartTutorial(string tutorialId, Action onDone)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void StartPlay()
	{
		// Rebuilt from the decompiled code. The original also touches one unidentified member (+0xc0) between the state change and OnStartPlay.
		if ((int)PlayState < 4)
		{
			SetPlayState(LevelPlayState.Playing);
			OnStartPlay();
		}
	}

	public void EndGame()
	{
		if ((int)PlayState < 5)
		{
			SetPlayState(LevelPlayState.Ended);
			OnEndGame();
		}
	}

	public void SimulateCompleteAllRemainOrdersAndEndGame()
	{
		if ((int)PlayState > 4)
		{
			return;
		}
		CakeLevelRuntimeDataCustomer customerData = RuntimeData.customerData;
		int firstRemaining = customerData.failedCustomer.Count + customerData.servedCustomer.Count;
		OrderPricingOutput pricing = SimulatePricingOutput(firstRemaining, customerData.maxNumCustomers - 1);
		RuntimeData.softCurrencyData.Earn(pricing.cost);
		for (int i = firstRemaining; i < customerData.maxNumCustomers; i++)
		{
			customerData.AddServedCustomer(new ResultCustomerData
			{
				characterId = "sim_" + i,
				emotion = (CustomerEmotion)3,
				numDish = 1
			});
		}
		EndGame();
	}

	private OrderPricingOutput SimulatePricingOutput(int startCustomerIndex, int endCustomerIndex)
	{
		OrderPricingOutput total = new OrderPricingOutput();
		CustomerSpawnData[] spawnData = InitData.customerSpawnData;
		if (spawnData == null || spawnData.Length == 0 || SpawnControl == null)
		{
			return total;
		}
		int last = spawnData.Length - 1;
		int from = Math.Max(0, Math.Min(startCustomerIndex, last));
		int to = Math.Max(0, Math.Min(endCustomerIndex, last));
		for (int i = from; i <= to; i++)
		{
			if (spawnData[i] != null)
			{
				OrderPricingInput input = SpawnControl.SimulatePricing(spawnData[i]);
				total.Accumulate(OrderPricingCalculator.CalculatePrice(input));
			}
		}
		return total;
	}

	public void RaiseFastForwardEndgame(float timeScale)
	{
		this.onFastForwardEndgame?.Invoke(timeScale);
	}

	public void RaiseFastForwardEndgameEnded()
	{
		this.onFastForwardEndgameEnded?.Invoke();
	}

	private void SetPlayState(LevelPlayState next)
	{
		// Rebuilt from the decompiled code: the state cannot go backwards once playing (value 4) has been reached.
		LevelPlayState previous = PlayState;
		if (previous != next && ((int)previous < 4 || previous <= next))
		{
			PlayState = next;
			this.onPlayStateChanged?.Invoke(previous, next);
		}
	}

	protected abstract UniTask OnSetUpLevel();

	protected abstract void OnStartPlay();

	protected virtual void OnEndGame()
	{
	}

	protected virtual UniTask OnStartTutorial(string tutorialId, Action onDone)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public virtual bool CanUseBooster(BoosterType boosterType)
	{
		return true;
	}

	public virtual void PrepareBoosterTutorial(BoosterType boosterType)
	{
	}

	public void ActivateBooster(BoosterData boosterData, Action<BoosterData> onEnd = null)
	{
		_pendingBoosters.Enqueue(new BoosterRuntimeData { boosterData = boosterData, onEnd = onEnd });
	}

	private void RefreshBoosterUsable()
	{
		foreach (BoosterType type in AllBoosterTypes)
		{
			if (type == BoosterType.None)
			{
				continue;
			}
			bool usable = CanUseBooster(type);
			if (!_boosterUsable.TryGetValue(type, out bool previous) || previous != usable)
			{
				_boosterUsable[type] = usable;
				this.onBoosterUsableChanged?.Invoke(type, usable);
			}
		}
	}

	private void ProcessBoosterEffect()
	{
		while (_pendingBoosters.Count > 0)
		{
			BoosterRuntimeData runtime = _pendingBoosters.Dequeue();
			OnApplyBoosterEffect(runtime.boosterData, data =>
			{
				OnBoosterEffectExpired(data);
				this.onBoosterEffectExpired?.Invoke(data);
				runtime.onEnd?.Invoke(data);
			});
			this.onBoosterEffectApplied?.Invoke(runtime.boosterData);
		}
	}

	protected abstract void OnApplyBoosterEffect(BoosterData boosterData, Action<BoosterData> onEnd);

	protected abstract void OnBoosterEffectExpired(BoosterData boosterData);

	public void LostHeart(LostHeartReason reason)
	{
		if (InitData.heartConfig == null || (InitData.heartConfig.lostReasonFlags >> (int)reason & 1) == 0)
		{
			return;
		}
		RuntimeData.heartData.ChangeAmount(-1);
	}

	public void TriggerOutOfServeSlot()
	{
		this.onOutOfServeSlot?.Invoke();
	}

	public void TriggerBeltDeadlock()
	{
		this.onBeltDeadlock?.Invoke();
	}

	public void TriggerUseMoreServeSlot()
	{
		this.onUseMoreServeSlot?.Invoke();
	}

	public bool TriggerCustomerOutOfTime()
	{
		return onCustomerOutOfTime != null && onCustomerOutOfTime();
	}

	public virtual void ApplySaveMeOnOutOfServeSlots(ConfigSaveMeOnOutOfServeSlots config)
	{
	}

	public virtual void ApplySaveMeOnCustomerOutOfTime()
	{
	}

	public virtual void ApplySaveMeOnBeltDeadlock()
	{
	}

	public abstract (List<IRewardItemInfo>, List<GridEffectType>, List<IngredientSlotStatus>) GetMechanicsUsedInLevel();
}
}
