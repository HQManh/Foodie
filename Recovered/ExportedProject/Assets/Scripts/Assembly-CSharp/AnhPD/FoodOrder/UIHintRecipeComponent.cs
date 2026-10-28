using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UIHintRecipeComponent : MonoBehaviour
	{
		[SerializeField]
		private Image image;

		[SerializeField]
		private Button button;

		[SerializeField]
		private GameObject iconMag;

		private string _id;

		public void Init(RcDisplayConfig config)
		{
		}

		public void Hide()
		{
		}

		public void ShowRecipe()
		{
		}
	}
}
