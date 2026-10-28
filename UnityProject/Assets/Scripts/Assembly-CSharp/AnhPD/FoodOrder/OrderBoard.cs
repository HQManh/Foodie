using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class OrderBoard : MonoBehaviour
	{
		private enum PreviewState
		{
			Idle = 0,
			Peeking = 1,
			Playing = 2,
			Hiding = 3
		}

		[SerializeField]
		private FOrderItem[] items;

		[SerializeField]
		private float orderItemLoadDelay = 0.2f;

		[SerializeField]
		private Button zoomButton;

		[SerializeField]
		private GameObject boardRoot;

		[SerializeField]
		private OrderIngredientList ingredientList;

		[CompilerGenerated]
		private Action<OrderBoard, string> m_onZoomTapped;

		[CompilerGenerated]
		private Action<OrderBoard, float, Ease> m_PeekReleased;

		private int _tappedIndex = -1;

		private readonly HashSet<int> _openOrders = new HashSet<int>();

		private int _soloPeek = -1;

		private Camera _uiCamera;

		private bool _uiCameraResolved;

		private Coroutine _loadRoutine;

		private Coroutine _previewRoutine;

		private List<OrderSpec> _orders;

		private OrderItemLook[] _looks = Array.Empty<OrderItemLook>();

		private PreviewState _previewState;

		private readonly List<CanvasGroup> _coveredItems = new List<CanvasGroup>();

		protected virtual GameObject VisualRoot => boardRoot;

		public string FocusOrderId
		{
			get
			{
				if (_orders != null && _orders.Count > 0)
				{
					return _orders[0].DisplayId;
				}
				return null;
			}
		}

		private Camera UiCamera
		{
			get
			{
				if (_uiCameraResolved)
				{
					return _uiCamera;
				}
				Canvas canvas = GetComponentInParent<Canvas>();
				if (canvas)
				{
					canvas = canvas.rootCanvas;
				}
				Camera camera;
				if (!canvas)
				{
					camera = Camera.main;
				}
				else if (canvas.renderMode == RenderMode.ScreenSpaceOverlay)
				{
					camera = null;
				}
				else
				{
					camera = canvas.worldCamera;
					if (!camera)
					{
						camera = Camera.main;
					}
					else
					{
						camera = canvas.worldCamera;
					}
				}
				_uiCamera = camera;
				_uiCameraResolved = (bool)_uiCamera || (canvas && canvas.renderMode == RenderMode.ScreenSpaceOverlay);
				return _uiCamera;
			}
		}

		public int Capacity => items.Length;

		public bool IsLoadingOrder => _loadRoutine != null;

		public bool IsPeeking => _previewState == PreviewState.Peeking;

		public bool PeekIsWide
		{
			get
			{
				if (_previewState == PreviewState.Peeking && ingredientList)
				{
					return ingredientList.PeekIsWide;
				}
				return false;
			}
		}

		public event Action<OrderBoard, string> onZoomTapped
		{
			[CompilerGenerated]
			add
			{
				m_onZoomTapped = (Action<OrderBoard, string>)Delegate.Combine(m_onZoomTapped, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onZoomTapped = (Action<OrderBoard, string>)Delegate.Remove(m_onZoomTapped, value);
			}
		}

		public event Action<OrderBoard, float, Ease> PeekReleased
		{
			[CompilerGenerated]
			add
			{
				m_PeekReleased = (Action<OrderBoard, float, Ease>)Delegate.Combine(m_PeekReleased, value);
			}
			[CompilerGenerated]
			remove
			{
				m_PeekReleased = (Action<OrderBoard, float, Ease>)Delegate.Remove(m_PeekReleased, value);
			}
		}

		protected virtual void Awake()
		{
			if ((bool)zoomButton)
			{
				zoomButton.onClick.AddListener(Tap);
			}
			if ((bool)ingredientList)
			{
				ingredientList.PeekReleased += delegate(float duration, Ease ease)
				{
					m_PeekReleased?.Invoke(this, duration, ease);
				};
			}
		}

		public void Tap()
		{
			RaiseZoom();
		}

		private void RaiseZoom()
		{
			MessyController level = MessyController.Ins;
			if (!level.IsAllowInteract && !TutorialGate.IsActive)
			{
				return;
			}
			if (TutorialGate.CanTapOrder())
			{
				_tappedIndex = NearestOrderIndex(Input.mousePosition);
				m_onZoomTapped?.Invoke(this, FocusIdAt(_tappedIndex));
				GameEventBus.Publish(default(OrderTappedEvent));
			}
		}

		private string FocusIdAt(int index)
		{
			if (index >= 0 && _orders != null && index < _orders.Count)
			{
				return _orders[index].DisplayId;
			}
			return FocusOrderId;
		}

		protected virtual int NearestOrderIndex(Vector2 screenPos)
		{
			if (_orders == null)
			{
				Camera unused = UiCamera;
				return -1;
			}
			int count = _orders.Count;
			Camera cam = UiCamera;
			int best = -1;
			float bestDist = float.MaxValue;
			for (int i = 0; i < count; i++)
			{
				if (i >= items.Length)
				{
					return best;
				}
				if ((bool)items[i] && items[i].gameObject.activeSelf)
				{
					Vector2 p = RectTransformUtility.WorldToScreenPoint(cam, items[i].transform.position);
					float d = (p - screenPos).sqrMagnitude;
					if (d < bestDist)
					{
						best = i;
						bestDist = d;
					}
				}
			}
			return best;
		}

		protected virtual bool CanFit(List<OrderSpec> ordersOnBoard, OrderSpec newOrder)
		{
			return ordersOnBoard.Count < items.Length;
		}

		public virtual List<List<int>> Split(List<OrderSpec> orders)
		{
			List<List<int>> groups = new List<List<int>>();
			List<int> currentIdx = new List<int>();
			List<OrderSpec> currentOrders = new List<OrderSpec>();
			for (int i = 0; i < orders.Count; i++)
			{
				if (currentIdx.Count > 0 && !CanFit(currentOrders, orders[i]))
				{
					groups.Add(currentIdx);
					currentIdx = new List<int>();
					currentOrders = new List<OrderSpec>();
				}
				currentIdx.Add(i);
				currentOrders.Add(orders[i]);
			}
			if (currentIdx.Count > 0)
			{
				groups.Add(currentIdx);
			}
			return groups;
		}

		protected virtual void OnDisable()
		{
			_loadRoutine = null;
		}

		protected OrderItemLook LookAt(int index)
		{
			if (index >= 0 && index < _looks.Length)
			{
				return _looks[index];
			}
			return OrderItemLook.Normal;
		}

		protected void SetPreviewOrders(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
			_orders = orders;
			_openOrders.Clear();
			_soloPeek = -1;
			UncoverItems();
			_looks = new OrderItemLook[orders?.Count ?? 0];
			for (int i = 0; i < _looks.Length; i++)
			{
				_looks[i] = (looks != null && i < looks.Count) ? looks[i] : OrderItemLook.Normal;
			}
		}

		protected virtual FOrderItem ItemAt(int index)
		{
			if (index >= 0 && index < items.Length)
			{
				return items[index];
			}
			return null;
		}

		public virtual void ShowOrder(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
			if (_loadRoutine != null)
			{
				StopCoroutine(_loadRoutine);
			}
			StopIngredientPreview();
			SetPreviewOrders(orders, looks);
			int shown = Mathf.Min(orders.Count, items.Length);
			for (int i = shown; i < items.Length; i++)
			{
				items[i].gameObject.SetActive(false);
			}
			_loadRoutine = ((shown > 0) ? StartCoroutine(LoadOrderRoutine(orders, shown)) : null);
		}

		public virtual float GetLoadDuration(List<OrderSpec> orders)
		{
			return orderItemLoadDelay * (float)Mathf.Min(orders.Count, items.Length);
		}

		private IEnumerator LoadOrderRoutine(List<OrderSpec> list, int shown)
		{
			for (int i = 0; i < shown; i++)
			{
				yield return new WaitForSeconds(orderItemLoadDelay);
				items[i].Appear();
				items[i].InitOrder(list[i]);
				RectTransform parent = items[i].transform.parent as RectTransform;
				if (parent != null)
				{
					LayoutRebuilder.MarkLayoutForRebuild(parent);
				}
				items[i].ApplyLook(LookAt(i));
			}
			_loadRoutine = null;
		}

		public bool TryPeekIngredients(RectTransform neighbour, RectTransform clip, bool widen)
		{
			if (_loadRoutine != null)
			{
				return false;
			}
			if ((bool)ingredientList && _soloPeek < 0 && (_previewState == PreviewState.Idle || _previewState == PreviewState.Playing))
			{
				int idx = _tappedIndex;
				if (CanOpen(idx))
				{
					_openOrders.Add(idx);
					List<OrderSpec> queue = BuildPreviewQueue();
					int previewIndex = PreviewIndexOf(idx);
					if (!ingredientList.ShowPeek(queue, previewIndex, (RectTransform)transform, neighbour, clip, widen))
					{
						_openOrders.Remove(idx);
						BuildPreviewQueue();
						return false;
					}
					StopPreviewRoutine();
					if (!ingredientList.PeekIsWide && !HasOtherOrders(idx))
					{
						_previewState = PreviewState.Playing;
						_soloPeek = idx;
					}
					else
					{
						_previewState = PreviewState.Peeking;
					}
					_previewRoutine = StartCoroutine(PeekInRoutine());
					return true;
				}
			}
			return false;
		}

		private bool HasOtherOrders(int index)
		{
			if (_orders != null)
			{
				int count = _orders.Count;
				for (int i = 0; i < count; i++)
				{
					if (i != index && (i >= _looks.Length || _looks[i] != OrderItemLook.Done))
					{
						return true;
					}
				}
			}
			return false;
		}

		private bool CanOpen(int index)
		{
			if (index >= 0 && _orders != null && index < _orders.Count)
			{
				if (_openOrders.Contains(index))
				{
					return false;
				}
				if (index >= _looks.Length || _looks[index] != OrderItemLook.Done)
				{
					return ingredientList.CanShow(_orders[index].DisplayId);
				}
			}
			return false;
		}

		private void StopPreviewRoutine()
		{
			if (_previewRoutine != null)
			{
				StopCoroutine(_previewRoutine);
				_previewRoutine = null;
			}
		}

		private IEnumerator PeekInRoutine()
		{
			yield return ingredientList.PeekIn().WaitForCompletion();
			SetBoardVisible(false);
			_previewRoutine = null;
		}

		public void EndPeek(bool byTap = false)
		{
			if (_previewState != PreviewState.Peeking)
			{
				return;
			}
			StopPreviewRoutine();
			List<OrderSpec> queue = BuildPreviewQueue();
			if (queue.Count != 0 && ingredientList.MorphToNormal(queue))
			{
				if (byTap)
				{
					ingredientList.PlaySlideSfx();
				}
				_previewState = PreviewState.Playing;
				CoverBoardWithList();
			}
			else
			{
				_previewRoutine = StartCoroutine(DismissRoutine());
			}
		}

		public virtual void PreviewIngredients()
		{
			if (_loadRoutine != null || !ingredientList || _previewState == PreviewState.Hiding)
			{
				return;
			}
			if (_previewState == PreviewState.Peeking)
			{
				EndPeek(byTap: true);
				return;
			}
			int idx = _soloPeek;
			if (idx >= 0)
			{
				CloseOrder(idx);
				return;
			}
			idx = _tappedIndex;
			if (_openOrders.Contains(idx))
			{
				CloseOrder(idx);
			}
			else if (CanOpen(idx))
			{
				_openOrders.Add(idx);
				if (_previewState == PreviewState.Playing)
				{
					RedrawOpenOrders();
				}
				else
				{
					_previewRoutine = StartCoroutine(PreviewIngredientsRoutine());
				}
			}
		}

		private void CloseOrder(int index)
		{
			int previewIndex = PreviewIndexOf(index);
			int solo = _soloPeek;
			_openOrders.Remove(index);
			if (solo == index)
			{
				_soloPeek = -1;
			}
			else if (_previewState == PreviewState.Playing)
			{
				List<OrderSpec> queue = BuildPreviewQueue();
				if (queue.Count > 0)
				{
					Tween slide = ingredientList.SlideOutBoard(previewIndex);
					if (slide != null)
					{
						StopPreviewRoutine();
						CoverBoardWithList();
						_previewRoutine = StartCoroutine(CloseOneRoutine(slide));
						return;
					}
				}
			}
			RedrawOpenOrders();
		}

		private IEnumerator CloseOneRoutine(Tween slide)
		{
			yield return slide.WaitForCompletion();
			_previewRoutine = null;
			RedrawOpenOrders();
		}

		private void RedrawOpenOrders()
		{
			StopPreviewRoutine();
			List<OrderSpec> queue = BuildPreviewQueue();
			if (queue.Count > 0 && ingredientList.Show(queue))
			{
				_previewState = PreviewState.Playing;
				CoverBoardWithList();
			}
			else
			{
				_previewRoutine = StartCoroutine(DismissRoutine());
			}
		}

		private void RefreshIngredientPreview(int index)
		{
			if (!_openOrders.Remove(index) || !ingredientList)
			{
				return;
			}
			if (_soloPeek == index)
			{
				_soloPeek = -1;
			}
			if (_previewState == PreviewState.Playing)
			{
				if (_soloPeek < 0)
				{
					RedrawOpenOrders();
				}
			}
			else if (_previewState == PreviewState.Peeking)
			{
				EndPeek();
			}
		}

		public void StopIngredientPreview()
		{
			_openOrders.Clear();
			_soloPeek = -1;
			PreviewState state = _previewState;
			_previewState = PreviewState.Idle;
			if (_previewRoutine != null || state != PreviewState.Idle)
			{
				StopPreviewRoutine();
				if ((bool)ingredientList)
				{
					ingredientList.Clear();
				}
				SetBoardVisible(true);
			}
		}

		private IEnumerator DismissRoutine()
		{
			yield return SlideOutAndClear();
			_previewRoutine = null;
		}

		private IEnumerator SlideOutAndClear()
		{
			_openOrders.Clear();
			_soloPeek = -1;
			_previewState = PreviewState.Hiding;
			SetBoardVisible(true);
			yield return ingredientList.SlideOut().WaitForCompletion();
			ingredientList.Clear();
			_previewState = PreviewState.Idle;
		}

		private IEnumerator PreviewIngredientsRoutine()
		{
			List<OrderSpec> queue = BuildPreviewQueue();
			if (queue.Count != 0 && ingredientList.Show(queue))
			{
				_previewState = PreviewState.Playing;
				yield return ingredientList.SlideIn().WaitForCompletion();
				CoverBoardWithList();
			}
			else
			{
				_openOrders.Clear();
			}
			_previewRoutine = null;
		}

		private int PreviewIndexOf(int orderIndex)
		{
			if (_orders != null)
			{
				if (orderIndex < 0 || orderIndex >= _orders.Count)
				{
					return -1;
				}
				int rank = 0;
				for (int i = 0; i < _orders.Count; i++)
				{
					if (InPreview(i))
					{
						if (orderIndex == i)
						{
							return rank;
						}
						rank++;
					}
				}
			}
			return -1;
		}

		private List<OrderSpec> BuildPreviewQueue()
		{
			List<OrderSpec> queue = new List<OrderSpec>();
			List<int> indices = new List<int>();
			if (_orders != null)
			{
				int count = _orders.Count;
				for (int i = 0; i < count; i++)
				{
					if (InPreview(i))
					{
						queue.Add(_orders[i]);
						indices.Add(i);
					}
				}
			}
			ingredientList.SetSlots(PreviewSlots(indices));
			return queue;
		}

		private bool InPreview(int index)
		{
			if (!_openOrders.Contains(index))
			{
				return false;
			}
			if (index >= 0 && index < _looks.Length && _looks[index] == OrderItemLook.Done)
			{
				return false;
			}
			return ingredientList.CanShow(_orders[index].DisplayId);
		}

		private List<Vector2> PreviewSlots(List<int> indices)
		{
			// (top, bottom, orderIndex) in world Y for every visible board item
			List<(float top, float bottom, int index)> ranges = new List<(float, float, int)>();
			if (_orders != null)
			{
				int count = _orders.Count;
				for (int i = 0; i < count; i++)
				{
					FOrderItem item = ItemAt(i);
					if (!item || !item.gameObject.activeSelf)
					{
						continue;
					}
					RectTransform rt = item.transform as RectTransform;
					if (rt != null && rt.parent != null)
					{
						Rect rect = rt.rect;
						Vector3 lp = rt.localPosition;
						Transform parent = rt.parent;
						float top = parent.TransformPoint(new Vector3(lp.x, lp.y + rect.yMax, lp.z)).y;
						float bottom = parent.TransformPoint(new Vector3(lp.x, lp.y + rect.yMin, lp.z)).y;
						ranges.Add((top, bottom, i));
					}
				}
			}
			ranges.Sort((a, b) => b.top.CompareTo(a.top));
			List<Vector2> slots = new List<Vector2>(indices.Count);
			foreach (int orderIndex in indices)
			{
				int pos = ranges.FindIndex(r => r.index == orderIndex);
				if (pos < 0)
				{
					return null;
				}
				float upper = ((pos == 0) ? float.PositiveInfinity : ((ranges[pos - 1].bottom + ranges[pos].top) * 0.5f));
				float lower = ((pos == ranges.Count - 1) ? float.NegativeInfinity : ((ranges[pos].bottom + ranges[pos + 1].top) * 0.5f));
				slots.Add(new Vector2(upper, lower));
			}
			return slots;
		}

		private void CoverBoardWithList()
		{
			if (!ingredientList.UsesSlots)
			{
				SetBoardVisible(false);
				return;
			}
			SetBoardVisible(true);
			if (_orders == null)
			{
				return;
			}
			int count = _orders.Count;
			for (int i = 0; i < count; i++)
			{
				FOrderItem item = ItemAt(i);
				if ((bool)item && InPreview(i))
				{
					if (!item.TryGetComponent<CanvasGroup>(out var group))
					{
						group = item.gameObject.AddComponent<CanvasGroup>();
					}
					group.alpha = 0f;
					_coveredItems.Add(group);
				}
			}
		}

		private void UncoverItems()
		{
			foreach (CanvasGroup group in _coveredItems)
			{
				if ((bool)group)
				{
					group.alpha = 1f;
				}
			}
			_coveredItems.Clear();
		}

		private void SetBoardVisible(bool visible)
		{
			UncoverItems();
			GameObject root = VisualRoot;
			if ((bool)root)
			{
				root.SetActive(visible);
			}
		}

		public virtual void HideOrder()
		{
			if (_loadRoutine != null)
			{
				StopCoroutine(_loadRoutine);
				_loadRoutine = null;
			}
			StopIngredientPreview();
			UncoverItems();
			_orders = null;
			_looks = Array.Empty<OrderItemLook>();
			_openOrders.Clear();
			for (int i = 0; i < items.Length; i++)
			{
				items[i].ClearOrder();
				items[i].HideItem();
			}
		}

		public void SetItemLook(int index, OrderItemLook look, bool animate)
		{
			if (index >= 0 && index < _looks.Length)
			{
				_looks[index] = look;
				FOrderItem item = ItemAt(index);
				if ((bool)item)
				{
					item.ApplyLook(look, animate);
				}
				if (look == OrderItemLook.Done)
				{
					RefreshIngredientPreview(index);
				}
			}
		}

		public void PunchItem(int index)
		{
			FOrderItem item = ItemAt(index);
			if ((bool)item)
			{
				item.PunchLink();
			}
		}

		public Transform GetItemTarget(int index)
		{
			FOrderItem item = ItemAt(index);
			if ((bool)item)
			{
				return item.LinkTarget;
			}
			return null;
		}

		public virtual bool CommitItemDone(int index)
		{
			return false;
		}
	}
}
