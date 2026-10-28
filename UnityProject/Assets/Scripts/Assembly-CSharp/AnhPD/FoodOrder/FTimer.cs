using System;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class FTimer : MonoBehaviour
	{
		[SerializeField]
		private Image imgTimer;

		[SerializeField]
		private Sprite spriteHappy;

		[SerializeField]
		private Sprite spriteNormal;

		[SerializeField]
		private Sprite spriteAngry;

		[SerializeField]
		private float duration = 10f;

		[SerializeField]
		private float refillDuration = 0.4f;

		public int[] timePercentToEmotion = new int[4] { 0, 30, 60, 100 } /* values recovered by guess */;

		private static readonly CustomerEmotion[] EmotionByStage = new CustomerEmotion[4]
		{
			(CustomerEmotion)0,
			(CustomerEmotion)1,
			(CustomerEmotion)2,
			(CustomerEmotion)3
		} /* values recovered by guess */;

		public Action OnTimeout;

		public Action OnShake;

		public Action OnStopShake;

		public Action OnUpset;

		public Action OnStopUpset;

		private float _timer;

		private float _rate = 1f;

		private float _speed = 1f;

		private CustomerEmotion _state;

		private WeatherEffect _currentWeather;

		private bool _isWaiting;

		private Tween _refillTween;

		private static readonly int FillId = Shader.PropertyToID("_Fill") /* decoded from the metadata */;

		private Material _fillMaterial;

		private float _fill = 1f;

		private Func<bool> _isHeld;

		public bool IsSatisfied => _timer < duration;

		public float Rate => _rate;

		private float RealDeltaTime
		{
			get
			{
				float result = 0f;
				if (Time.timeScale > 0.01f && (_isHeld == null || !_isHeld()))
				{
					result = Mathf.Min(Time.unscaledDeltaTime, Time.maximumDeltaTime);
				}
				return result;
			}
		}

		private bool IsHeld
		{
			get
			{
				if (_isHeld != null)
				{
					return _isHeld();
				}
				return false;
			}
		}

		private void Awake()
		{
			if ((bool)imgTimer && (bool)imgTimer.material && imgTimer.material.HasProperty(FillId))
			{
				_fillMaterial = new Material(imgTimer.material);
				imgTimer.material = _fillMaterial;
			}
		}

		public void SetEmotionThresholds(int[] percents)
		{
			if (percents != null && percents.Length > 0)
			{
				timePercentToEmotion = percents;
			}
		}

		public void Init(float dur)
		{
			if (dur <= 0f)
			{
				dur = 60f;
			}
			duration = dur;
			ResetTimer();
		}

		public void ResetTimer()
		{
			if (_refillTween != null)
			{
				_refillTween.Kill();
			}
			_timer = 0f;
			ChangeEmoji((CustomerEmotion)3);
			_rate = _timer / duration;
			SetRadial(1f - _rate);
			base.gameObject.SetActive(false);
		}

		public void HideTimer()
		{
			imgTimer.gameObject.SetActive(false);
		}

		public void StartWaiting()
		{
			base.gameObject.SetActive(true);
			_isWaiting = true;
			imgTimer.gameObject.SetActive(true);
		}

		public void StopWaiting()
		{
			_isWaiting = false;
		}

		public void SetHoldSource(Func<bool> isHeld)
		{
			_isHeld = isHeld;
		}

		private void Update()
		{
			if (_isWaiting && !(duration < 0f))
			{
				_timer += RealDeltaTime * _speed;
				if (_refillTween == null)
				{
					_rate = _timer / duration;
					SetRadial(1f - _rate);
				}
				CheckTimeOut();
			}
		}

		private void CheckTimeOut()
		{
			if (_isWaiting)
			{
				float num = 0f;
				if (duration > 0f)
				{
					num = _timer / duration;
				}
				ChangeEmoji(GetEmotionByRate(num));
				if (num >= 1f)
				{
					_isWaiting = false;
					if (OnTimeout != null)
					{
						OnTimeout();
					}
				}
			}
		}

		private CustomerEmotion GetEmotionByRate(float r)
		{
			int num = Mathf.Min(timePercentToEmotion.Length, EmotionByStage.Length);
			for (int i = 0; i < num; i++)
			{
				if ((1f - r) * 100f <= (float)timePercentToEmotion[i])
				{
					return EmotionByStage[i];
				}
			}
			return EmotionByStage[num - 1];
		}

		private void UpdateDisplay()
		{
			_rate = _timer / duration;
			SetRadial(1f - _rate);
		}

		private void SetRadial(float fill01)
		{
			_fill = fill01;
			if (!_fillMaterial)
			{
				imgTimer.fillAmount = fill01;
				return;
			}
			_fillMaterial.SetFloat(FillId, fill01);
			Material materialForRendering = imgTimer.materialForRendering;
			if ((bool)materialForRendering && materialForRendering != _fillMaterial)
			{
				materialForRendering.SetFloat(FillId, fill01);
			}
		}

		private Sprite SpriteFor(CustomerEmotion state)
		{
			switch ((int)state)
			{
			case 1:
				return spriteAngry;
			case 2:
				return spriteNormal;
			case 3:
				return spriteHappy;
			default:
				return null;
			}
		}

		private void ChangeEmoji(CustomerEmotion newState)
		{
			if (_state == newState)
			{
				return;
			}
			Sprite sprite = SpriteFor(newState);
			if ((bool)sprite)
			{
				imgTimer.sprite = sprite;
			}
			CustomerEmotion state = _state;
			_state = newState;
			if ((int)newState == 1)
			{
				if (OnShake != null)
				{
					OnShake();
				}
			}
			else if ((int)state == 1 && OnStopShake != null)
			{
				OnStopShake();
			}
			if ((int)newState < 3 != (int)state < 3)
			{
				Action action = (((int)newState > 2) ? OnStopUpset : OnUpset);
				if (action != null)
				{
					action();
				}
			}
		}

		public void RefillTime(Action onDone = null)
		{
			if (_refillTween != null)
			{
				_refillTween.Kill();
			}
			_timer = 0f;
			ChangeEmoji((CustomerEmotion)3);
			if (refillDuration > 0f)
			{
				_rate = 0f;
				_refillTween = DOTween.To(() => _fill, SetRadial, 1f, refillDuration).SetEase(Ease.OutQuad).SetUpdate(true).OnComplete(delegate
				{
					_refillTween = null;
					if (onDone != null)
					{
						onDone();
					}
				});
			}
			else
			{
				_rate = _timer / duration;
				SetRadial(1f - _rate);
				if (onDone != null)
				{
					onDone();
				}
			}
		}

		private void OnDestroy()
		{
			if (_refillTween != null)
			{
				_refillTween.Kill();
			}
			if ((bool)_fillMaterial)
			{
				UnityEngine.Object.Destroy(_fillMaterial);
			}
		}

		public int GetEmojiState()
		{
			return (int)_state;
		}
	}
}
