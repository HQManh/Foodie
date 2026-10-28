using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AppearSfx : MonoBehaviour
	{
		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		[Range(0f, 1f)]
		private float volume;

		public bool isPlayOnEnable;

		private void OnEnable()
		{
		}

		private void PlaySound()
		{
		}

		public void Mute()
		{
		}

		public void Unmute()
		{
		}
	}
}
