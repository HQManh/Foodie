using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellDisplayState : MonoBehaviour
	{
		public bool IsShown => gameObject.activeSelf;

		public void Show()
		{
			SetShown(true);
		}

		public virtual void Hide()
		{
			SetShown(false);
		}

		public void SetShown(bool shown)
		{
			gameObject.SetActive(shown);
		}
	}
}
