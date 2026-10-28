using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class PreciseDisplay : FDisplayBase
	{
		[SerializeField]
		protected SpriteRenderer icon;

		[SerializeField]
		private Vector2 referenceSize;

		private Vector2 _refWorldSize;

		private bool _refCaptured;

		private void Awake()
		{
		}

		private void CaptureRef()
		{
		}

		public override void Display(string id)
		{
		}

		public override void ClearDisplay()
		{
		}

		public override void SetAlpha(float alpha)
		{
		}

		public override void SetTint(Color tint)
		{
		}
	}
}
