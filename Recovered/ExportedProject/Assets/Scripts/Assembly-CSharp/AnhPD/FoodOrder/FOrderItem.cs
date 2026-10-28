using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FOrderItem : MonoBehaviour
	{
		[SerializeField]
		private FDisplayBase display;

		[SerializeField]
		private GameObject doneTick;

		[SerializeField]
		private Color doneTint;

		[SerializeField]
		[Range(0f, 1f)]
		private float readyAlpha;

		[SerializeField]
		private GameObject mysteryMark;

		private OrderSpec _spec;

		public float ContentAspect => 0f;

		public float ContentScale => 0f;

		public Transform LinkTarget => null;

		public void InitOrder(OrderSpec spec)
		{
		}

		private void DisplayOrder()
		{
		}

		public void ApplyLook(OrderItemLook look, bool animate = false)
		{
		}

		public void ClearOrder()
		{
		}

		private void SetMysteryMark(bool on)
		{
		}

		private void RestoreFade()
		{
		}

		private void ApplyDoneTint()
		{
		}

		private void RestoreTint()
		{
		}

		public void HideItem()
		{
		}

		public void PunchLink()
		{
		}

		public void Appear()
		{
		}

		private void CompleteScaleTweens()
		{
		}
	}
}
