using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class OrderPreviewItem : MonoBehaviour
	{
		[SerializeField]
		private Image image;

		[SerializeField]
		private TextMeshProUGUI text;

		public void Show(Sprite icon, int count)
		{
		}

		public void Hide()
		{
		}
	}
}
