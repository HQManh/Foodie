using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.InGame;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GridIngController : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass102_0
		{
			public bool done;

			internal void _003CSpiderCleanRoutine_003Eb__1()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CCollectToSaveMeBagRoutine_003Ed__111 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public GridIngController _003C_003E4__this;

			public float dirtyWait;

			public Action onDone;

			private LevelBaseCakeOrderAbstract _003Clevel_003E5__2;

			private Vector3 _003Ctarget_003E5__3;

			private List<IngredientState> _003Cpicked_003E5__4;

			private List<DragItem>.Enumerator _003C_003E7__wrap4;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CCollectToSaveMeBagRoutine_003Ed__111(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CGetRemainingItems_003Ed__141 : IEnumerable<DragItem>, IEnumerable, IEnumerator<DragItem>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private DragItem _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public GridIngController _003C_003E4__this;

			private IEnumerator<IngCell> _003C_003E7__wrap1;

			private IReadOnlyList<DragItem> _003Citems_003E5__3;

			private int _003Ci_003E5__4;

			DragItem IEnumerator<DragItem>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CGetRemainingItems_003Ed__141(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<DragItem> IEnumerable<DragItem>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003CSpiderCleanRoutine_003Ed__102 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public GridIngController _003C_003E4__this;

			private _003C_003Ec__DisplayClass102_0 _003C_003E8__1;

			public Action onFinished;

			private List<DragItemStackable> _003Cstacks_003E5__2;

			private float _003Cwait_003E5__3;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CSpiderCleanRoutine_003Ed__102(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[Header("Grid")]
		public Vector2 cellSize;

		public int numCols;

		public int numRows;

		[SerializeField]
		private List<GridCellOccupier> cellOccupiers;

		[SerializeField]
		private IngCellDisplay cellDisplay;

		[Header("Dirty plate")]
		[SerializeField]
		private int maxDirtyStack;

		[SerializeField]
		private SpiderCleanerFx spiderPrefab;

		[SerializeField]
		private bool spiderCleansAllStacks;

		[SerializeField]
		private DirtyPlateCleanerItem cleanerPrefab;

		[Header("Save-me: gom nguyên liệu về túi")]
		[SerializeField]
		private SpawnBagSaveMe saveMeBag;

		[SerializeField]
		private float collectStagger;

		[SerializeField]
		private int saveMeMaxCells;

		[SerializeField]
		private bool saveMeClearsDirtyPlates;

		[Header("Alert grid đầy")]
		[SerializeField]
		private SpriteRenderer alert;

		[SerializeField]
		private int alertWarnFreeCells;

		[SerializeField]
		private float alertStartDelay;

		[SerializeField]
		private float alertDuration;

		[SerializeField]
		private float alertBlinkPeriod;

		[SerializeField]
		[Range(0f, 1f)]
		private float alertMinAlpha;

		[Tooltip("Nhấp nháy đỏ bao lâu trước khi xử thua khi bàn hết nước đi")]
		[SerializeField]
		private float deadlockLoseDelay;

		[SerializeField]
		private float deadlockBlinksPerSecond;

		private IngGridFullAlert _fullAlert;

		private readonly Dictionary<Vector2Int, IngCell> _cells = new Dictionary<Vector2Int, IngCell>();

		private bool _drawGrid;

		private bool _cellFreedPending;

		private IngGridLayout _layout;

		private IngCellFinder _finder;

		private IngCellStatus _cellStatus;

		private IngCellDisplayPool _displayPool;

		private IngDirtyPlateCleaner _dirtyCleaner;

		private readonly List<DragItem> _parked = new List<DragItem>();

		private const float ParkedRetryInterval = 0.2f;

		private float _nextParkedRetry;

		private bool _beltStuck;

		private bool _beltHasMove;

		private bool _beltDeadlocked;

		private bool _deadlockReported;

		private float _deadlockSince;

		private bool _outOfSlotAlertOn;

		private const float DrainedRescueDelay = 3f;

		private const int MaxDrainedRescues = 3;

		private float _drainedSince;

		private int _drainedRescues;

		private string _rescuePlan;

		private bool _rescueJamReported;

		private readonly List<IngredientState> _rescueItems = new List<IngredientState>();

		private bool _alertActive;

		private float _stuckSince;

		private bool _spiderRunning;

		private const float SpiderTimeout = 10f;

		private bool _collecting;

		private Vector2Int _saveMeCoord;

		private Vector3 _saveMeBagOffset;

		private IngGridLayout Layout
		{
			get
			{
				if (_layout == null || !Application.isPlaying)
				{
					_layout = BuildLayout();
				}
				return _layout;
			}
		}

		public IReadOnlyList<DragItem> ParkedItems => _parked;

		private bool IsDeadlockCounting => _deadlockSince >= 0f;

		public bool IsFullAlertBlinking => _deadlockSince >= 0f || (_fullAlert != null && _fullAlert.IsBlinking);

		public bool IsDeadlockBlinking => _deadlockSince >= 0f;

		public float FullAlertBlinkPhase
		{
			get
			{
				if (_deadlockSince >= 0f)
				{
					return Mathf.Abs(Mathf.Sin(deadlockBlinksPerSecond * (Time.time - _deadlockSince) * Mathf.PI));
				}
				if (_fullAlert == null)
				{
					return 0f;
				}
				return _fullAlert.BlinkPhase;
			}
		}

		private float DeadlockBlinkPhase => Mathf.Abs(Mathf.Sin(deadlockBlinksPerSecond * (Time.time - _deadlockSince) * Mathf.PI));

		public bool IsBeltTapBlocked => _alertActive;

		private string ToggleGridLabel => null;

		public Vector2Int SaveMeCoord => _saveMeCoord;

		public bool HasSaveMeBag => saveMeBag != null;

		private IngGridLayout BuildLayout()
		{
			IngGridLayout layout = new IngGridLayout(transform, cellSize, numCols, numRows);
			layout.RefreshOccupied(cellOccupiers);
			return layout;
		}

		private void Awake()
		{
			_layout = BuildLayout();
			SetupSaveMeBagAnchor();
			_displayPool = new IngCellDisplayPool(cellDisplay, transform);
			_finder = new IngCellFinder(_layout, GetOrCreateCell, TryGetExistingCell);
			// onUnlocked target recovered by guess: the cell-freed flag (+0xb1) is the only effect in this class
			_cellStatus = new IngCellStatus(_layout, _displayPool, () => _cellFreedPending = true);
			// despawn is the <Awake>b__33_1 lambda: hands the plate back to MessyController
			// onPlateRemoved recovered by guess (same cell-freed flag); its exact target is not in the decompile set
			_dirtyCleaner = new IngDirtyPlateCleaner(_layout, TryGetExistingCell, item =>
			{
				if (MessyController.Ins != null)
				{
					MessyController.Ins.DespawnItem(item);
				}
			}, () => _cellFreedPending = true);
		}

		private void OnDestroy()
		{
			if (_cellStatus != null)
			{
				_cellStatus.Unsubscribe();
			}
			if (_spiderRunning)
			{
				SetInteractBlocked(false);
			}
			_alertActive = false;
			SetOutOfSlotAlert(false);
		}

		public void UnlockColorWithKey(KeyTag key)
		{
			if (_cellStatus != null)
			{
				_cellStatus.UnlockColorWithKey(key);
			}
		}

		public void SetupCellGrid(CakeLevelInitData initData)
		{
			if (initData == null)
			{
				return;
			}
			// TODO(unrecovered): grid-sequence source object and ingredient id list members of CakeLevelInitData not recovered
			if (_cellStatus != null)
			{
				_cellStatus.Setup(null, null);
				_cellStatus.Subscribe();
				ApplyDirtyPlateConfig();
				if (_finder != null)
				{
					_finder.SetAutoStack(true);
					SetupFullAlert();
				}
			}
		}

		private void LateUpdate()
		{
			if (_cellFreedPending)
			{
				_cellFreedPending = false;
				if (_parked.Count > 0)
				{
					LandParked();
				}
				// TODO(unrecovered): trailing call FUN_04b78c94(0, DAT_091cd4e0) on freed-cell path not recovered
			}
			else if (_parked.Count > 0 && Time.time >= _nextParkedRetry)
			{
				LandParked();
			}
			TickFullAlert();
		}

		public void Park(DragItem item)
		{
			if (item == null || _parked == null || _parked.Contains(item) || _finder == null)
			{
				return;
			}
			// TODO(unrecovered): diagnostic UnityEngine.Debug.LogError with pending/owed counts is not reproduced
			item.UnregisterCell();
			item.StartParkedFloat();
			_parked.Add(item);
			_finder.AddOwed(item);
			PieceLedger.Step(item, "save-me sweep into bag");
		}

		public void Unpark(DragItem item)
		{
			if (_parked != null && _parked.Remove(item) && _finder != null)
			{
				_finder.RemoveOwed(item);
			}
		}

		private void LandParked()
		{
			_nextParkedRetry = Time.time + ParkedRetryInterval;
			if (_collecting)
			{
				return;
			}
			MessyController messy = MessyController.Ins;
			ServeShelfController shelf = messy != null ? messy.ServeShelf : null;
			for (int i = 0; i < _parked.Count; i++)
			{
				DragItem item = _parked[i];
				bool gone = item == null || !item.gameObject.activeSelf || item.IsWindingUp || (messy != null && messy.IsBookedByShelf(item));
				if (gone)
				{
					_parked.RemoveAt(i);
					i--;
					if (_finder != null)
					{
						_finder.RemoveOwed(item);
					}
					continue;
				}
				if (_finder != null)
				{
					_finder.RemoveOwed(item);
				}
				if (shelf != null && shelf.TryTakeDirect(item))
				{
					_parked.RemoveAt(i);
					// StopParkedFloat only kills the windup tween, matching the decompiled KillWindUp call
					item.StopParkedFloat();
					i--;
					continue;
				}
				if (_finder != null && _finder.TryGetCell(item, out IngCell cell))
				{
					_parked.RemoveAt(i);
					item.RegisterCell(cell);
					i--;
				}
				else if (_finder != null)
				{
					_finder.AddOwed(item);
				}
			}
		}

		private void TakeParkedForSweep(List<DragItem> into)
		{
			MessyController messy = MessyController.Ins;
			foreach (DragItem item in _parked)
			{
				if (_finder != null)
				{
					_finder.RemoveOwed(item);
				}
				if (item == null || !item.gameObject.activeSelf || item.IsWindingUp)
				{
					continue;
				}
				if (messy != null && messy.IsBookedByShelf(item))
				{
					continue;
				}
				into.Add(item);
			}
			_parked.Clear();
		}

		private void SetupFullAlert()
		{
			if (alert == null)
			{
				return;
			}
			_fullAlert = new IngGridFullAlert(alert, alertDuration, alertBlinkPeriod, alertMinAlpha, OnGridFullTimeout);
		}

		public void PulseFullAlert(float cycleDuration)
		{
			if (_fullAlert != null)
			{
				_fullAlert.PulseOnce(cycleDuration);
			}
		}

		public void SetBeltStuck(bool stuck)
		{
			_beltStuck = stuck;
		}

		public void SetBeltHasMove(bool hasMove)
		{
			_beltHasMove = hasMove;
		}

		public void SetBeltDeadlocked(bool deadlocked)
		{
			_beltDeadlocked = deadlocked;
			if (!deadlocked)
			{
				_deadlockReported = false;
			}
		}

		private void OnGridFullTimeout()
		{
			SetOutOfSlotAlert(false, () =>
			{
				_alertActive = false;
				LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
				if (level == null)
				{
					return;
				}
				if (level.IsAllowInteract)
				{
					level.TriggerOutOfServeSlot();
					return;
				}
				if (_fullAlert != null)
				{
					_fullAlert.Reset();
				}
			});
		}

		private void SetOutOfSlotAlert(bool on, Action onHidden = null)
		{
			if (_outOfSlotAlertOn != on)
			{
				_outOfSlotAlertOn = on;
				if (GameplayUI.Ins != null)
				{
					if (on)
					{
						GameplayUI.Ins.ShowAlert((AlertType)2);
						return;
					}
					GameplayUI.Ins.HideAlert((AlertType)2, onHidden);
					return;
				}
			}
			_outOfSlotAlertOn = on;
			if (onHidden != null && !on)
			{
				onHidden();
			}
		}

		private void TickDrainedRescue(bool busy)
		{
			MessyController messy = MessyController.Ins;
			IngredientSpawnerController spawner = messy != null ? messy.Spawner : null;
			FCustomerLineHandle line = messy != null ? messy.LineHandle : null;
			if (!busy && spawner != null && spawner.IsDrained && line != null)
			{
				List<string> recipes = line.GetActiveUnservedRecipes();
				if (recipes != null && recipes.Count > 0 && !AnyGridItemHasMove())
				{
					if (_drainedRescues >= MaxDrainedRescues)
					{
						return;
					}
					if (_drainedSince < 0f)
					{
						_drainedSince = Time.time;
						_rescuePlan = ReadRescuePlan(messy);
						return;
					}
					if (Time.time - _drainedSince < DrainedRescueDelay)
					{
						return;
					}
					string plan = ReadRescuePlan(messy);
					if (plan == _rescuePlan)
					{
						_drainedSince = -1f;
						if (_rescueItems != null)
						{
							if (_rescueItems.Count != 0)
							{
								_drainedRescues++;
								// literal recovered by guess
								UnityEngine.Debug.LogWarning("Drained belt rescue #" + _drainedRescues + ": " + plan);
								spawner.RefillDrainedBelt(_rescueItems);
								return;
							}
							if (!_rescueJamReported)
							{
								// literal recovered by guess
								UnityEngine.Debug.LogError("Drained belt rescue found no items to refill");
							}
							_rescueJamReported = true;
							return;
						}
					}
					else
					{
						_drainedSince = Time.time;
						_rescuePlan = plan;
						return;
					}
				}
			}
			_rescueJamReported = false;
			_drainedSince = -1f;
		}

		private string ReadRescuePlan(MessyController messy)
		{
			// Reconstructed: collect the raw ingredients still needed to finish the open orders; the joined ids double as the plan signature.
			_rescueItems.Clear();
			LevelPieceBook book = (messy != null && messy.Info != null) ? messy.Info.Pieces : null;
			if (book == null)
			{
				return string.Empty;
			}
			book.CollectRawToFinishOpenOrders(_rescueItems);
			System.Text.StringBuilder sb = new System.Text.StringBuilder();
			foreach (IngredientState item in _rescueItems)
			{
				if (item != null)
				{
					sb.Append(item.id).Append('x').Append(item.amount).Append(',');
				}
			}
			return sb.ToString();
		}

		private void LoseOnDeadlock()
		{
			_deadlockSince = -1f;
			_deadlockReported = true;
			_alertActive = false;
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level != null)
			{
				level.TriggerBeltDeadlock();
			}
		}

		private static bool AnyGridItemHasMove()
		{
			MessyController messy = MessyController.Ins;
			if (messy == null)
			{
				return true;
			}
			List<DragItem> items = messy.GetDragItems();
			if (items == null)
			{
				return true;
			}
			foreach (DragItem item in items)
			{
				if (item != null && item.IsLandedInCell && HasMoveFor(messy, item))
				{
					return true;
				}
			}
			return false;
		}

		private static bool HasMoveFor(MessyController messy, DragItem item)
		{
			if (messy == null || item == null)
			{
				return false;
			}
			string id = item.GetId();
			ServeShelfController shelf = messy.ServeShelf;
			if (shelf != null && shelf.CanTakeIdDirect(id))
			{
				return true;
			}
			List<CookingStation> stations = messy.GetCookingStations();
			if (stations == null || messy.Info == null)
			{
				return false;
			}
			foreach (CookingStation station in stations)
			{
				if (station == null || !station.GetInteractVector(id).IsValid)
				{
					continue;
				}
				if (messy.Info.CanAutoFeed(station, id))
				{
					return true;
				}
			}
			return false;
		}

		private static bool AnyStationResolvingJam()
		{
			MessyController messy = MessyController.Ins;
			if (messy == null)
			{
				return false;
			}
			List<CookingStation> stations = messy.GetCookingStations();
			if (stations == null)
			{
				return false;
			}
			foreach (CookingStation station in stations)
			{
				if (station != null && station.IsResolvingJam)
				{
					return true;
				}
			}
			return false;
		}

		private static bool AnyStationMidCook()
		{
			MessyController messy = MessyController.Ins;
			if (messy == null)
			{
				return false;
			}
			List<CookingStation> stations = messy.GetCookingStations();
			if (stations == null)
			{
				return false;
			}
			foreach (CookingStation station in stations)
			{
				if (station != null && station.IsMidCook)
				{
					return true;
				}
			}
			return false;
		}

		private void SetAlertActive(bool active)
		{
			_alertActive = active;
		}

		private bool IsGridFull()
		{
			return CountFreeCells(1) == 0;
		}

		private int CountFreeCells(int stopAt)
		{
			if (stopAt < 2)
			{
				stopAt = 1;
			}
			int free = 0;
			foreach (Vector2Int coord in Layout.EnabledCells())
			{
				IngCell cell = TryGetExistingCell(coord);
				if (cell != null && !cell.IsEmpty)
				{
					continue;
				}
				free++;
				if (free == stopAt)
				{
					return free;
				}
			}
			return free;
		}

		private void TickFullAlert()
		{
			// Rebuilt from the decompiled code (field offsets mapped by counting the stub's fields; Hide() is taken to be IngGridFullAlert.Reset()).
			if (_fullAlert == null)
			{
				return;
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level == null || level.PlayState != LevelPlayState.Playing)
			{
				_stuckSince = -1f;
				_drainedSince = -1f;
				_alertActive = false;
				SetOutOfSlotAlert(false);
				_fullAlert.Reset();
				return;
			}
			MessyController messy = MessyController.Ins;
			FCustomerLineHandle lineHandle = messy != null ? messy.LineHandle : null;
			bool clearing = lineHandle != null && lineHandle.IsClearingForNextCustomer;
			ServeShelfController shelf = messy != null ? messy.ServeShelf : null;
			bool mergesInFlight = shelf != null && shelf.HasMergesInFlight;
			bool boosterHolding = messy != null && messy.IsBoosterHolding;
			bool busy = clearing || mergesInFlight || boosterHolding || AnyStationResolvingJam();
			bool midCook = AnyStationMidCook();
			bool allowInteract = level.IsAllowInteract;
			int free = CountFreeCells(alertWarnFreeCells + 1);
			bool gated = busy || midCook || !allowInteract;
			TickDrainedRescue(gated || free == 0);
			if (_beltDeadlocked && free != 0 && !_deadlockReported && !gated && !AnyGridItemHasMove())
			{
				if (_deadlockSince < 0f)
				{
					_deadlockSince = Time.time;
				}
				_alertActive = true;
				SetOutOfSlotAlert(false);
				_fullAlert.Tick(false, false);
				if (Time.time - _deadlockSince >= deadlockLoseDelay)
				{
					LoseOnDeadlock();
				}
				return;
			}
			_deadlockSince = -1f;
			// outcome: 0 = reset the alert, 1 = stop the timer but keep warning, 2 = run the stuck timer
			int outcome;
			if (!allowInteract && !_fullAlert.IsBlinking)
			{
				outcome = 0;
			}
			else
			{
				bool blocked;
				bool toStuckCheck;
				if (alertWarnFreeCells < free && !_beltStuck)
				{
					blocked = true;
					toStuckCheck = false;
				}
				else
				{
					blocked = busy;
					toStuckCheck = (free == 0 && !_beltHasMove) || _beltStuck;
				}
				if (!toStuckCheck)
				{
					outcome = blocked ? 0 : 1;
				}
				else if (blocked)
				{
					outcome = 0;
				}
				else
				{
					outcome = (busy || midCook) ? 1 : 2;
				}
			}
			if (outcome == 0)
			{
				_stuckSince = -1f;
				_alertActive = false;
				SetOutOfSlotAlert(false);
				_fullAlert.Tick(false, false);
				return;
			}
			if (outcome == 2)
			{
				if (_stuckSince < 0f)
				{
					_stuckSince = Time.time;
				}
				if (Time.time - _stuckSince >= alertStartDelay)
				{
					if (!_fullAlert.IsBlinking)
					{
						_alertActive = true;
						SetOutOfSlotAlert(true);
					}
					_fullAlert.Tick(true, true);
					return;
				}
				_fullAlert.Tick(true, false);
				return;
			}
			_stuckSince = -1f;
			_alertActive = false;
			SetOutOfSlotAlert(false);
			_fullAlert.Tick(true, false);
		}

		private void ApplyDirtyPlateConfig()
		{
			// Rebuilt from the decompiled code: the stack limit is MechanicFeaturesConfig.dirtyStack (the int at +0x20) of the progress scenario singleton.
			// The original dereferences the config unchecked; it is null-guarded here because the config import is not recovered.
			if (CakeOrder.CakeOrderSubsystem.GameProgressScenario.IsExistInstance)
			{
				CakeOrder.CakeOrderSubsystem.MechanicFeaturesConfig config = CakeOrder.CakeOrderSubsystem.GameProgressScenario.Instance.MechanicFeaturesConfig;
				if (config != null)
				{
					maxDirtyStack = config.dirtyStack;
				}
			}
		}

		public void SpawnDirtyPlateAt(Vector3 dishPos, DragItem prefab)
		{
			MessyController messy = MessyController.Ins;
			if (messy == null || prefab == null)
			{
				return;
			}
			DragItem plate = messy.SpawnDragItemPrefab(prefab, dishPos, false);
			if (plate == null)
			{
				return;
			}
			plate.maxStack = maxDirtyStack >= 1 ? maxDirtyStack : prefab.maxStack;
			if (_finder == null)
			{
				return;
			}
			if (!_finder.TryGetDirtyPlateCell(plate, out IngCell cell))
			{
				// literal recovered by guess
				UnityEngine.Debug.LogWarning("Dirty plate has no free cell: " + plate.GetId());
				messy.DespawnItem(plate);
				return;
			}
			plate.Tf.position = dishPos;
			plate.RegisterCell(cell);
			RefreshCellDishes();
		}

		public void SpawnFullDirtyStackAt(Vector3 pos, DragItem prefab)
		{
			if (prefab == null)
			{
				return;
			}
			int count = maxDirtyStack;
			if (count < 1)
			{
				count = prefab.maxStack;
				if (count < 1)
				{
					return;
				}
			}
			do
			{
				SpawnDirtyPlateAt(pos, prefab);
				count--;
			}
			while (count != 0);
		}

		public bool HasAnyDirtyPlate()
		{
			return _dirtyCleaner != null && _dirtyCleaner.HasAny();
		}

		public int ClearAllDirtyPlates()
		{
			return _dirtyCleaner != null ? _dirtyCleaner.ClearAll() : 0;
		}

		public int ClearAllDirtyPlatesTo(Vector3 target)
		{
			return _dirtyCleaner != null ? _dirtyCleaner.ClearAllTo(target) : 0;
		}

		public bool ClearTallestDirtyPlateStack()
		{
			return _dirtyCleaner != null && _dirtyCleaner.ClearTallestStack();
		}

		public bool SpawnDirtyPlateCleaner(Vector3 from)
		{
			// Rebuilt from the decompiled code. The original spawns the cleaner from a pool; a plain instance is used here.
			if (_dirtyCleaner == null || cleanerPrefab == null)
			{
				return false;
			}
			if (!_dirtyCleaner.TryGetTallestStackPos(out var target))
			{
				return false;
			}
			DirtyPlateCleanerItem cleaner = Instantiate(cleanerPrefab, from, Quaternion.identity);
			cleaner.gameObject.SetActive(true);
			cleaner.FlyTo(target, delegate
			{
				if (_dirtyCleaner != null)
				{
					_dirtyCleaner.ClearTallestStack();
				}
			});
			return true;
		}

		public bool RunSpiderCleanBooster(Action onFinished = null)
		{
			if (!Application.isPlaying || _spiderRunning || spiderPrefab == null || _dirtyCleaner == null)
			{
				return false;
			}
			if (!_dirtyCleaner.HasAny())
			{
				return false;
			}
			StartCoroutine(SpiderCleanRoutine(onFinished));
			return true;
		}

		private IEnumerator SpiderCleanRoutine(Action onFinished)
		{
			// Rebuilt from the decompiled state machine, written as a real iterator.
			_spiderRunning = true;
			SetInteractBlocked(true);
			List<DragItemStackable> targets;
			if (!spiderCleansAllStacks)
			{
				targets = _dirtyCleaner.TallestStackOnly();
			}
			else
			{
				targets = _dirtyCleaner.GatherByType(out float gatherWait);
				if (gatherWait > 0f)
				{
					yield return new WaitForSeconds(gatherWait);
				}
			}
			if (targets.Count > 0)
			{
				bool finished = false;
				// The original spawns the spider from a pool; a plain instance is used here and destroyed once it reports done.
				SpiderCleanerFx spider = Instantiate(spiderPrefab, transform.position, Quaternion.identity);
				spider.gameObject.SetActive(true);
				spider.Play(targets, delegate(DragItem item)
				{
					if (MessyController.Ins != null)
					{
						MessyController.Ins.DespawnItem(item);
					}
				}, delegate
				{
					finished = true;
				});
				float waited = 0f;
				while (!finished && waited < SpiderTimeout)
				{
					waited += Time.deltaTime;
					yield return null;
				}
				if (spider != null)
				{
					Destroy(spider.gameObject);
				}
			}
			RefreshCellDishes();
			_spiderRunning = false;
			SetInteractBlocked(false);
			onFinished?.Invoke();
		}

		private void SetInteractBlocked(bool on)
		{
			// Modifier owner recovered from the level singleton (inputBlockers); this object is the registered source
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level == null)
			{
				return;
			}
			if (on)
			{
				level.inputBlockers.AddModifier(this);
				return;
			}
			level.inputBlockers.RemoveModifier(this);
		}

		public void ApplySaveMeClearAndCollect(Action onDone = null)
		{
			if (!_collecting && Application.isPlaying && saveMeBag != null)
			{
				float dirtyWait = 0f;
				if (saveMeClearsDirtyPlates && _dirtyCleaner != null)
				{
					int cleared = _dirtyCleaner.ClearAll();
					if (cleared >= 1)
					{
						dirtyWait = (cleared - 1) * 0.06f + 0.12f + 0.12f;
					}
				}
				_collecting = true;
				StartCoroutine(CollectToSaveMeBagRoutine(dirtyWait, onDone));
				return;
			}
			if (onDone != null)
			{
				onDone();
			}
		}

		private IEnumerable<IngCell> BuiltCellsInScanOrder(bool fromRight = false)
		{
			List<IngCell> cells = new List<IngCell>();
			foreach (IngCell cell in _cells.Values)
			{
				if (cell != null)
				{
					cells.Add(cell);
				}
			}
			IngGridLayout layout = Layout;
			cells.Sort((a, b) => fromRight
				? layout.ScanOrderFromRight(a.Coord).CompareTo(layout.ScanOrderFromRight(b.Coord))
				: layout.ScanOrder(a.Coord).CompareTo(layout.ScanOrder(b.Coord)));
			return cells;
		}

		private List<DragItem> CollectGridIngredients()
		{
			// Rebuilt from the decompiled code. saveMeMaxCells (+0x6c) caps how many cells are swept when it is positive.
			List<DragItem> collected = new List<DragItem>();
			MessyController messy = MessyController.Ins;
			int cellsTaken = 0;
			foreach (IngCell cell in BuiltCellsInScanOrder(true))
			{
				if (saveMeMaxCells > 0 && saveMeMaxCells <= cellsTaken)
				{
					break;
				}
				int before = collected.Count;
				foreach (DragItem item in cell.Items)
				{
					if (IsSaveMeCollectable(cell, item, messy))
					{
						collected.Add(item);
					}
				}
				if (collected.Count > before)
				{
					cellsTaken++;
				}
			}
			return collected;
		}

		private static bool IsSaveMeCollectable(IngCell cell, DragItem item, MessyController messy)
		{
			// Rebuilt from the decompiled code. The bool read at DragItem+0x92 is taken to be IsWindingUp (inferred; the offset is not verified).
			if (item == null || item.IsWindingUp || !cell.IsLanded(item))
			{
				return false;
			}
			return messy == null || !messy.IsBookedByShelf(item);
		}

		public int CountCellsFreeableBySaveMe()
		{
			// Rebuilt from the decompiled code: count cells holding a collectable item, cap by saveMeMaxCells, then add the free cells
			// and subtract one when the save-me bag is missing or inactive.
			MessyController messy = MessyController.Ins;
			int cellsWithCollectable = 0;
			foreach (IngCell cell in _cells.Values)
			{
				if (cell == null)
				{
					continue;
				}
				foreach (DragItem item in cell.Items)
				{
					if (IsSaveMeCollectable(cell, item, messy))
					{
						cellsWithCollectable++;
						break;
					}
				}
			}
			if (saveMeMaxCells > 0)
			{
				cellsWithCollectable = Mathf.Min(cellsWithCollectable, saveMeMaxCells);
			}
			int bagAdjust = (saveMeBag != null && saveMeBag.gameObject.activeSelf) ? 0 : -1;
			return Mathf.Max(0, bagAdjust + CountFreeCells(int.MaxValue) + cellsWithCollectable);
		}

		private IEnumerator CollectToSaveMeBagRoutine(float dirtyWait, Action onDone)
		{
			// Rebuilt from the decompiled state machine. The original is a compiler-generated iterator; this is the same flow as a real one.
			SetInteractBlocked(true);
			SetStationsPaused(true);
			if (dirtyWait > 0f)
			{
				yield return new WaitForSeconds(dirtyWait);
			}
			List<DragItem> swept = CollectGridIngredients();
			TakeParkedForSweep(swept);
			// An already-open bag keeps its cell; otherwise the sweep picks the first cell it leaves empty.
			Vector2Int coord = (saveMeBag != null && saveMeBag.gameObject.activeSelf) ? _saveMeCoord : PickSaveMeBagCell(swept);
			IngGridLayout layout = Layout;
			Vector2 origin = layout.Origin;
			Vector3 target = new Vector3(origin.x + (coord.x + 0.5f) * layout.CellSize.x, origin.y + (coord.y + 0.5f) * layout.CellSize.y, 0f);
			_saveMeCoord = coord;
			layout.SetReservedCell(coord.x + (layout.Rows - 1 - coord.y) * layout.Cols);
			RefreshOccupiedCells();
			List<IngredientState> picked = new List<IngredientState>(swept.Count);
			foreach (DragItem item in swept)
			{
				if (item == null || !item.gameObject.activeSelf)
				{
					continue;
				}
				string id = item.GetId();
				if (string.IsNullOrEmpty(id))
				{
					UnityEngine.Debug.LogError("[SaveMe] item '" + item.name + "' kh\u00f4ng c\u00f3 id \u2192 b\u1ecf qua, kh\u00f4ng gom v\u00e0o t\u00fai.", item);
					continue;
				}
				picked.Add(new IngredientState(id, 1));
				item.UnregisterCell();
				PieceLedger.Step(item, "save-me sweep into bag");
				DragItem flying = item;
				item.JumpToTargetTween(target).OnComplete(delegate
				{
					if (flying != null)
					{
						PieceLedger.Finish(flying, PieceLedger.End.IntoBag);
						MessyController.Ins.DespawnItem(flying);
					}
				});
				if (collectStagger > 0f)
				{
					yield return new WaitForSeconds(collectStagger);
				}
			}
			if (picked.Count >= 1)
			{
				RefreshCellDishes();
				yield return new WaitForSeconds(0.5f);
				if (saveMeBag != null)
				{
					saveMeBag.transform.position = new Vector3(target.x + _saveMeBagOffset.x, target.y + _saveMeBagOffset.y, target.z + _saveMeBagOffset.z);
					saveMeBag.gameObject.SetActive(true);
					saveMeBag.AddIngredients(picked, RefreshOccupiedCells);
				}
			}
			SetStationsPaused(false);
			SetInteractBlocked(false);
			_collecting = false;
			onDone?.Invoke();
		}

		private Vector2Int PickSaveMeBagCell(List<DragItem> swept)
		{
			// Rebuilt from the decompiled code: the first enabled cell from the right that the sweep leaves empty; if none, the first
			// enabled cell from the right; if there are none at all, the layout's (0, Rows - 1) corner (the +0x24 field is Rows).
			foreach (Vector2Int coord in Layout.EnabledCellsFromRight())
			{
				if (EndsEmptyAfterSweep(coord, swept))
				{
					return coord;
				}
			}
			foreach (Vector2Int coord in Layout.EnabledCellsFromRight())
			{
				return coord;
			}
			return new Vector2Int(0, Layout.Rows - 1);
		}

		private bool EndsEmptyAfterSweep(Vector2Int coord, List<DragItem> swept)
		{
			// Rebuilt from the decompiled code: true when the cell is missing or every item in it is part of the sweep.
			IngCell cell = TryGetExistingCell(coord);
			if (cell == null)
			{
				return true;
			}
			foreach (DragItem item in cell.Items)
			{
				if (!swept.Contains(item))
				{
					return false;
				}
			}
			return true;
		}

		private static void SetStationsPaused(bool paused)
		{
			if (MessyController.Ins != null)
			{
				MessyController.Ins.SetStationsPaused(paused);
			}
		}

		private void SetupSaveMeBagAnchor()
		{
			// Rebuilt from the decompiled code: registers the bag's cell occupier and stores the bag's offset from the world position of its
			// first occupied cell, so the bag can later be placed on any cell.
			if (saveMeBag == null)
			{
				return;
			}
			GridCellOccupier occupier = saveMeBag.GetComponentInChildren<GridCellOccupier>(true);
			if (occupier == null)
			{
				return;
			}
			if (cellOccupiers != null)
			{
				cellOccupiers.Add(occupier);
			}
			int[] occupied = occupier.occupiedCellIndices;
			if (occupied == null || occupied.Length == 0)
			{
				return;
			}
			IngGridLayout layout = Layout;
			int index = occupied[0];
			int row = layout.Cols != 0 ? index / layout.Cols : 0;
			int col = index - row * layout.Cols;
			Vector3 bagPos = saveMeBag.transform.position;
			Vector2 origin = layout.Origin;
			Vector2 size = layout.CellSize;
			_saveMeBagOffset = new Vector3(bagPos.x - (origin.x + (col + 0.5f) * size.x), bagPos.y - (origin.y + (layout.Rows - 1 - row + 0.5f) * size.y), bagPos.z);
		}

		private void ReleaseSaveMeBag()
		{
			if (saveMeBag != null)
			{
				saveMeBag.gameObject.SetActive(false);
			}
			Layout.SetReservedCell(-1);
			RefreshOccupiedCells();
			_cellFreedPending = true;
		}

		private void ToggleDrawGrid()
		{
			_drawGrid = !_drawGrid;
		}

		public IEnumerable<IngCell> CellsInScanOrder()
		{
			return BuiltCellsInScanOrder();
		}

		public bool IsCellAvailable(string id, int num)
		{
			return _finder != null && _finder.IsCellAvailable(id, num);
		}

		public int CountAvailable(string id, int max)
		{
			return _finder != null ? _finder.CountAvailable(id, max) : 0;
		}

		public bool CanPlaceAll(IReadOnlyList<string> ids)
		{
			return _finder != null && _finder.CanPlaceAll(ids);
		}

		public void ReservePendingCell(string id)
		{
			if (_finder != null)
			{
				_finder.ReservePending(id);
			}
		}

		public void ReleasePendingCell(string id)
		{
			if (_finder != null)
			{
				_finder.ReleasePending(id);
			}
		}

		public bool TryGetCell(DragItem item, out IngCell result)
		{
			if (_finder == null)
			{
				result = null;
				return false;
			}
			return _finder.TryGetCell(item, out result);
		}

		public bool TryGetCellNearest(DragItem item, out IngCell result)
		{
			if (_finder == null)
			{
				result = null;
				return false;
			}
			return _finder.TryGetCellNearest(item, out result);
		}

		public void PlayCellGlow(Vector2Int coord)
		{
			IngCellDisplay display = _displayPool != null ? _displayPool.TryGet(coord) : null;
			if (display != null)
			{
				display.PlayGlow();
			}
		}

		public void ShowCellDish(Vector2Int coord, bool show)
		{
			IngCellDisplay display = _displayPool != null ? _displayPool.TryGet(coord) : null;
			if (display != null)
			{
				display.SetDish(show);
			}
		}

		private IngCell TryGetExistingCell(Vector2Int coord)
		{
			IngCell cell;
			return _cells.TryGetValue(coord, out cell) ? cell : null;
		}

		private IngCell GetOrCreateCell(Vector2Int coord)
		{
			IngCell cell = TryGetExistingCell(coord);
			if (cell == null)
			{
				cell = new IngCell(coord, GetCellWorldCenter(coord.x, coord.y), Layout.CellSize);
				// <GetOrCreateCell>b__0: an item leaving the cell frees it
				cell.OnItemRemoved = () => _cellFreedPending = true;
				// <GetOrCreateCell>b__1: a landed item shows its dish at the cell centre
				cell.OnLanded = item =>
				{
					if (_cellStatus != null)
					{
						_cellStatus.ShowDish(coord, item, cell.WorldCenter);
					}
				};
				_cells[coord] = cell;
			}
			return cell;
		}

		public void RefreshCellDishes()
		{
			if (_cellStatus != null)
			{
				_cellStatus.HideEmptyDishes(TryGetExistingCell);
			}
		}

		public Vector3 GetCellWorldCenter(int col, int row)
		{
			return Layout.GetCellWorldCenter(col, row);
		}

		public void RefreshOccupiedCells()
		{
			Layout.RefreshOccupied(cellOccupiers);
		}

		public IEnumerable<DragItem> GetRemainingItems()
		{
			foreach (IngCell cell in BuiltCellsInScanOrder())
			{
				IReadOnlyList<DragItem> items = cell.Items;
				for (int i = 0; i < items.Count; i++)
				{
					DragItem item = items[i];
					if (item != null)
					{
						yield return item;
					}
				}
			}
		}

		private void DebugLogAlertState()
		{
			// TODO(unrecovered): diagnostic log body not recovered
		}

		public string BuildAlertReport()
		{
			// TODO(unrecovered): alert report text not recovered
			return null;
		}

		private static string DebugGridItemMove(MessyController messy, DragItem item)
		{
			// TODO(unrecovered): diagnostic string not recovered
			return null;
		}
	}
}
