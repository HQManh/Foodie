using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class EffectOnEnable : MonoBehaviour
	{
		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		[Range(0f, 1f)]
		protected float volume = 1f;

		[SerializeField]
		private float waitTime;

		private float _timer;

		private void OnEnable()
		{
			if ((bool)sfx)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfx, (AudioManagerCakeOrder.AudioTrack)4, volume);
			}
			_timer = waitTime;
		}

		private void Update()
		{
			_timer -= Time.deltaTime;
			if (!(_timer > 0f))
			{
				base.gameObject.SetActive(false);
			}
		}
	}
}
