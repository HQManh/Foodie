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

		private bool IsZooming => false;

		public void OnPointerClick(PointerEventData eventData)
		{
		}

		private void Zoom()
		{
		}

		private void OnDisable()
		{
		}
	}
}
