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
		private float slideSpeed;

		[SerializeField]
		private float slideSmoothTime;

		[Tooltip("Vật đựng theo món (DragItem.PlateContainerIndex), vd sashimi: 0 = đĩa, 1 = bát. Trống = không đổi.")]
		[SerializeField]
		private GameObject[] containers;

		[SerializeField]
		[Min(0f)]
		private float appearDuration;

		[SerializeField]
		[Range(0f, 1f)]
		private float appearFromScale;

		private const float LinkDur = 0.3f;

		private const float LinkHop = 0.3f;

		private const float ServeJumpPower = 1.2f;

		private const float ServeSpeed = 10f;

		private const float ServeMinTime = 0.05f;

		private const float ServeMaxTime = 0.3f;

		private Renderer[] _visuals;

		private Tween _appear;

		private int _containerIndex;

		private int _sortingFloor;

		private Vector3 _slotPos;

		private bool _hasSlot;

		private bool _sliding;

		private Vector3 _slideVel;

		private float _serveHoldUntil;

		[Tooltip("Sorting orders added while a merge anim plays on this plate, so the anim draws over the other plates.")]
		[SerializeField]
		[Min(1f)]
		private int mergeAnimSortingBoost;

		private bool _mergeLifted;

		private int _preMergeOrder;

		private Vector2 _tapBaseOffset;

		private Vector2 _tapBaseSize;

		public PieceSet? Order { get; set; }

		public DragItem Item { get; private set; }

		public bool IsEmpty => false;

		public Transform ItemAnchor => null;

		public bool IsHidden { get; private set; }

		public bool IsServing { get; private set; }

		public bool IsServeHeld => false;

		public bool IsAdopting { get; private set; }

		public int DishKey { get; private set; }

		public DragItem DirtyPrefab { get; private set; }

		private void Awake()
		{
		}

		public void HideUntilFirstItem()
		{
		}

		public void RaiseSortingOrder(int order)
		{
		}

		public void SetMergeAnimLifted(bool lifted)
		{
		}

		public void ShowInstant()
		{
		}

		private void ShowAnimated()
		{
		}

		private void CompleteAppear()
		{
		}

		private void RefreshContainer()
		{
		}

		private void SetVisualsEnabled(bool on)
		{
		}

		public void SetSlot(Vector3 worldPos, bool instant)
		{
		}

		private void SlideToSlot()
		{
		}

		private void StopSlide()
		{
		}

		private void Update()
		{
		}

		public void SetVariant(int dishKey, DragItem dirtyPrefab)
		{
		}

		public void HoldServe(float seconds)
		{
		}

		public void Adopt(DragItem item, bool jump, Action onLanded = null)
		{
		}

		public DragItem SpawnItem(string id)
		{
			return null;
		}

		private void AttachItem()
		{
		}

		public DragItem DetachItem()
		{
			return null;
		}

		public void ServeTo(Transform target, Action onLink, Action onJump, Func<bool> onArrive, Action onServed)
		{
		}

		private void JumpToTarget(Transform target, Func<bool> onArrive, Action onServed)
		{
		}

		private void OnArriveAtTarget(Func<bool> onArrive, Action onServed)
		{
		}

		public void OnPointerDown(PointerEventData eventData)
		{
		}

		private void LateUpdate()
		{
		}

		private void FitTapArea()
		{
		}

		public void Despawn()
		{
		}
	}
}
