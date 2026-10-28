using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;

namespace AnhPD.FoodOrder
{
	public class SpawnBagSaveMe : SpawnBag, IPointerDownHandler, IEventSystemHandler
	{
		[SerializeField]
		private Transform itemRoot;

		[SerializeField]
		private TextMesh txtNum;

		[SerializeField]
		private SortingGroup sortingGroup;

		[SerializeField]
		private float scaleRation;

		[SerializeField]
		private float releaseInterval;

		[Header("Đổi preview")]
		[SerializeField]
		private float swapDropDistance;

		[SerializeField]
		private float swapDuration;

		private readonly List<IngredientState> _entries;

		private DragItem _preview;

		private Action _onEmptied;

		private float _cooldown;

		private DragItem _lastOut;

		private Vector3 _itemRootHome;

		private Tween _swapTween;

		private const float MouthLeaveDistSqr = 0.01f;

		public bool IsEmpty => false;

		private int Remaining => 0;

		public static SpawnBagSaveMe Active { get; private set; }

		public int EntryCount => 0;

		private Vector3 MouthPosition => default;

		private int SpawnedSortingOrder => 0;

		private void OnEnable()
		{
		}

		private void OnDisable()
		{
		}

		protected override void Setup()
		{
		}

		public void AddIngredients(List<IngredientState> picked, Action onEmptied = null)
		{
		}

		private void AddPicked(List<IngredientState> picked)
		{
		}

		private void AddEntry(string id)
		{
		}

		public bool TryTakeUsable(Func<DragItem, bool> canUse, out DragItem taken)
		{
			taken = null;
			return false;
		}

		public void CommitTake(DragItem item)
		{
		}

		public string EntryIdAt(int index)
		{
			return null;
		}

		public int CountEntries(string id)
		{
			return 0;
		}

		public bool IsPreview(DragItem item)
		{
			return false;
		}

		private void ApplySortingByPosition()
		{
		}

		public void OnPointerDown(PointerEventData eventData)
		{
		}

		private void CyclePreview()
		{
		}

		private void PlaySwapAnim()
		{
		}

		private void SwapPreviewNow()
		{
		}

		private void SnapItemRootHome()
		{
		}

		private void Update()
		{
		}

		private void DropUnusableToStation()
		{
		}

		private static PieceSet GetMissingPieces()
		{
			return default;
		}

		private static bool WantedAsIs(LevelInfo info, string id, PieceSet missing)
		{
			return false;
		}

		private void MoveToFront(int index)
		{
		}

		private void ShowNext()
		{
		}

		private bool IsLastOutAtMouth()
		{
			return false;
		}

		private void FinishEmptied()
		{
		}

		private void BuildPreview()
		{
		}

		private void AdoptAsPreview(DragItem item)
		{
		}

		private void RefreshCount()
		{
		}

		private void ClearPreview()
		{
		}

		private void DetachPreview(DragItem item)
		{
		}

		private void PromotePreferredToFront()
		{
		}
	}
}
