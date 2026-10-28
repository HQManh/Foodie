using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UIPreciseDisplay : FDisplayBase
	{
		[SerializeField]
		private Image icon;

		private Vector3 _iconBaseScale;

		private bool _baseCaptured;

		private float _contentScale;

		public override float ContentScale => 0f;

		public override float ContentAspect => 0f;

		private void Awake()
		{
		}

		private void CaptureBaseScale()
		{
		}

		public override void Display(string id)
		{
		}

		private static Sprite ResolveSprite(string id)
		{
			return null;
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
