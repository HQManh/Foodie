using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class LiquidFaucet : MonoBehaviour
	{
		[SerializeField]
		private AudioSource audioSource;

		[SerializeField]
		private SpriteRenderer image;

		[SerializeField]
		private Sprite[] sprites;

		private int _index;

		private float _timer;

		private bool _isWatering;

		public void StartWatering(float rate)
		{
		}

		private void OnWatering(float rate)
		{
		}

		public void StopWatering()
		{
		}

		private void Update()
		{
		}
	}
}
