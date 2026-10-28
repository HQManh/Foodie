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

		private float _contentScale = 1f;

		public override float ContentScale => _contentScale;

		public override float ContentAspect
		{
			get
			{
				Sprite sprite = icon != null ? icon.sprite : null;
				if (sprite == null)
				{
					return 1f;
				}
				Rect rect = sprite.rect;
				return rect.height > 0f ? rect.width / rect.height : 1f;
			}
		}

		private void Awake()
		{
			CaptureBaseScale();
		}

		private void CaptureBaseScale()
		{
			if (!_baseCaptured && icon != null)
			{
				_iconBaseScale = icon.transform.localScale;
				_baseCaptured = true;
			}
		}

		public override void Display(string id)
		{
			CaptureBaseScale();
			if (icon == null)
			{
				return;
			}
			icon.gameObject.SetActive(true);
			icon.sprite = ResolveSprite(id);
			float scale = 1f;
			MessyController messy = MessyController.Ins;
			if (messy != null && messy.Info != null && !FlexibleId.IsFlexible(id))
			{
				scale = messy.Info.GetIngredientDisplayScale(id);
			}
			icon.transform.localScale = _iconBaseScale * scale;
			float relative = 1f;
			if (FlexibleId.IsFlexible(id) && UIHintFlexibleHelper.Instance != null)
			{
				relative = UIHintFlexibleHelper.Instance.RelativeHeight(id);
			}
			_contentScale = relative;
		}

		private static Sprite ResolveSprite(string id)
		{
			MessyController messy = MessyController.Ins;
			bool hasHelper = UIHintFlexibleHelper.Instance != null;
			if (messy == null)
			{
				if (!FlexibleId.IsFlexible(id) || !hasHelper)
				{
					return null;
				}
				return UIHintFlexibleHelper.Instance.CaptureSprite(id);
			}
			LevelInfo info = messy.Info;
			if (!FlexibleId.IsFlexible(id))
			{
				return info != null ? info.GetIngredientSprite(id) : null;
			}
			if (hasHelper)
			{
				Sprite captured = UIHintFlexibleHelper.Instance.CaptureSprite(id);
				if (captured != null)
				{
					return captured;
				}
			}
			if (info == null)
			{
				return null;
			}
			return info.GetIngredientSprite(FlexibleId.BaseOf(id));
		}

		public override void ClearDisplay()
		{
			if (icon != null)
			{
				icon.gameObject.SetActive(false);
			}
		}

		public override void SetAlpha(float alpha)
		{
			if (icon != null)
			{
				Color c = icon.color;
				c.a = alpha;
				icon.color = c;
			}
		}

		public override void SetTint(Color tint)
		{
			if (icon != null)
			{
				icon.color = tint;
			}
		}
	}
}
