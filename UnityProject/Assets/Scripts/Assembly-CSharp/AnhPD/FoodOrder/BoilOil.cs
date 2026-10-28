using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BoilOil : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer oil;

		[SerializeField]
		private Sprite[] oilSprite;

		[SerializeField]
		private AudioSource sfx;

		private int _index;

		private float _timer;

		private float _duration = 0.2f;

		private bool _isBoiling;

		private bool _isPaused;

		public void SetPaused(bool paused)
		{
			if (_isPaused != paused)
			{
				_isPaused = paused;
				if (_isBoiling)
				{
					if (paused)
					{
						sfx.Pause();
					}
					else
					{
						sfx.UnPause();
					}
				}
			}
		}

		public void Update()
		{
			if (_isBoiling && !_isPaused)
			{
				_timer += Time.deltaTime;
				if (_timer > _duration)
				{
					_index++;
					_timer = 0f;
					_index %= oilSprite.Length;
					oil.sprite = oilSprite[_index];
					_duration = Random.Range(0.1f, 0.2f);
				}
			}
		}

		public void StartBoiling()
		{
			base.gameObject.SetActive(true);
			oil.DOFade(1f, 0.5f);
			_isBoiling = true;
			_isPaused = false;
			sfx.Play();
		}

		public void StopBoiling()
		{
			_isBoiling = false;
			sfx.Stop();
			base.gameObject.SetActive(false);
		}
	}
}
