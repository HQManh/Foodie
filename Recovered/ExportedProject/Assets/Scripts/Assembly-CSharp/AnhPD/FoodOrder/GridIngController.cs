using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.InGame;
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

		private readonly Dictionary<Vector2Int, IngCell> _cells;

		private bool _drawGrid;

		private bool _cellFreedPending;

		private IngGridLayout _layout;

		private IngCellFinder _finder;

		private IngCellStatus _cellStatus;

		private IngCellDisplayPool _displayPool;

		private IngDirtyPlateCleaner _dirtyCleaner;

		private readonly List<DragItem> _parked;

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

		private readonly List<IngredientState> _rescueItems;

		private bool _alertActive;

		private float _stuckSince;

		private bool _spiderRunning;

		private const float SpiderTimeout = 10f;

		private bool _collecting;

		private Vector2Int _saveMeCoord;

		private Vector3 _saveMeBagOffset;

		private IngGridLayout Layout => null;

		public IReadOnlyList<DragItem> ParkedItems => null;

		private bool IsDeadlockCounting => false;

		public bool IsFullAlertBlinking => false;

		public bool IsDeadlockBlinking => false;

		public float FullAlertBlinkPhase => 0f;

		private float DeadlockBlinkPhase => 0f;

		public bool IsBeltTapBlocked => false;

		private string ToggleGridLabel => null;

		public Vector2Int SaveMeCoord => default;

		public bool HasSaveMeBag => false;

		private IngGridLayout BuildLayout()
		{
			return null;
		}

		private void Awake()
		{
		}

		private void OnDestroy()
		{
		}

		public void UnlockColorWithKey(KeyTag key)
		{
		}

		public void SetupCellGrid(CakeLevelInitData initData)
		{
		}

		private void LateUpdate()
		{
		}

		public void Park(DragItem item)
		{
		}

		public void Unpark(DragItem item)
		{
		}

		private void LandParked()
		{
		}

		private void TakeParkedForSweep(List<DragItem> into)
		{
		}

		private void SetupFullAlert()
		{
		}

		public void PulseFullAlert(float cycleDuration)
		{
		}

		public void SetBeltStuck(bool stuck)
		{
		}

		public void SetBeltHasMove(bool hasMove)
		{
		}

		public void SetBeltDeadlocked(bool deadlocked)
		{
		}

		private void OnGridFullTimeout()
		{
		}

		private void SetOutOfSlotAlert(bool on, Action onHidden = null)
		{
		}

		private void TickDrainedRescue(bool busy)
		{
		}

		private string ReadRescuePlan(MessyController messy)
		{
			return null;
		}

		private void LoseOnDeadlock()
		{
		}

		private static bool AnyGridItemHasMove()
		{
			return false;
		}

		private static bool HasMoveFor(MessyController messy, DragItem item)
		{
			return false;
		}

		private static bool AnyStationResolvingJam()
		{
			return false;
		}

		private static bool AnyStationMidCook()
		{
			return false;
		}

		private void SetAlertActive(bool active)
		{
		}

		private bool IsGridFull()
		{
			return false;
		}

		private int CountFreeCells(int stopAt)
		{
			return 0;
		}

		private void TickFullAlert()
		{
		}

		private void ApplyDirtyPlateConfig()
		{
		}

		public void SpawnDirtyPlateAt(Vector3 dishPos, DragItem prefab)
		{
		}

		public void SpawnFullDirtyStackAt(Vector3 pos, DragItem prefab)
		{
		}

		public bool HasAnyDirtyPlate()
		{
			return false;
		}

		public int ClearAllDirtyPlates()
		{
			return 0;
		}

		public int ClearAllDirtyPlatesTo(Vector3 target)
		{
			return 0;
		}

		public bool ClearTallestDirtyPlateStack()
		{
			return false;
		}

		public bool SpawnDirtyPlateCleaner(Vector3 from)
		{
			return false;
		}

		public bool RunSpiderCleanBooster(Action onFinished = null)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CSpiderCleanRoutine_003Ed__102))]
		private IEnumerator SpiderCleanRoutine(Action onFinished)
		{
			return null;
		}

		private void SetInteractBlocked(bool on)
		{
		}

		public void ApplySaveMeClearAndCollect(Action onDone = null)
		{
		}

		private IEnumerable<IngCell> BuiltCellsInScanOrder(bool fromRight = false)
		{
			return null;
		}

		private List<DragItem> CollectGridIngredients()
		{
			return null;
		}

		private static bool IsSaveMeCollectable(IngCell cell, DragItem item, MessyController messy)
		{
			return false;
		}

		public int CountCellsFreeableBySaveMe()
		{
			return 0;
		}

		[IteratorStateMachine(typeof(_003CCollectToSaveMeBagRoutine_003Ed__111))]
		private IEnumerator CollectToSaveMeBagRoutine(float dirtyWait, Action onDone)
		{
			return null;
		}

		private Vector2Int PickSaveMeBagCell(List<DragItem> swept)
		{
			return default;
		}

		private bool EndsEmptyAfterSweep(Vector2Int coord, List<DragItem> swept)
		{
			return false;
		}

		private static void SetStationsPaused(bool paused)
		{
		}

		private void SetupSaveMeBagAnchor()
		{
		}

		private void ReleaseSaveMeBag()
		{
		}

		private void ToggleDrawGrid()
		{
		}

		public IEnumerable<IngCell> CellsInScanOrder()
		{
			return null;
		}

		public bool IsCellAvailable(string id, int num)
		{
			return false;
		}

		public int CountAvailable(string id, int max)
		{
			return 0;
		}

		public bool CanPlaceAll(IReadOnlyList<string> ids)
		{
			return false;
		}

		public void ReservePendingCell(string id)
		{
		}

		public void ReleasePendingCell(string id)
		{
		}

		public bool TryGetCell(DragItem item, out IngCell result)
		{
			result = null;
			return false;
		}

		public bool TryGetCellNearest(DragItem item, out IngCell result)
		{
			result = null;
			return false;
		}

		public void PlayCellGlow(Vector2Int coord)
		{
		}

		public void ShowCellDish(Vector2Int coord, bool show)
		{
		}

		private IngCell TryGetExistingCell(Vector2Int coord)
		{
			return null;
		}

		private IngCell GetOrCreateCell(Vector2Int coord)
		{
			return null;
		}

		public void RefreshCellDishes()
		{
		}

		public Vector3 GetCellWorldCenter(int col, int row)
		{
			return default;
		}

		public void RefreshOccupiedCells()
		{
		}

		[IteratorStateMachine(typeof(_003CGetRemainingItems_003Ed__141))]
		public IEnumerable<DragItem> GetRemainingItems()
		{
			return null;
		}

		private void DebugLogAlertState()
		{
		}

		public string BuildAlertReport()
		{
			return null;
		}

		private static string DebugGridItemMove(MessyController messy, DragItem item)
		{
			return null;
		}
	}
}
