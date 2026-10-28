using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AppearSfx : MonoBehaviour
	{
		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		[Range(0f, 1f)]
		private float volume = 1f;

		public bool isPlayOnEnable = true;

		private void OnEnable()
		{
			if (isPlayOnEnable)
			{
				PlaySound();
			}
		}

		private void PlaySound()
		{
			if ((bool)sfx)
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfx, volume, (AudioManagerCakeOrder.AudioTrack)3);
			}
		}

		public void Mute()
		{
			volume = 0f;
		}

		public void Unmute()
		{
			volume = 1f;
		}
	}
}
