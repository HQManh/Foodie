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
			CaptureRef();
		}

		private void CaptureRef()
		{
			if (_refCaptured)
			{
				return;
			}
			if (referenceSize.x <= 0f || referenceSize.y <= 0f)
			{
				if (icon == null)
				{
					return;
				}
				Sprite sprite = icon.sprite;
				if (sprite == null)
				{
					return;
				}
				Vector3 scale = icon.transform.localScale;
				Rect rect = sprite.rect;
				float pixelsPerUnit = sprite.pixelsPerUnit;
				_refWorldSize = new Vector2(scale.x * (rect.width / pixelsPerUnit), scale.y * (rect.height / pixelsPerUnit));
			}
			else
			{
				_refWorldSize = referenceSize;
			}
			_refCaptured = true;
		}

		public override void Display(string id)
		{
			CaptureRef();
			if (icon == null || icon.gameObject == null)
			{
				return;
			}
			icon.gameObject.SetActive(true);
			Sprite sprite = null;
			if (FlexibleId.IsFlexible(id))
			{
				// TODO(unrecovered): flexible-id sprite comes from UIHintFlexibleHelper.CaptureSprite via an unidentified static chain
			}
			else
			{
				LevelInfo info = (MessyController.Ins != null) ? MessyController.Ins.Info : null;
				if (info != null)
				{
					sprite = info.GetIngredientSprite(id);
				}
			}
			icon.sprite = sprite;
			if (sprite == null || _refWorldSize.x <= 0f || _refWorldSize.y <= 0f || icon.transform == null)
			{
				return;
			}
			Rect rect = sprite.rect;
			float pixelsPerUnit = sprite.pixelsPerUnit;
			float fitX = _refWorldSize.x / (rect.width / pixelsPerUnit);
			float fitY = _refWorldSize.y / (rect.height / pixelsPerUnit);
			float fit = (fitY <= fitX) ? fitY : fitX;
			icon.transform.localScale = new Vector3(fit, fit, 1f);
		}

		public override void ClearDisplay()
		{
			if (icon != null && icon.gameObject != null)
			{
				icon.gameObject.SetActive(false);
			}
		}

		public override void SetAlpha(float alpha)
		{
			if (icon != null)
			{
				Color color = icon.color;
				color.a = alpha;
				icon.color = color;
			}
		}

		public override void SetTint(Color tint)
		{
			if (icon != null)
			{
				Color color = icon.color;
				color.r = tint.r;
				color.g = tint.g;
				color.b = tint.b;
				icon.color = color;
			}
		}
	}
}
