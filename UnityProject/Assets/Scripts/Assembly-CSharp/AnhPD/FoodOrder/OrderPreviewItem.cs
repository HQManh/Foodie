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
			gameObject.SetActive(true);
			if (image)
			{
				image.sprite = icon;
			}
			if (text)
			{
				text.text = string.Format("x{0}", count); /* literal recovered by guess */
				text.gameObject.SetActive(count > 1);
			}
		}

		public void Hide()
		{
			gameObject.SetActive(false);
		}
	}
}
