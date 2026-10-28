using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class Highlight : MonoBehaviour
	{
		public abstract void Show(bool isSpeedUp = false);

		public abstract void PreShow();

		public abstract void Hide();
	}
}
