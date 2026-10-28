using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BossOrderBoardEffect : MonoBehaviour
	{
		[SerializeField]
		private ChangeColorImage[] images;

		public void PlayEffect()
		{
			for (int i = 0; i < images.Length; i++)
			{
				images[i].ChangeColor();
			}
		}

		public void StopEffect()
		{
			for (int i = 0; i < images.Length; i++)
			{
				images[i].RestoreColor();
			}
		}
	}
}
