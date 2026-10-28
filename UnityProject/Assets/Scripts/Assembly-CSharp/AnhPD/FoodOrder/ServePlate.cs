using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;

namespace AnhPD.FoodOrder
{
	public class ServePlate : MonoBehaviour, IPointerDownHandler, IEventSystemHandler
	{
		[SerializeField]
		private Transform itemAnchor;

		[SerializeField]
		private SortingGroup sortingGroup;

		[SerializeField]
		private BoxCollider2D tapCollider;

		[SerializeField]
		private float slideSpeed = 10f;

		[SerializeField]
		private float slideSmoothTime = 0.12f;

		[Tooltip("Vật đựng theo món (DragItem.PlateContainerIndex), vd sashimi: 0 = đĩa, 1 = bát. Trống = không đổi.")]
		[SerializeField]
		private GameObject[] containers;

		[SerializeField]
		[Min(0f)]
		private float appearDuration = 0.25f;

		[SerializeField]
		[Range(0f, 1f)]
		private float appearFromScale = 0.6f;

		private const float LinkDur = 0.3f;

		private const float LinkHop = 0.3f;

		private const float ServeJumpPower = 1.2f;

		private const float ServeSpeed = 10f;

		private const float ServeMinTime = 0.05f;

		private const float ServeMaxTime = 0.3f;

		private Renderer[] _visuals;

		private Tween _appear;

		private int _containerIndex = -1;

		private int _sortingFloor = int.MinValue;

		private Vector3 _slotPos;

		private bool _hasSlot;

		private bool _sliding;

		private Vector3 _slideVel;

		private float _serveHoldUntil;

		[Tooltip("Sorting orders added while a merge anim plays on this plate, so the anim draws over the other plates.")]
		[SerializeField]
		[Min(1f)]
		private int mergeAnimSortingBoost = 1;

		private bool _mergeLifted;

		private int _preMergeOrder;

		private Vector2 _tapBaseOffset;

		private Vector2 _tapBaseSize;

		public PieceSet? Order { get; set; }

		public DragItem Item { get; private set; }

		public bool IsEmpty => Item == null;

		public Transform ItemAnchor => itemAnchor != null ? itemAnchor : transform;

		public bool IsHidden { get; private set; }

		public bool IsServing { get; private set; }

		public bool IsServeHeld => Time.time < _serveHoldUntil;

		public bool IsAdopting { get; private set; }

		public int DishKey { get; private set; } = -1;

		public DragItem DirtyPrefab { get; private set; }

		private void Awake()
		{
			_visuals = GetComponentsInChildren<Renderer>(true);
			if (tapCollider == null)
			{
				return;
			}
			_tapBaseOffset = tapCollider.offset;
			_tapBaseSize = tapCollider.size;
		}

		public void HideUntilFirstItem()
		{
			if (sortingGroup == null)
			{
				return;
			}
			sortingGroup.sortingOrder = -2;
			SetVisualsEnabled(false);
			IsHidden = true;
		}

		public void RaiseSortingOrder(int order)
		{
			_sortingFloor = order;
			if (sortingGroup == null)
			{
				return;
			}
			sortingGroup.sortingOrder = order;
			if (!_mergeLifted)
			{
				return;
			}
			_preMergeOrder = order;
			sortingGroup.sortingOrder = mergeAnimSortingBoost + order;
		}

		public void SetMergeAnimLifted(bool lifted)
		{
			if (_mergeLifted == lifted || sortingGroup == null)
			{
				return;
			}
			_mergeLifted = lifted;
			if (!lifted)
			{
				sortingGroup.sortingOrder = _preMergeOrder;
				return;
			}
			_preMergeOrder = sortingGroup.sortingOrder;
			sortingGroup.sortingOrder = mergeAnimSortingBoost + sortingGroup.sortingOrder;
		}

		public void ShowInstant()
		{
			if (IsHidden)
			{
				SetVisualsEnabled(true);
				IsHidden = false;
			}
		}

		private void ShowAnimated()
		{
			if (!IsHidden)
			{
				return;
			}
			SetVisualsEnabled(true);
			IsHidden = false;
			if (appearDuration <= 0f)
			{
				return;
			}
			// TODO(unrecovered): the scale and fade tween chain is built by two closure display classes (65_0 and 65_1) whose layout is not resolved
		}

		private void CompleteAppear()
		{
			if (_appear != null)
			{
				_appear.Complete();
			}
		}

		private void RefreshContainer()
		{
			if (containers == null || containers.Length == 0)
			{
				return;
			}
			int index = Item != null ? Item.PlateContainerIndex : 0;
			index = Mathf.Clamp(index, 0, containers.Length - 1);
			if (index == _containerIndex)
			{
				return;
			}
			_containerIndex = index;
			for (int i = 0; i < containers.Length; i++)
			{
				if (containers[i] != null)
				{
					containers[i].SetActive(i == index);
				}
			}
		}

		private void SetVisualsEnabled(bool on)
		{
			if (_visuals == null)
			{
				return;
			}
			foreach (Renderer visual in _visuals)
			{
				if (visual != null)
				{
					visual.enabled = on;
				}
			}
		}

		public void SetSlot(Vector3 worldPos, bool instant)
		{
			_slotPos = worldPos;
			_hasSlot = true;
			if (!instant)
			{
				if (!IsServing)
				{
					_sliding = true;
				}
				return;
			}
			StopSlide();
			transform.position = _slotPos;
		}

		private void SlideToSlot()
		{
			if (_hasSlot)
			{
				_sliding = true;
			}
		}

		private void StopSlide()
		{
			_sliding = false;
			_slideVel = Vector3.zero; /* literal recovered by guess */
		}

		private void Update()
		{
			if (!_sliding)
			{
				return;
			}
			if (IsServing)
			{
				StopSlide();
				return;
			}
			Transform tf = transform;
			tf.position = Vector3.SmoothDamp(tf.position, _slotPos, ref _slideVel, slideSmoothTime, slideSpeed, Time.deltaTime);
			if ((tf.position - _slotPos).sqrMagnitude < 1e-6f)
			{
				tf.position = _slotPos;
				StopSlide();
			}
		}

		public void SetVariant(int dishKey, DragItem dirtyPrefab)
		{
			DishKey = dishKey;
			DirtyPrefab = dirtyPrefab;
		}

		public void HoldServe(float seconds)
		{
			float until = Time.time + seconds;
			if (_serveHoldUntil < until)
			{
				_serveHoldUntil = until;
			}
		}

		public void Adopt(DragItem item, bool jump, Action onLanded = null)
		{
			if (item == null)
			{
				return;
			}
			Item = item;
			item.MarkOnDishRow();
			if (!jump)
			{
				AttachItem();
				onLanded?.Invoke();
				return;
			}
			IsAdopting = true;
			Transform anchor = ItemAnchor;
			Tween tween = item.JumpToTargetTween(anchor.position);
			tween.OnComplete(() =>
			{
				AttachItem();
				onLanded?.Invoke();
			});
		}

		public DragItem SpawnItem(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return null;
			}
			MessyController messy = MessyController.Ins;
			if (messy == null)
			{
				return null;
			}
			Transform anchor = ItemAnchor;
			DragItem item = messy.SpawnAndGetDragItem(id, anchor.position, false, false);
			if (item == null)
			{
				return null;
			}
			Adopt(item, false);
			return item;
		}

		private void AttachItem()
		{
			IsAdopting = false;
			DragItem item = Item;
			if (item == null)
			{
				return;
			}
			RefreshContainer();
			ShowAnimated();
			if (Item == null)
			{
				return;
			}
			item.Tf.DOKill();
			item.transform.SetParent(ItemAnchor, true);
			item.transform.localPosition = Vector3.zero; /* literal recovered by guess */
			item.DishControlled = true;
			item.ClampSortingLayer();
			item.Tf.Appear(0.1f);
		}

		public DragItem DetachItem()
		{
			DragItem item = Item;
			Item = null;
			if (item == null)
			{
				return null;
			}
			Transform selfParent = transform.parent;
			item.transform.SetParent(selfParent, true);
			item.DishControlled = false;
			return item;
		}

		public void ServeTo(Transform target, Action onLink, Action onJump, Func<bool> onArrive, Action onServed)
		{
			if (Item == null)
			{
				onLink?.Invoke();
				onJump?.Invoke();
				onArrive?.Invoke();
				onServed?.Invoke();
				return;
			}
			IsServing = true;
			if (IsHidden)
			{
				SetVisualsEnabled(true);
				IsHidden = false;
			}
			CompleteAppear();
			transform.DOKill();
			onLink?.Invoke();
			// TODO(unrecovered): the punch tween vector comes from an unnamed static struct; the completion chain (onJump, then JumpToTarget) is clear but the punch parameters are not
		}

		private void JumpToTarget(Transform target, Func<bool> onArrive, Action onServed)
		{
			if (sortingGroup == null)
			{
				return;
			}
			sortingGroup.sortingOrder = _sortingFloor < 31 ? 30 : _sortingFloor;
			if (target == null)
			{
				OnArriveAtTarget(onArrive, onServed);
				return;
			}
			IsServing = true;
			transform.DOKill();
			// TODO(unrecovered): the arc tween (duration from the distance to the target, height from ServeJumpPower, two chained tweens with completion callbacks) is not mapped yet
		}

		private void OnArriveAtTarget(Func<bool> onArrive, Action onServed)
		{
			if (onArrive != null && !onArrive())
			{
				IsServing = false;
				if (_hasSlot)
				{
					_sliding = true;
				}
			}
			onServed?.Invoke();
		}

		public void OnPointerDown(PointerEventData eventData)
		{
			if (Item == null || IsServing || IsAdopting || IsHidden)
			{
				return;
			}
			// TODO(unrecovered): the level interaction gate (LevelBaseCakeOrderAbstract.IsAllowInteract) is not in the stubs, and the hold duration is read from two virtual DragItem members that are not named
		}

		private void LateUpdate()
		{
			RefreshContainer();
			FitTapArea();
		}

		private void FitTapArea()
		{
			if (tapCollider == null)
			{
				return;
			}
			// TODO(unrecovered): fits the tap box to the dish bounds via a virtual DragItem bounds query that is not named in the stubs
		}

		public void Despawn()
		{
			DetachItem();
			if (IsHidden)
			{
				SetVisualsEnabled(true);
				IsHidden = false;
			}
			CompleteAppear();
			IsAdopting = false;
			StopSlide();
			transform.DOKill();
			IsServing = false;
			_hasSlot = false;
			_serveHoldUntil = 0f;
			_sortingFloor = int.MinValue;
			SetMergeAnimLifted(false);
			DirtyPrefab = null;
			DishKey = -1;
			// TODO(unrecovered): the released GameObject goes back to an unnamed object pool owned by the level's static pool holder
		}
	}
}
