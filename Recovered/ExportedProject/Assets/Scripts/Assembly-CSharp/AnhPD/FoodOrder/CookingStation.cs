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

		private InteractVector _deferredStart;

		private int _releasing;

		private const float NormalSpeed = 1f;

		private bool _isPaused;

		private bool _intakeHeld;

		private const float FallbackCookDuration = 2f;

		public string Id => null;

		public IReadOnlyList<StationInteractGroup> Groups => null;

		public bool IsMidCook => false;

		public string WorkingResultId => null;

		public int OwedResults => 0;

		public bool IsResolvingJam => false;

		public bool IsPaused => false;

		public bool AcceptsNewIntake => false;

		private bool IsViewIntakeBusy => false;

		private static bool IsPickAnyPicking => false;

		protected override void Awake()
		{
		}

		protected virtual void Update()
		{
		}

		private void TickWaitingRetry()
		{
		}

		private void TryRefineInPlace()
		{
		}

		private void OnDestroy()
		{
		}

		protected virtual void OnGridCellFreed(GridCellFreedEvent _)
		{
		}

		public void SetId(string newId)
		{
		}

		public void Setup(CakeToolSO cf, LevelSupply supply, RecipeConfigSO recipeConfig)
		{
		}

		public void TrySetupResultNumer(IngredientProcessConfig[] ingredientInfos)
		{
		}

		public virtual InteractVector GetInteractVector(string ingId)
		{
			return default;
		}

		private int PreferGroup(int current, int candidate)
		{
			return 0;
		}

		public virtual int CountFreeSlots(string ingId)
		{
			return 0;
		}

		public virtual bool TryGetIntakeGroup(string ingId, out int groupIndex, out int freeSlots)
		{
			groupIndex = default;
			freeSlots = default;
			return false;
		}

		public virtual bool WantsAutoIntake(string ingId)
		{
			return false;
		}

		public virtual bool AcceptsId(string ingId)
		{
			return false;
		}

		public bool TryGetAcceptingGroup(string ingId, out int groupIndex)
		{
			groupIndex = default;
			return false;
		}

		public void PlayRejectBlink(float cycleDuration)
		{
		}

		public Transform GetJumpTarget(InteractVector vector)
		{
			return null;
		}

		public float GetJumpScaleRation(InteractVector vector)
		{
			return 0f;
		}

		public Tween CreateIngredientFlight(DragItem item, InteractVector vector)
		{
			return null;
		}

		private bool HasGroup(InteractVector vector)
		{
			return false;
		}

		public virtual void PutInIngredient(InteractVector vector)
		{
		}

		private void TickDeferredStart()
		{
		}

		protected virtual bool CanStartProcess(InteractVector vector)
		{
			return false;
		}

		protected virtual void OnWorkingChanged(bool working)
		{
		}

		protected virtual string ResolveResultId(int groupIndex)
		{
			return null;
		}

		public string GetResultIdFor(string ingId)
		{
			return null;
		}

		public string ResultIdOfGroup(int groupIndex)
		{
			return null;
		}

		public string ResultIdIfFed(string ingId)
		{
			return null;
		}

		protected bool ShelfWouldTakeResult(int groupIndex)
		{
			return false;
		}

		protected virtual int ShelfGainOfResult(int groupIndex)
		{
			return 0;
		}

		public bool IsCookingForShelf()
		{
			return false;
		}

		public int CountHeldInputs(string ingId)
		{
			return 0;
		}

		public virtual int CountHeldInputs(string ingId, string forResultId)
		{
			return 0;
		}

		protected bool AnyGroupMakes(string resultId)
		{
			return false;
		}

		public string DebugJamState()
		{
			return null;
		}

		protected virtual bool FinishingBreaksJam(int groupIndex)
		{
			return false;
		}

		public bool IsCellAvailable(int groupIndex)
		{
			return false;
		}

		public bool IsCellAvailable(int groupIndex, int num)
		{
			return false;
		}

		protected virtual bool CanSpawnResult(int groupIndex)
		{
			return false;
		}

		protected virtual int GetSpawnableCount(int groupIndex, int want)
		{
			return 0;
		}

		private int CountHomesForResult(int groupIndex, int want)
		{
			return 0;
		}

		private int CountRegularHomes(int groupIndex, int want)
		{
			return 0;
		}

		private int CountSwapHomes(int groupIndex, int regularHomes)
		{
			return 0;
		}

		private bool TryPickSwapRaw(out DragItem raw)
		{
			raw = null;
			return false;
		}

		private bool AcceptsWhenIdle(string ingId)
		{
			return false;
		}

		private bool HasHomeForResult(int groupIndex, int num)
		{
			return false;
		}

		protected virtual void SpawnResult(int groupIndex, int num)
		{
		}

		protected void ReleaseResult(int groupIndex, int num, Action<DragItem> onSpawned)
		{
		}

		private void SwapResultWithRaw(string resultId, DragItem raw, Action<DragItem> onSpawned)
		{
		}

		protected virtual void HandleComplete(int groupIndex, bool isResultSpawned, int num)
		{
		}

		public void SetIntakeHeld(bool held)
		{
		}

		public virtual void SetPaused(bool paused)
		{
		}

		private void ApplyPause(bool paused)
		{
		}

		private float GetCookDuration(InteractVector vector)
		{
			return 0f;
		}
	}
}
