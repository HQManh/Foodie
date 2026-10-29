using CakeOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpawnBag : MonoBehaviour
	{
		[SerializeField]
		private AudioClip sfxClick;

		public bool isBlock;

		private void Awake()
		{
			Setup();
		}

		protected virtual void Setup()
		{
		}

		protected void InvokeSpawnEffect()
		{
			if (sfxClick && AudioManagerCakeOrder.Instance)
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfxClick, (AudioManagerCakeOrder.AudioTrack)4, 0.5f);
			}
			transform.DOComplete();
			transform.DOPunchScale(Vector3.one * -0.1f, 0.2f, 10, 1f);
		}
	}
}
