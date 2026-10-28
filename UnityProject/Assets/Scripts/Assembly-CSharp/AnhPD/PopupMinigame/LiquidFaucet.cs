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
			if (_isWatering)
			{
				OnWatering(rate);
				return;
			}
			_isWatering = true;
			if (image != null)
			{
				image.enabled = true;
				_timer = 0f;
				if (audioSource != null)
				{
					audioSource.Play();
				}
			}
		}

		private void OnWatering(float rate)
		{
			if (image != null)
			{
				// The pseudocode passes the rate as the x scale; y and z are 1.
				image.transform.localScale = new Vector3(rate, 1f, 1f);
			}
		}

		public void StopWatering()
		{
			if (audioSource != null)
			{
				audioSource.Stop();
				_isWatering = false;
				if (image != null)
				{
					image.enabled = false;
				}
			}
		}

		private void Update()
		{
			if (!_isWatering)
			{
				return;
			}
			_timer += Time.unscaledDeltaTime;
			if (_timer > 0.2f)
			{
				int index = _index + 1;
				if (sprites != null && sprites.Length > 0)
				{
					index %= sprites.Length;
				}
				_index = index;
				if (image != null)
				{
					image.sprite = sprites[_index];
					_timer = 0f;
				}
			}
		}
	}
}
