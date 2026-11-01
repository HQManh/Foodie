using CakeOrder;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;

namespace AnhPD.FoodOrder
{
	public class OrderPreviewLayoutZoom : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
	{
		[SerializeField]
		private float zoomScale;

		[SerializeField]
		private float zoomInDuration;

		[SerializeField]
		private float zoomHold;

		[SerializeField]
		private float zoomOutDuration;

		[SerializeField]
		private SfxAndHapticTrigger sfxOnTap;

		private Sequence _zoom;

		private Vector3 _zoomBase;

		private bool IsZooming => _zoom != null && _zoom.IsActive();

		public void OnPointerClick(PointerEventData eventData)
		{
			MessyController level = MessyController.Ins;
			if (level == null || !level.IsAllowInteract)
			{
				return;
			}
			if (!TutorialGate.IsActive)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxAndHaptic(sfxOnTap, (AudioManagerCakeOrder.AudioTrack)3);
				Zoom();
			}
		}

		private void Zoom()
		{
			if (_zoom != null && _zoom.IsActive())
			{
				_zoom.Kill();
				_zoom = DOTween.Sequence().SetTarget(this);
			}
			else
			{
				_zoomBase = transform.localScale;
				_zoom = DOTween.Sequence().SetTarget(this);
				_zoom.Append(transform.DOScale(_zoomBase * zoomScale, zoomInDuration).SetEase(Ease.OutBack));
				_zoom.AppendInterval(zoomHold);
			}
			_zoom.Append(transform.DOScale(_zoomBase, zoomOutDuration).SetEase(Ease.InOutSine));
		}

		private void OnDisable()
		{
			if (_zoom != null && _zoom.IsActive())
			{
				_zoom.Kill();
				_zoom = null;
				transform.localScale = _zoomBase;
				return;
			}
			_zoom = null;
		}
	}
}
