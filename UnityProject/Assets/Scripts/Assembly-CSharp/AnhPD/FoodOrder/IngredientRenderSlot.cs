using TMPro;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngredientRenderSlot : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spriteRenderer;

		[SerializeField]
		private TMP_Text txtCount;

		private Color _countBaseColor = Color.white;

		private bool _hasCount;

		private Vector3 _home;

		private bool _homeCached;

		public SpriteRenderer Renderer
		{
			get
			{
				if (!spriteRenderer)
				{
					spriteRenderer = GetComponent<SpriteRenderer>();
				}
				return spriteRenderer;
			}
		}

		private void Awake()
		{
			if (txtCount)
			{
				_countBaseColor = txtCount.color;
			}
		}

		public void SetTint(Color tint)
		{
			if (txtCount)
			{
				txtCount.color = new Color(tint.r * _countBaseColor.r, tint.g * _countBaseColor.g, tint.b * _countBaseColor.b, tint.a * _countBaseColor.a);
			}
		}

		public void SetAlpha(float alpha)
		{
			if (txtCount)
			{
				txtCount.alpha = alpha;
			}
		}

		public void Show(Sprite sprite, int count, Vector3 scale, Vector2 offset = default(Vector2))
		{
			SpriteRenderer sr = Renderer;
			if (!sr)
			{
				return;
			}
			if (!_homeCached)
			{
				Transform t = sr.transform;
				if (!t)
				{
					return;
				}
				_home = t.localPosition;
				_homeCached = true;
			}
			sr.gameObject.SetActive(true);
			sr.sprite = sprite;
			Transform tr = sr.transform;
			tr.localScale = scale;
			tr.localPosition = new Vector3(offset.x + _home.x, offset.y + _home.y, _home.z);
			SetCount(count);
		}

		public void SetCount(int count)
		{
			if (!txtCount)
			{
				return;
			}
			_hasCount = count > 1;
			txtCount.text = (count < 2) ? string.Empty : count.ToString();
			txtCount.gameObject.SetActive(_hasCount);
		}

		public void SetVisible(bool visible)
		{
			SpriteRenderer sr = Renderer;
			if (sr)
			{
				sr.enabled = visible;
			}
			if (txtCount)
			{
				txtCount.gameObject.SetActive(visible && _hasCount);
			}
		}
	}
}
