using ChocDino.UIFX;
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
		}

		public void Hide()
		{
		}

		public bool SetOwned(bool owned, float ownedAlpha, float fadeTime)
		{
			return false;
		}

		private void Apply(float ownedAlpha, float fadeTime)
		{
		}
	}
}
