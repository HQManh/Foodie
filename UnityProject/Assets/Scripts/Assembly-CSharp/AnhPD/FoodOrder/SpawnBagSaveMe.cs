using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.InGame;
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
			if (itemRoot)
			{
				_itemRootHome = itemRoot.localPosition;
			}
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
			taken = null;
			if (isBlock || !MessyController.Ins)
			{
				return false;
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level && !level.IsAllowInteract)
			{
				return false;
			}
			for (int i = 0; i < _entries.Count; i++)
			{
				DragItem item;
				using (PieceLedger.Mute())
				{
					item = MessyController.Ins.SpawnAndGetDragItem(_entries[i].id, MouthPosition, false, false);
				}
				if (!item)
				{
					continue;
				}
				item.SetSortingOrder(SpawnedSortingOrder);
				if (canUse(item))
				{
					_entries.RemoveAt(i);
					PieceLedger.Adopt(item, PieceLedger.Source.SaveMeBag, /* literal recovered by guess */ "save-me bag");
					taken = item;
					return true;
				}
				MessyController.Ins.DespawnItem(item);
			}
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
			if (sortingGroup)
			{
				sortingGroup.sortingOrder = (int)-transform.position.y;
			}
		}

		public void OnPointerDown(PointerEventData eventData)
		{
			CyclePreview();
		}

		private void CyclePreview()
		{
			if (isBlock || _entries.Count <= 1)
			{
				return;
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level && !level.IsAllowInteract)
			{
				return;
			}
			if (_swapTween != null && _swapTween.IsActive())
			{
				return;
			}
			IngredientState first = _entries[0];
			_entries.RemoveAt(0);
			_entries.Add(first);
			InvokeSpawnEffect();
			PlaySwapAnim();
		}

		private void PlaySwapAnim()
		{
			if (_swapTween != null)
			{
				_swapTween.Kill();
			}
			if (!itemRoot || swapDuration <= 0f || swapDropDistance <= 0f)
			{
				ClearPreview();
				BuildPreview();
				return;
			}
			float half = swapDuration * 0.5f;
			Sequence swap = DOTween.Sequence();
			swap.Append(itemRoot.DOLocalMoveY(_itemRootHome.y - swapDropDistance, half).SetEase(Ease.InQuad));
			swap.AppendCallback(SwapPreviewNow);
			swap.Append(itemRoot.DOLocalMoveY(_itemRootHome.y, half).SetEase(Ease.OutBack));
			swap.SetTarget(this);
			_swapTween = swap;
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
			if (isBlock || !MessyController.Ins)
			{
				return;
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level && !level.IsAllowInteract)
			{
				return;
			}
			LevelInfo info = MessyController.Ins.Info;
			if (info == null)
			{
				return;
			}
			LevelPieceBook book = info.Pieces;
			PieceSet missing = GetMissingPieces();
			for (int i = 0; i < _entries.Count; i++)
			{
				string id = _entries[i].id;
				if (book != null && book.TakeWantedAsIs(id, ref missing))
				{
					continue;
				}
				if (!info.TryGetInteractableStation(id, MouthPosition, out CookingStation station) || !info.WantsAutoFeed(station, id))
				{
					continue;
				}
				_entries.RemoveAt(i);
				InvokeSpawnEffect();
				ClearPreview();
				using (PieceLedger.From(PieceLedger.Source.SaveMeBag, /* literal recovered by guess */ "save-me -> " + station.name))
				{
					MessyController.Ins.SpawnToStation(id, MouthPosition, station, DragOrigin.None, spawned =>
					{
						spawned.SetSortingOrder(SpawnedSortingOrder);
						_lastOut = spawned;
					});
				}
				ShowNext();
				return;
			}
		}

		private static PieceSet GetMissingPieces()
		{
			LevelPieceBook book = (MessyController.Ins && MessyController.Ins.Info != null) ? MessyController.Ins.Info.Pieces : null;
			return book != null ? book.OpenOrderMissing() : PieceSet.Empty;
		}

		private static bool WantedAsIs(LevelInfo info, string id, PieceSet missing)
		{
			return !missing.IsEmpty && info.Pieces != null && info.Pieces.OpenOrderWantsAsIs(id, missing);
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
			if (_entries.Count == 0)
			{
				return;
			}
			IngredientState entry = _entries[0];
			DragItem prefab = MessyController.Ins.Info.GetIngredientPrefab(entry.id);
			if (!prefab)
			{
				return;
			}
			Transform anchor = itemRoot ? itemRoot : transform;
			DragItem item;
			using (PieceLedger.Mute())
			{
				item = MessyController.Ins.SpawnDragItemPrefab(prefab, anchor.position, false);
			}
			if (!item)
			{
				return;
			}
			if (item is FlexibleDragItem flexible && FlexibleId.IsFlexible(entry.id))
			{
				flexible.Display(entry.id);
			}
			AdoptAsPreview(item);
		}

		private void AdoptAsPreview(DragItem item)
		{
			_preview = item;
			if (!_preview)
			{
				return;
			}
			Transform parent = itemRoot ? itemRoot : transform;
			Transform t = _preview.transform;
			t.SetParent(parent, false);
			t.localPosition = Vector3.zero;
			t.localScale = _preview.SizeInit * scaleRation;
			_preview.ClampSortingLayer();
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
				item.transform.localScale = item.SizeInit;
			}
		}

		private void PromotePreferredToFront()
		{
			PieceSet missing = GetMissingPieces();
			if (missing.IsEmpty)
			{
				return;
			}
			LevelInfo info = MessyController.Ins.Info;
			for (int i = 0; i < _entries.Count; i++)
			{
				if (WantedAsIs(info, _entries[i].id, missing))
				{
					if (i != 0)
					{
						MoveToFront(i);
					}
					return;
				}
			}
		}
	}
}
