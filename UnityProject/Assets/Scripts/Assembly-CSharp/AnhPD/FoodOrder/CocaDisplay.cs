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
			coca.transform.Appear();
		}

		public void ShowIceCoca()
		{
			Sequence sequence = DOTween.Sequence();
			GameObject[] array = ices;
			foreach (GameObject ice in array)
			{
				sequence.AppendCallback(delegate
				{
					ice.transform.FallAppearLocal();
				});
				sequence.AppendInterval(0.1f);
			}
			_iceTween = sequence;
		}

		public void ShowOverflow()
		{
			if ((bool)overflow)
			{
				overflow.transform.Appear();
			}
		}

		public void RenderState(bool ice, bool overflowed)
		{
			_iceTween?.Complete();
			coca.transform.Appear();
			GameObject[] array = ices;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].SetActive(ice);
			}
			if ((bool)overflow)
			{
				if (overflowed)
				{
					overflow.transform.Appear();
				}
				else
				{
					overflow.SetActive(false);
				}
			}
		}

		public void Clear()
		{
			_iceTween?.Complete();
			coca.SetActive(false);
			GameObject[] array = ices;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].SetActive(false);
			}
			if ((bool)overflow)
			{
				overflow.SetActive(false);
			}
		}
	}
}
