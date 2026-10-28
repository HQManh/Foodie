using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CocaDisplay : MonoBehaviour
	{
		[SerializeField]
		private GameObject coca;

		[SerializeField]
		private GameObject overflow;

		[SerializeField]
		private GameObject[] ices;

		private Tween _iceTween;

		public void ShowCoca()
		{
		}

		public void ShowIceCoca()
		{
		}

		public void ShowOverflow()
		{
		}

		public void RenderState(bool ice, bool overflowed)
		{
		}

		public void Clear()
		{
		}
	}
}
