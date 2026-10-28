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

		private readonly List<IngredientState> _entries = new List<IngredientState>();

		private DragItem _preview;

		private Action _onEmptied;

		private float _cooldown;

		private DragItem _lastOut;

		private Vector3 _itemRootHome;

		private Tween _swapTween;

		private const float MouthLeaveDistSqr = 0.01f;

		public bool IsEmpty => _entries.Count == 0;

		private int Remaining => _entries.Count;

		public static SpawnBagSaveMe Active { get; private set; }

		public int EntryCount => _entries.Count;

		private Vector3 MouthPosition => (itemRoot != null ? itemRoot : transform).position;

		private int SpawnedSortingOrder => sortingGroup != null ? sortingGroup.sortingOrder + 1 : 1;

		private void OnEnable()
		{
			Active = this;
		}

		private void OnDisable()
		{
			if (Active == this)
			{
				Active = null;
			}
			SnapItemRootHome();
		}

		protected override void Setup()
		{
			// TODO(unrecovered): the pseudocode Setup takes extra (x, y, z) float arguments that the stub
			// signature does not have, so the _itemRootHome y/z source cannot be matched.
		}

		public void AddIngredients(List<IngredientState> picked, Action onEmptied = null)
		{
			transform.Appear(0.1f);
			ApplySortingByPosition();
			if (picked != null)
			{
				AddPicked(picked);
			}
			if (onEmptied != null)
			{
				_onEmptied = onEmptied;
			}
			ShowNext();
		}

		private void AddPicked(List<IngredientState> picked)
		{
			foreach (IngredientState state in picked)
			{
				for (int i = 0; i < state.amount; i++)
				{
					AddEntry(state.id);
				}
			}
		}

		private void AddEntry(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return;
			}
			_entries.Add(new IngredientState(id, 1));
		}

		public bool TryTakeUsable(Func<DragItem, bool> canUse, out DragItem taken)
		{
			// TODO(unrecovered): depends on the base SpawnBag byte flag at +0x28 (no matching stub field),
			// CakeOrder interact checks and the spawn/adopt sequence through PieceLedger, not recovered.
			taken = null;
			return false;
		}

		public void CommitTake(DragItem item)
		{
			_lastOut = item;
			InvokeSpawnEffect();
			ShowNext();
		}

		public string EntryIdAt(int index)
		{
			if (index < 0 || index >= _entries.Count)
			{
				return null;
			}
			return _entries[index].id;
		}

		public int CountEntries(string id)
		{
			int count = 0;
			foreach (IngredientState entry in _entries)
			{
				if (entry.id == id)
				{
					count++;
				}
			}
			return count;
		}

		public bool IsPreview(DragItem item)
		{
			return item != null && item == _preview;
		}

		private void ApplySortingByPosition()
		{
			// TODO(unrecovered): the pseudocode takes a float sort argument and the owning object as separate
			// parameters; the stub method has no parameters, so the sorting value source is not recoverable.
		}

		public void OnPointerDown(PointerEventData eventData)
		{
			CyclePreview();
		}

		private void CyclePreview()
		{
			// TODO(unrecovered): gated on the base-class flag at +0x28 (no matching stub field) and on CakeOrder
			// interact checks; the cycle logic itself is in the pseudocode but the gate cannot be named.
		}

		private void PlaySwapAnim()
		{
			// TODO(unrecovered): DOTween sequence uses unnamed ease constants and an unnamed static tween callback.
		}

		private void SwapPreviewNow()
		{
			ClearPreview();
			BuildPreview();
		}

		private void SnapItemRootHome()
		{
			if (_swapTween != null)
			{
				_swapTween.Kill();
			}
			_swapTween = null;
			if (itemRoot != null)
			{
				itemRoot.localPosition = _itemRootHome;
			}
		}

		private void Update()
		{
			if (IsEmpty)
			{
				if (!IsLastOutAtMouth())
				{
					FinishEmptied();
				}
				return;
			}
			_cooldown -= Time.deltaTime;
			if (_cooldown <= 0f)
			{
				_cooldown = releaseInterval;
				DropUnusableToStation();
			}
		}

		private void DropUnusableToStation()
		{
			// TODO(unrecovered): relies on CakeOrder interact checks, LevelInfo station lookup, LevelPieceBook
			// wanted-as-is test and PieceLedger spawn-to-station calls whose signatures are not in the stubs.
		}

		private static PieceSet GetMissingPieces()
		{
			// TODO(unrecovered): PieceSet is built from LevelPieceBook.OpenOrderMissing or a static fallback set.
			return default;
		}

		private static bool WantedAsIs(LevelInfo info, string id, PieceSet missing)
		{
			// TODO(unrecovered): PieceSet.IsEmpty and LevelPieceBook.OpenOrderWantsAsIs are not in the stubs.
			return false;
		}

		private void MoveToFront(int index)
		{
			IngredientState entry = _entries[index];
			_entries.RemoveAt(index);
			_entries.Insert(0, entry);
		}

		private void ShowNext()
		{
			SnapItemRootHome();
			ClearPreview();
			RefreshCount();
			if (!IsEmpty)
			{
				PromotePreferredToFront();
				BuildPreview();
			}
			else if (!IsLastOutAtMouth())
			{
				FinishEmptied();
			}
		}

		private bool IsLastOutAtMouth()
		{
			if (_lastOut == null)
			{
				return false;
			}
			float dx = _lastOut.transform.position.x - MouthPosition.x;
			return dx * dx < MouthLeaveDistSqr;
		}

		private void FinishEmptied()
		{
			_lastOut = null;
			Action callback = _onEmptied;
			_onEmptied = null;
			if (callback != null)
			{
				callback();
				return;
			}
			gameObject.SetActive(false);
		}

		private void BuildPreview()
		{
			// TODO(unrecovered): the pseudocode mutes a PieceLedger scope around the spawn, spawns the drag item
			// through MessyController and then applies a flexible-id init step; the scope and flexible-id calls
			// have no stub signatures to match.
		}

		private void AdoptAsPreview(DragItem item)
		{
			// TODO(unrecovered): the preview local position and scale come from unnamed static settings and the
			// item's scale fields, neither matched to stub members.
		}

		private void RefreshCount()
		{
			if (txtNum != null)
			{
				txtNum.text = Remaining.ToString();
			}
		}

		private void ClearPreview()
		{
			if (_preview != null)
			{
				DragItem old = _preview;
				_preview = null;
				DetachPreview(old);
				if (MessyController.Ins != null)
				{
					MessyController.Ins.DespawnItem(old);
				}
			}
			_preview = null;
		}

		private void DetachPreview(DragItem item)
		{
			if (item != null)
			{
				item.transform.SetParent(null, true);
				// TODO(unrecovered): the pseudocode restores the item's local scale from its stored scale fields,
				// which have no matching stub members.
			}
		}

		private void PromotePreferredToFront()
		{
			// TODO(unrecovered): depends on GetMissingPieces, WantedAsIs and the LevelInfo piece-book lookup.
		}
	}
}
