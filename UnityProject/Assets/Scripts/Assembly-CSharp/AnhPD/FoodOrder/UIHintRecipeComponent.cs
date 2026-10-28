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
			gameObject.SetActive(true);
			if (config == null)
			{
				return;
			}
			_id = config.id;
			if (image != null)
			{
				image.sprite = config.sprite;
				image.gameObject.SetActive(true);
			}
			// TODO(unrecovered): the button and iconMag visibility depends on LevelInfo.IsRecipe(id) (asked when config kind +0x20 == 0). LevelInfo.IsRecipe now exists, but the LevelInfo instance comes from an unnamed singleton (DAT_091881a0 +0xb8, then +0x110) that has no stub; not set.
		}

		public void Hide()
		{
			gameObject.SetActive(false);
		}

		public void ShowRecipe()
		{
			// TODO(unrecovered): calls GameplayUI.ShowHintById (now in the stubs) through the instance at singleton DAT_09184b88 +0xb8; that singleton's type is not identified in the stubs, so the receiver cannot be reached.
		}
	}
}
