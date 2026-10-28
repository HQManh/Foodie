using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.DataSO;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Rendering;

namespace AnhPD.FoodOrder
{
	public class CookingStation : InteractableItem
	{
		[SerializeField]
		protected string id;

		public string alternativeStringId;

		public CakeToolSO config;

		[SerializeField]
		private ProgressDriver progress;

		[SerializeField]
		private SortingGroup sortingGroup;

		[SerializeField]
		private HighlightBlink rejectBlink;

		[SerializeField]
		protected StationInteractGroup[] groups;

		private StationRuntimeState _state;

		protected StationOrchestrator _orchestrator;

		private AutoProcessor _processor;

		private StationGridFeeder _gridFeeder;

		private const float WaitingRetryInterval = 0.4f;

		private float _nextWaitingRetry;

		private static bool _preferring;

		private InteractVector _deferredStart = InteractVector.Invalid;

		private int _releasing;

		private const float NormalSpeed = 1f;

		private bool _isPaused;

		private bool _intakeHeld;

		private const float FallbackCookDuration = 2f;

		public string Id => id;

		public IReadOnlyList<StationInteractGroup> Groups => groups;

		public bool IsMidCook
		{
			get
			{
				if (!_state.IsWorking)
				{
					return false;
				}
				return !_orchestrator.IsWaitingForCell;
			}
		}

		public string WorkingResultId
		{
			get
			{
				if (!_state.IsWorking)
				{
					return null;
				}
				return ResolveResultId(_state.Current.groupIndex);
			}
		}

		public int OwedResults => _releasing + _orchestrator.OwedResults;

		public bool IsResolvingJam
		{
			get
			{
				if (!MessyController.Ins)
				{
					return false;
				}
				LevelInfo info = MessyController.Ins.Info;
				if (info == null)
				{
					return false;
				}
				if (info.IsInbound(this))
				{
					return true;
				}
				if (_state.IsWorking && !_orchestrator.IsWaitingForCell)
				{
					return FinishingBreaksJam(_state.Current.groupIndex);
				}
				return false;
			}
		}

		public bool IsPaused => _isPaused;

		public bool AcceptsNewIntake
		{
			get
			{
				if (_isPaused || _intakeHeld)
				{
					return false;
				}
				return !IsViewIntakeBusy;
			}
		}

		private bool IsViewIntakeBusy
		{
			get
			{
				for (int i = 0; i < groups.Length; i++)
				{
					StationInteractGroup group = groups[i];
					if (group != null && group.View && group.View.IsIntakeBusy)
					{
						return true;
					}
				}
				return false;
			}
		}

		private static bool IsPickAnyPicking
		{
			get
			{
				if (!MessyController.Ins)
				{
					return false;
				}
				if (!MessyController.Ins.Spawner)
				{
					return false;
				}
				return MessyController.Ins.Spawner.IsPickAnyActive;
			}
		}

		protected override void Awake()
		{
			base.Awake();
			_state = new StationRuntimeState();
			_processor = new AutoProcessor(3f);
			_orchestrator = new StationOrchestrator(_state, groups, _processor, progress, HandleComplete, GetSpawnableCount, SpawnResult, OnWorkingChanged);
			_gridFeeder = new StationGridFeeder(this);
			GameEventBus.Subscribe<GridCellFreedEvent>(OnGridCellFreed);
		}

		protected virtual void Update()
		{
			_gridFeeder.Tick();
			TickWaitingRetry();
			TickDeferredStart();
		}

		private void TickWaitingRetry()
		{
			if (!_isPaused && _nextWaitingRetry <= Time.time)
			{
				_nextWaitingRetry = Time.time + 0.4f;
				if (!_orchestrator.IsWaitingForCell || !_orchestrator.TryResolveWaiting())
				{
					TryRefineInPlace();
				}
			}
		}

		private void TryRefineInPlace()
		{
			if (!_orchestrator.IsWaitingForCell || _orchestrator.PendingRemaining != 1 || _isPaused || _intakeHeld || IsViewIntakeBusy)
			{
				return;
			}
			int groupIndex = _state.Current.groupIndex;
			string text = ResolveResultId(groupIndex);
			if (!TryGetAcceptingGroup(text, out var groupIndex2) || groupIndex2 == groupIndex || groups[groupIndex2].FilledCount != 0 || !MessyController.Ins)
			{
				return;
			}
			LevelInfo info = MessyController.Ins.Info;
			if (info == null || !info.WantsRefineInPlace(ResolveResultId(groupIndex2)))
			{
				return;
			}
			_state.IsResultSpawned = true;
			if (_orchestrator.IsWaitingForCell)
			{
				_orchestrator.TryResolveWaiting();
			}
			InteractVector interactVector = GetInteractVector(text);
			if (interactVector.IsValid && groupIndex2 == interactVector.groupIndex)
			{
				PutInIngredient(interactVector);
			}
		}

		private void OnDestroy()
		{
			GameEventBus.Unsubscribe<GridCellFreedEvent>(OnGridCellFreed);
		}

		protected virtual void OnGridCellFreed(GridCellFreedEvent _)
		{
			if (!_isPaused && _orchestrator.IsWaitingForCell)
			{
				_orchestrator.TryResolveWaiting();
			}
		}

		public void SetId(string newId)
		{
			id = newId;
		}

		public void Setup(CakeToolSO cf, LevelSupply supply, RecipeConfigSO recipeConfig)
		{
			config = cf;
			for (int i = 0; i < groups.Length; i++)
			{
				StationInteractGroup stationInteractGroup = groups[i];
				stationInteractGroup.SetAnchors(recipeConfig ? recipeConfig.GetAnchorsOf(stationInteractGroup.resultId) : null);
				if (supply != null && !string.IsNullOrEmpty(stationInteractGroup.resultId))
				{
					stationInteractGroup.SetLocked(!supply.HasIngredient(stationInteractGroup.resultId));
				}
			}
		}

		public void TrySetupResultNumer(IngredientProcessConfig[] ingredientInfos)
		{
			for (int i = 0; i < ingredientInfos.Length; i++)
			{
				IngredientProcessConfig ingredientProcessConfig = ingredientInfos[i];
				for (int j = 0; j < groups.Length; j++)
				{
					StationInteractGroup stationInteractGroup = groups[j];
					if (stationInteractGroup.FilledCount != 0)
					{
						return;
					}
					if (stationInteractGroup.AcceptsId(ingredientProcessConfig.ingredientId /* field name guessed */))
					{
						int[] resultNumbers = ingredientProcessConfig.resultNumbers /* field name guessed */;
						stationInteractGroup.SetBaseResultNumber((resultNumbers.Length == 0) ? 1 : resultNumbers[0]);
						break;
					}
				}
			}
		}

		public virtual InteractVector GetInteractVector(string ingId)
		{
			int num = -1;
			for (int i = 0; i < groups.Length; i++)
			{
				StationInteractGroup stationInteractGroup = groups[i];
				if (stationInteractGroup.IsInteracting)
				{
					return new InteractVector(i, stationInteractGroup.GetInteractIndex(ingId));
				}
				if (stationInteractGroup.IsCanInteract(ingId))
				{
					num = PreferGroup(num, i);
				}
			}
			if (num < 0)
			{
				return InteractVector.Invalid;
			}
			return new InteractVector(num, groups[num].GetInteractIndex(ingId));
		}

		private int PreferGroup(int current, int candidate)
		{
			if (current < 0)
			{
				return candidate;
			}
			if (_preferring)
			{
				return current;
			}
			if (!MessyController.Ins)
			{
				return current;
			}
			LevelInfo info = MessyController.Ins.Info;
			if (info == null)
			{
				return current;
			}
			int num = info.InboundGroupOf(this);
			if (num == candidate || num == current)
			{
				return num;
			}
			_preferring = true;
			int num2 = info.StationResultDemand(ResolveResultId(candidate));
			int num3 = info.StationResultDemand(ResolveResultId(current));
			int num4 = ((num2 >= 1) ? ShelfGainOfResult(candidate) : 0);
			int num5 = ((num3 >= 1) ? ShelfGainOfResult(current) : 0);
			int result = ((num2 > num3) ? candidate : current);
			if (num4 != num5)
			{
				result = ((num4 > num5) ? candidate : current);
			}
			_preferring = false;
			return result;
		}

		public virtual int CountFreeSlots(string ingId)
		{
			if (!GetInteractVector(ingId).IsValid)
			{
				return 0;
			}
			int num = 0;
			for (int i = 0; i < groups.Length; i++)
			{
				num += groups[i].CountFreeSlots(ingId);
			}
			return (num > 1) ? num : 1;
		}

		public virtual bool TryGetIntakeGroup(string ingId, out int groupIndex, out int freeSlots)
		{
			bool intakeHeld = _intakeHeld;
			groupIndex = -1;
			freeSlots = 0;
			if ((intakeHeld && !IsPickAnyPicking) || IsViewIntakeBusy)
			{
				return false;
			}
			InteractVector interactVector = GetInteractVector(ingId);
			if (!interactVector.IsValid)
			{
				return false;
			}
			if (groups.Length <= interactVector.groupIndex)
			{
				freeSlots = 1;
				return true;
			}
			groupIndex = interactVector.groupIndex;
			freeSlots = groups[groupIndex].CountFreeSlots(ingId);
			return freeSlots > 0;
		}

		public virtual bool WantsAutoIntake(string ingId)
		{
			return true;
		}

		public virtual bool AcceptsId(string ingId)
		{
			int groupIndex;
			return TryGetAcceptingGroup(ingId, out groupIndex);
		}

		public bool TryGetAcceptingGroup(string ingId, out int groupIndex)
		{
			groupIndex = -1;
			for (int i = 0; i < groups.Length; i++)
			{
				if (groups[i].AcceptsId(ingId))
				{
					groupIndex = PreferGroup(groupIndex, i);
				}
			}
			return groupIndex >= 0;
		}

		public void PlayRejectBlink(float cycleDuration)
		{
			if ((bool)rejectBlink)
			{
				rejectBlink.BlinkOnce(cycleDuration);
			}
		}

		public Transform GetJumpTarget(InteractVector vector)
		{
			Transform transform = null;
			if (HasGroup(vector))
			{
				transform = groups[vector.groupIndex].GetJumpTarget(vector.interactIndex);
			}
			if (!transform)
			{
				transform = center;
			}
			return transform;
		}

		public float GetJumpScaleRation(InteractVector vector)
		{
			if (!HasGroup(vector))
			{
				return 1f;
			}
			return groups[vector.groupIndex].GetScaleRation(vector.interactIndex);
		}

		public Tween CreateIngredientFlight(DragItem item, InteractVector vector)
		{
			if (HasGroup(vector))
			{
				StationGroupView view = groups[vector.groupIndex].View;
				if (view != null)
				{
					Tween tween = view.CreateIngredientFlight(item, vector.interactIndex);
					if (tween != null)
					{
						return tween;
					}
				}
			}
			Transform jumpTarget = GetJumpTarget(vector);
			return item.JumpToTargetTween(jumpTarget.position, false, GetJumpScaleRation(vector));
		}

		private bool HasGroup(InteractVector vector)
		{
			if (vector.IsValid && groups != null)
			{
				return vector.groupIndex < groups.Length;
			}
			return false;
		}

		public virtual void PutInIngredient(InteractVector vector)
		{
			if (!vector.IsValid)
			{
				return;
			}
			float cookDuration = GetCookDuration(vector);
			if (cookDuration > 0f)
			{
				_processor.SetDuration(cookDuration);
			}
			groups[vector.groupIndex].PutInIngredient(vector.interactIndex, _processor.GetExecutionContext());
			if (CanStartProcess(vector))
			{
				if (!IsViewIntakeBusy)
				{
					_orchestrator.TryStartProcess(vector);
				}
				else
				{
					_deferredStart = vector;
				}
			}
			if (_isPaused)
			{
				ApplyPause(paused: true);
			}
		}

		private void TickDeferredStart()
		{
			if (_deferredStart.groupIndex >= 0 && _deferredStart.interactIndex >= 0 && !_isPaused && !IsViewIntakeBusy)
			{
				InteractVector deferredStart = _deferredStart;
				_deferredStart = InteractVector.Invalid;
				_orchestrator.TryStartProcess(deferredStart);
			}
		}

		protected virtual bool CanStartProcess(InteractVector vector)
		{
			return true;
		}

		protected virtual void OnWorkingChanged(bool working)
		{
		}

		protected virtual string ResolveResultId(int groupIndex)
		{
			return groups[groupIndex].resultId;
		}

		public string GetResultIdFor(string ingId)
		{
			InteractVector interactVector = GetInteractVector(ingId);
			if (!interactVector.IsValid)
			{
				return null;
			}
			return ResolveResultId(interactVector.groupIndex);
		}

		public string ResultIdOfGroup(int groupIndex)
		{
			if (groupIndex >= 0 && groupIndex < groups.Length)
			{
				return ResolveResultId(groupIndex);
			}
			return null;
		}

		public string ResultIdIfFed(string ingId)
		{
			int groupIndex = 0;
			InteractVector interactVector = GetInteractVector(ingId);
			if (interactVector.IsValid)
			{
				string text = ResolveResultId(interactVector.groupIndex);
				if (text != null)
				{
					return text;
				}
			}
			if (TryGetAcceptingGroup(ingId, out groupIndex) && groupIndex >= 0 && groupIndex < groups.Length)
			{
				return ResolveResultId(groupIndex);
			}
			return null;
		}

		protected bool ShelfWouldTakeResult(int groupIndex)
		{
			return ShelfGainOfResult(groupIndex) > 0;
		}

		protected virtual int ShelfGainOfResult(int groupIndex)
		{
			ServeShelfController serveShelfController = null;
			if ((bool)MessyController.Ins)
			{
				serveShelfController = MessyController.Ins.ServeShelf;
			}
			if (!serveShelfController)
			{
				return 0;
			}
			return serveShelfController.ScoreGainForId(ResolveResultId(groupIndex));
		}

		public bool IsCookingForShelf()
		{
			if (_state.IsWorking)
			{
				return ShelfGainOfResult(_state.Current.groupIndex) > 0;
			}
			return false;
		}

		public int CountHeldInputs(string ingId)
		{
			return CountHeldInputs(ingId, null);
		}

		public virtual int CountHeldInputs(string ingId, string forResultId)
		{
			if (WorkingResultId != null)
			{
				return 0;
			}
			int num = 0;
			for (int i = 0; i < groups.Length; i++)
			{
				StationInteractGroup stationInteractGroup = groups[i];
				if (stationInteractGroup == null || stationInteractGroup.slots == null)
				{
					continue;
				}
				if (forResultId != null && ResolveResultId(i) != forResultId)
				{
					continue;
				}
				StationSlot[] slots = stationInteractGroup.slots;
				for (int j = 0; j < slots.Length; j++)
				{
					StationSlot stationSlot = slots[j];
					if (stationSlot != null && stationSlot.isOccupied && stationSlot.ingId == ingId)
					{
						num++;
					}
				}
			}
			return num;
		}

		protected bool AnyGroupMakes(string resultId)
		{
			for (int i = 0; i < groups.Length; i++)
			{
				if (ResolveResultId(i) == resultId)
				{
					return true;
				}
			}
			return false;
		}

		public string DebugJamState()
		{
			if (!MessyController.Ins)
			{
				return "";
			}
			LevelInfo info = MessyController.Ins.Info;
			if (info == null)
			{
				return "";
			}
			int groupIndex = _state.Current.groupIndex;
			bool flag = info.IsInbound(this);
			bool isWorking = _state.IsWorking;
			bool isWaitingForCell = _orchestrator.IsWaitingForCell;
			string text = "-";
			if (isWorking && groupIndex >= 0 && groupIndex < groups.Length)
			{
				text = CountHomesForResult(groupIndex, 1).ToString();
			}
			string text2 = "-";
			if (TryPickSwapRaw(out var raw))
			{
				text2 = raw.GetId();
			}
			string text3 = string.Format("inbound={0} working={1} waiting={2} group={3}", flag, isWorking, isWaitingForCell, groupIndex);
			string text4 = "-";
			if (groupIndex >= 0 && groupIndex < groups.Length)
			{
				text4 = ResolveResultId(groupIndex);
			}
			string text5 = string.Format(" homes={0} swapRaw={1} resolving={2}", text, text2, IsResolvingJam);
			return string.Concat(text3, " result=", text4, text5);
		}

		protected virtual bool FinishingBreaksJam(int groupIndex)
		{
			return CountHomesForResult(groupIndex, 1) > 0;
		}

		public bool IsCellAvailable(int groupIndex)
		{
			int resultNumber = groups[groupIndex].GetResultNumber();
			return CountHomesForResult(groupIndex, resultNumber) >= resultNumber;
		}

		public bool IsCellAvailable(int groupIndex, int num)
		{
			return CountHomesForResult(groupIndex, num) >= num;
		}

		protected virtual bool CanSpawnResult(int groupIndex)
		{
			int resultNumber = groups[groupIndex].GetResultNumber();
			return CountHomesForResult(groupIndex, resultNumber) >= resultNumber;
		}

		protected virtual int GetSpawnableCount(int groupIndex, int want)
		{
			if (want > 0 && !_intakeHeld)
			{
				int num = CountHomesForResult(groupIndex, want);
				return (num >= 0) ? Math.Min(num, want) : 0;
			}
			return 0;
		}

		private int CountHomesForResult(int groupIndex, int want)
		{
			int num = CountRegularHomes(groupIndex, want);
			if (num < want)
			{
				num += CountSwapHomes(groupIndex, num);
			}
			return num;
		}

		private int CountRegularHomes(int groupIndex, int want)
		{
			LevelInfo info = MessyController.Ins.Info;
			string text = ResolveResultId(groupIndex);
			int num = info.CountCellAvailable(text, want);
			if (want - num != 0 && num <= want)
			{
				num += info.CountStationRoomFor(text, want - num);
			}
			if (num < want && ShelfGainOfResult(groupIndex) > 0)
			{
				num++;
			}
			return num;
		}

		private int CountSwapHomes(int groupIndex, int regularHomes)
		{
			if (!_isPaused && !_intakeHeld && !IsViewIntakeBusy)
			{
				int num;
				if (!_orchestrator.IsWaitingForCell)
				{
					num = groups[groupIndex].GetResultNumber();
					if (num < 2)
					{
						num = 1;
					}
				}
				else
				{
					num = _orchestrator.PendingRemaining;
				}
				if (num <= regularHomes + 1)
				{
					DragItem raw;
					return TryPickSwapRaw(out raw) ? 1 : 0;
				}
			}
			return 0;
		}

		private bool TryPickSwapRaw(out DragItem raw)
		{
			raw = null;
			MessyController ins = MessyController.Ins;
			if (!ins)
			{
				return false;
			}
			foreach (DragItem dragItem in ins.GetDragItems())
			{
				if (!dragItem || dragItem.IsOnDishRow || dragItem.DishControlled)
				{
					continue;
				}
				IngCell cell = dragItem.Cell;
				if (cell != null && cell.IsLanded(dragItem) && cell.Items.Count == 1 && cell.OccupiedCount == 1 && !ins.IsBookedByShelf(dragItem) && AcceptsWhenIdle(dragItem.GetId()) && ins.Info.WantsStationResult(this, dragItem.GetId()))
				{
					raw = dragItem;
					return true;
				}
			}
			return false;
		}

		private bool AcceptsWhenIdle(string ingId)
		{
			for (int i = 0; i < groups.Length; i++)
			{
				if (groups[i].FilledCount == 0 && groups[i].AcceptsId(ingId))
				{
					return true;
				}
			}
			return false;
		}

		private bool HasHomeForResult(int groupIndex, int num)
		{
			return CountHomesForResult(groupIndex, num) >= num;
		}

		protected virtual void SpawnResult(int groupIndex, int num)
		{
			ReleaseResult(groupIndex, num, null);
		}

		protected void ReleaseResult(int groupIndex, int num, Action<DragItem> onSpawned)
		{
			if (num <= 0)
			{
				return;
			}
			using (PieceLedger.From(PieceLedger.Source.StationResult, base.name, this))
			{
				string text = ResolveResultId(groupIndex);
				int num2 = CountRegularHomes(groupIndex, num);
				int num3 = Math.Min(num, num2);
				if ((bool)MessyController.Ins && MessyController.Ins.Info != null)
				{
					MessyController.Ins.Info.Pieces?.RecordProduced(text, num);
				}
				_releasing = num;
				if (num3 > 0)
				{
					MessyController.Ins.SpawnIngredient(text, num3, center.position, DragOrigin.Station, onSpawned);
				}
				if (num2 < num)
				{
					int num4 = num - num3;
					do
					{
						_releasing = num4;
						if (TryPickSwapRaw(out var raw))
						{
							SwapResultWithRaw(text, raw, onSpawned);
						}
						else
						{
							MessyController.Ins.SpawnIngredient(text, 1, center.position, DragOrigin.Station, onSpawned);
						}
						num4--;
					}
					while (num4 != 0);
				}
				_releasing = 0;
			}
		}

		private void SwapResultWithRaw(string resultId, DragItem raw, Action<DragItem> onSpawned)
		{
			MessyController ins = MessyController.Ins;
			IngCell cell = raw.Cell;
			ins.AutoFeedStationFromGrid(raw, this);
			DragItem dragItem = ins.SpawnAndGetDragItem(resultId, center.position, isJump: false, registerCell: false, DragOrigin.Station);
			onSpawned?.Invoke(dragItem);
			dragItem.RegisterCell(cell);
		}

		protected virtual void HandleComplete(int groupIndex, bool isResultSpawned, int num)
		{
			if (!isResultSpawned)
			{
				SpawnResult(groupIndex, num);
				GameEventBus.Publish(new StationCookedEvent
				{
					station = this
				});
			}
		}

		public void SetIntakeHeld(bool held)
		{
			if (_intakeHeld != held)
			{
				_intakeHeld = held;
				if (!held && _orchestrator.IsWaitingForCell)
				{
					_orchestrator.TryResolveWaiting();
				}
			}
		}

		public virtual void SetPaused(bool paused)
		{
			if (_isPaused != paused)
			{
				_isPaused = paused;
				ApplyPause(paused);
				if (!paused && _orchestrator.IsWaitingForCell)
				{
					_orchestrator.TryResolveWaiting();
				}
			}
		}

		private void ApplyPause(bool paused)
		{
			float speed = (paused ? 0f : 1f);
			progress.SetSpeed(speed);
			if (paused && !_state.IsWorking)
			{
				return;
			}
			for (int i = 0; i < groups.Length; i++)
			{
				StationGroupView view = groups[i].View;
				if (view != null)
				{
					view.SetPaused(paused);
				}
			}
		}

		private float GetCookDuration(InteractVector vector)
		{
			if ((bool)MessyController.Ins)
			{
				LevelInfo info = MessyController.Ins.Info;
				if (info != null)
				{
					float baseDuration = info.GetStationCookDuration(id, ResolveResultId(vector.groupIndex));
					string toolId = id;
					if ((bool)config)
					{
						toolId = config.Id;
					}
					return info.GetUpgradedCookDuration(toolId, baseDuration);
				}
			}
			return 2f;
		}
	}
}
