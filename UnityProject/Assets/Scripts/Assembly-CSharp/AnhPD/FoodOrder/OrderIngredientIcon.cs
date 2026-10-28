using ChocDino.UIFX;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class OrderIngredientIcon : MonoBehaviour
	{
		[SerializeField]
		private Image image;

		[SerializeField]
		private OutlineFilter outline;

		private bool _owned;

		public string Id { get; private set; }

		public void Bind(string id, Sprite sprite)
		{
			Id = id;
			image.sprite = sprite;
			base.gameObject.SetActive(true);
			_owned = false;
			Apply(1f, 0f);
		}

		public void Hide()
		{
			base.gameObject.SetActive(false);
		}

		public bool SetOwned(bool owned, float ownedAlpha, float fadeTime)
		{
			bool changed = _owned != owned;
			if (changed)
			{
				_owned = owned;
				Apply(ownedAlpha, fadeTime);
			}
			return changed;
		}

		private void Apply(float ownedAlpha, float fadeTime)
		{
			if ((bool)outline)
			{
				outline.enabled = !_owned;
			}
			float alpha = (_owned ? ownedAlpha : 1f);
			image.DOKill();
			if (fadeTime > 0f)
			{
				image.DOFade(alpha, fadeTime);
				return;
			}
			Color c = image.color;
			c.a = alpha;
			image.color = c;
		}
	}
}
