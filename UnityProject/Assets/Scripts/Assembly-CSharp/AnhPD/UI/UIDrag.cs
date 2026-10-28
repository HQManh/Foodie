using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace AnhPD.UI
{
	public class UIDrag : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, IPointerClickHandler
	{
		[SerializeField]
		private Transform dragLayer;

		[SerializeField]
		private Image dragImage;

		[SerializeField]
		private float rewindDuration = 0.3f;

		public Action onBeginDrag;

		public Action onEndDrag;

		public Action onClick;

		private Transform _originalParent;

		private RectTransform _rectTransform;

		private CanvasGroup _visualGroup;

		private Vector2 _offset;

		private Vector2 _anchorPos;

		private Vector2 _localAnchorPos;

		private bool _isBlock;

		private bool _parked;

		private bool _returnToTray;

		private void Awake()
		{
			_rectTransform = GetComponent<RectTransform>();
			Transform t = transform;
			if (t != null)
			{
				_originalParent = t.parent;
				if (_rectTransform != null)
				{
					_localAnchorPos = _rectTransform.anchoredPosition;
					if (dragLayer == null)
					{
						dragLayer = _rectTransform.parent;
					}
				}
			}
		}

		public void OnBeginDrag(PointerEventData eventData)
		{
			if (_isBlock)
			{
				return;
			}
			if (_parked)
			{
				_parked = false;
				_returnToTray = true;
				SetVisualVisible(true);
			}
			onBeginDrag?.Invoke();
			Transform t = transform;
			if (t == null)
			{
				return;
			}
			t.SetParent(dragLayer);
			if (_rectTransform == null)
			{
				return;
			}
			_anchorPos = _rectTransform.anchoredPosition;
			if (eventData == null)
			{
				return;
			}
			RectTransform layerRect = dragLayer as RectTransform;
			Vector2 localPoint;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(layerRect, eventData.position, eventData.pressEventCamera, out localPoint);
			// NOTE: x term is the anchored x, y term uses the pointer y, as in the pseudocode. Verify.
			_offset = new Vector2(_rectTransform.anchoredPosition.x - localPoint.x, eventData.position.y - localPoint.y);
		}

		public void OnDrag(PointerEventData eventData)
		{
			if (_isBlock)
			{
				return;
			}
			if (eventData == null)
			{
				return;
			}
			RectTransform layerRect = dragLayer as RectTransform;
			Vector2 localPoint;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(layerRect, eventData.position, eventData.pressEventCamera, out localPoint);
			if (_rectTransform == null)
			{
				return;
			}
			_rectTransform.anchoredPosition = localPoint + _offset;
		}

		public void OnEndDrag(PointerEventData eventData)
		{
			if (_isBlock)
			{
				return;
			}
			dragImage.raycastTarget = false;
			Rewind();
			onEndDrag?.Invoke();
		}

		public void OnPointerClick(PointerEventData eventData)
		{
			if (!_isBlock)
			{
				onClick?.Invoke();
			}
		}

		public void ParkAt(Vector3 worldPos)
		{
			_rectTransform.DOKill();
			_returnToTray = false;
			GameObject go = gameObject;
			if (go == null)
			{
				return;
			}
			go.SetActive(true);
			Transform t = transform;
			if (t == null)
			{
				return;
			}
			t.SetParent(dragLayer);
			// TODO(unrecovered): pseudocode sets localScale from a static block (DAT_0918cbd0 + 0xb8) that has no field in this stub; not applied.
			if (_rectTransform == null)
			{
				return;
			}
			_rectTransform.anchoredPosition = WorldToDragLayerPoint(worldPos);
			if (dragImage == null)
			{
				return;
			}
			dragImage.raycastTarget = false;
			SetVisualVisible(false);
			_parked = true;
		}

		private Vector2 WorldToDragLayerPoint(Vector3 worldPos)
		{
			RectTransform layerRect = dragLayer as RectTransform;
			Camera uiCamera = null;
			if (layerRect != null)
			{
				Canvas canvas = layerRect.GetComponentInParent<Canvas>();
				if (canvas != null && canvas.renderMode != RenderMode.ScreenSpaceOverlay)
				{
					uiCamera = canvas.worldCamera;
				}
			}
			Vector2 screenPoint = RectTransformUtility.WorldToScreenPoint(Camera.main, worldPos);
			Vector2 localPoint;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(layerRect, screenPoint, uiCamera, out localPoint);
			return localPoint;
		}

		private void Rewind()
		{
			Tween tween;
			TweenCallback callback;
			if (!_returnToTray)
			{
				tween = _rectTransform.DOAnchorPos(_anchorPos, rewindDuration).SetEase(Ease.OutQuad);
				callback = () =>
				{
					dragImage.raycastTarget = true;
				};
			}
			else
			{
				_returnToTray = false;
				transform.SetParent(_originalParent);
				tween = _rectTransform.DOAnchorPos(_localAnchorPos, rewindDuration).SetEase(Ease.OutQuad);
				callback = () =>
				{
					transform.SetParent(_originalParent);
					dragImage.raycastTarget = true;
				};
			}
			tween.OnComplete(callback);
		}

		public void ResetPosition()
		{
			_rectTransform.DOKill();
			_parked = false;
			_returnToTray = false;
			GameObject go = gameObject;
			if (go == null)
			{
				return;
			}
			go.SetActive(true);
			Transform t = transform;
			if (t == null)
			{
				return;
			}
			t.SetParent(_originalParent);
			// TODO(unrecovered): pseudocode sets localScale and a punch-scale vector from a static block (DAT_0918cbd0 + 0xb8) not in this stub; not applied.
			if (_rectTransform == null)
			{
				return;
			}
			_rectTransform.anchoredPosition = _localAnchorPos;
			if (dragImage == null)
			{
				return;
			}
			dragImage.raycastTarget = true;
			SetVisualVisible(true);
		}

		public void SetDragLayer(Transform layerRoot)
		{
			dragLayer = layerRoot;
		}

		public void Block(bool isBlock)
		{
			_isBlock = isBlock;
		}

		private void SetVisualVisible(bool visible)
		{
			if (_visualGroup == null)
			{
				_visualGroup = GetComponent<CanvasGroup>();
			}
			if (_visualGroup == null)
			{
				GameObject go = gameObject;
				if (go == null)
				{
					return;
				}
				_visualGroup = go.AddComponent<CanvasGroup>();
			}
			if (_visualGroup != null)
			{
				_visualGroup.alpha = visible ? 1f : 0f;
				_visualGroup.blocksRaycasts = true;
			}
		}
	}
}
