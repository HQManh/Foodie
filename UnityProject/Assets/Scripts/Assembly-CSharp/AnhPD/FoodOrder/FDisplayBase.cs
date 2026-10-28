using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class FDisplayBase : MonoBehaviour
	{
		public virtual float ContentAspect => 1f;

		public virtual float ContentScale => 1f;

		public abstract void Display(string id);

		public virtual void Display(OrderSpec spec)
		{
			Display(spec.DisplayId);
		}

		public abstract void ClearDisplay();

		public abstract void SetAlpha(float alpha);

		public abstract void SetTint(Color tint);
	}
}
