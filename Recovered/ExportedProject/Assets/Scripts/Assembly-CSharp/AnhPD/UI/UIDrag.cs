using System;
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
		private float rewindDuration;

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
		}

		public void OnBeginDrag(PointerEventData eventData)
		{
		}

		public void OnDrag(PointerEventData eventData)
		{
		}

		public void OnEndDrag(PointerEventData eventData)
		{
		}

		public void OnPointerClick(PointerEventData eventData)
		{
		}

		public void ParkAt(Vector3 worldPos)
		{
		}

		private Vector2 WorldToDragLayerPoint(Vector3 worldPos)
		{
			return default;
		}

		private void Rewind()
		{
		}

		public void ResetPosition()
		{
		}

		public void SetDragLayer(Transform layerRoot)
		{
		}

		public void Block(bool isBlock)
		{
		}

		private void SetVisualVisible(bool visible)
		{
		}
	}
}
