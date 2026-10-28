using DG.Tweening;
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
		private Color doneTint = new Color(0.55f, 0.55f, 0.55f, 1f);

		[SerializeField]
		[Range(0f, 1f)]
		private float readyAlpha = 0.4f;

		[SerializeField]
		private GameObject mysteryMark;

		private OrderSpec _spec;

		public float ContentAspect
		{
			get
			{
				if ((bool)display)
				{
					return display.ContentAspect;
				}
				return 1f;
			}
		}

		public float ContentScale
		{
			get
			{
				if ((bool)display)
				{
					return display.ContentScale;
				}
				return 1f;
			}
		}

		public Transform LinkTarget
		{
			get
			{
				if ((bool)display)
				{
					return display.transform;
				}
				return base.transform;
			}
		}

		public void InitOrder(OrderSpec spec)
		{
			_spec = spec;
			DisplayOrder();
		}

		private void DisplayOrder()
		{
			doneTick.SetActive(false);
			SetMysteryMark(false);
			RestoreFade();
			RestoreTint();
			display.ClearDisplay();
			display.gameObject.SetActive(true);
			display.Display(_spec);
		}

		public void ApplyLook(OrderItemLook look, bool animate = false)
		{
			doneTick.SetActive(look == OrderItemLook.Done);
			if (look == OrderItemLook.Done)
			{
				ApplyDoneTint();
			}
			else
			{
				RestoreTint();
			}
			if ((bool)display)
			{
				display.SetAlpha((look == OrderItemLook.Ready) ? readyAlpha : 1f);
			}
			SetMysteryMark(look == OrderItemLook.Mystery);
			if (animate)
			{
				PunchLink();
			}
		}

		public void ClearOrder()
		{
			CompleteScaleTweens();
			doneTick.SetActive(false);
			SetMysteryMark(false);
			RestoreFade();
			RestoreTint();
			display.ClearDisplay();
		}

		private void SetMysteryMark(bool on)
		{
			if ((bool)mysteryMark)
			{
				mysteryMark.SetActive(on);
			}
		}

		private void RestoreFade()
		{
			if ((bool)display)
			{
				display.SetAlpha(1f);
			}
		}

		private void ApplyDoneTint()
		{
			if ((bool)display)
			{
				display.SetTint(doneTint);
			}
		}

		private void RestoreTint()
		{
			if ((bool)display)
			{
				display.SetTint(Color.white);
			}
		}

		public void HideItem()
		{
			base.gameObject.SetActive(false);
		}

		public void PunchLink()
		{
			RestoreFade();
			CompleteScaleTweens();
			display.transform.DOPunchScale(Vector3.one * 0.3f, 0.3f, 6, 0.6f);
		}

		public void Appear()
		{
			CompleteScaleTweens();
			base.transform.Appear(0.1f);
		}

		private void CompleteScaleTweens()
		{
			base.transform.DOComplete();
			if ((bool)display && display.transform != base.transform)
			{
				display.transform.DOComplete();
			}
		}
	}
}
