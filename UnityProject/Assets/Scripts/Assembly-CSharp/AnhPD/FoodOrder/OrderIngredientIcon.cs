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

		[Tooltip("Colour and thickness of the solid outline that replaces the UIFX filter.")]
		[SerializeField]
		private Color outlineColor = new Color(0.9333f, 0.7176f, 0.5412f, 1f);

		[SerializeField]
		private float outlineSize = 4f;

		private OutlineSilhouette _outline;

		private bool _owned;

		private Tween _pop;

		public string Id { get; private set; }

		private void Awake()
		{
			// The UIFX OutlineFilter leaves the icon blank on this world-space canvas (even when disabled), so it is removed and a
			// solid outline drawn by a mesh effect (flat colour in the sprite's shape, behind the icon) takes its place.
			if (outline != null)
			{
				Destroy(outline);
				outline = null;
			}
			_outline = gameObject.AddComponent<OutlineSilhouette>();
			_outline.Color = outlineColor;
			_outline.Size = outlineSize;
			_outline.Prepare();
		}

		public void Bind(string id, Sprite sprite)
		{
			Id = id;
			image.sprite = sprite;
			base.gameObject.SetActive(true);
			_owned = false;
			StopPop();
			Apply(1f, 0f);
		}

		public void Hide()
		{
			StopPop();
			base.gameObject.SetActive(false);
		}

		public void PlayPop(float delay, float duration)
		{
			StopPop();
			transform.localScale = Vector3.one * 0.3f;
			// Not tied to the transform: the layout DOKills its children on every relayout.
			_pop = DOVirtual.Float(0f, 1f, duration, delegate(float t)
			{
				if (this)
				{
					transform.localScale = Vector3.one * Mathf.LerpUnclamped(0.3f, 1f, t);
				}
			}).SetDelay(delay).SetEase(Ease.OutBack).OnKill(delegate
			{
				if (this)
				{
					transform.localScale = Vector3.one;
				}
			});
		}

		private void StopPop()
		{
			if (_pop != null && _pop.IsActive())
			{
				_pop.Kill();
			}
			_pop = null;
		}

		private void OnDisable()
		{
			StopPop();
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
			if ((bool)_outline)
			{
				_outline.enabled = !_owned;
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
