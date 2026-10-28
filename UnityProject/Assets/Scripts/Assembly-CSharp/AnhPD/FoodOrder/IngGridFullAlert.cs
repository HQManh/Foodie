using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngGridFullAlert
	{
		private readonly SpriteRenderer _alert;

		private readonly float _duration;

		private readonly float _blinkPeriod;

		private readonly float _minAlpha;

		private readonly Action _onTimeout;

		private bool _blinking;

		private bool _counting;

		private bool _fired;

		private float _remaining;

		private float _blinkTime;

		private float _pulseRemaining;

		private float _pulseDuration;

		public bool IsCounting => _counting;

		public bool HasFired => _fired;

		public bool IsBlinking => _blinking;

		public float BlinkPhase { get; private set; }

		public IngGridFullAlert(SpriteRenderer alert, float duration, float blinkPeriod, float minAlpha, Action onTimeout)
		{
			_alert = alert;
			_onTimeout = onTimeout;
			_duration = Mathf.Max(0.01f, duration);
			_blinkPeriod = Mathf.Max(0.05f, blinkPeriod);
			_minAlpha = Mathf.Clamp01(minAlpha);
			Hide();
		}

		public void Tick(bool warn, bool full)
		{
			if (!_alert)
			{
				return;
			}
			if (!full)
			{
				_counting = false;
				_fired = false;
			}
			if (!warn || _fired)
			{
				if (_blinking)
				{
					_blinking = false;
					Hide();
				}
				TickPulse();
				return;
			}
			if (!_blinking)
			{
				_blinkTime = 0f;
				_blinking = true;
				_alert.gameObject.SetActive(value: true);
			}
			if (full)
			{
				if (!_counting)
				{
					_counting = true;
					_remaining = _duration;
				}
				_remaining -= Time.deltaTime;
				if (_remaining <= 0f)
				{
					_blinking = false;
					_counting = false;
					_fired = true;
					Hide();
					_onTimeout?.Invoke();
					return;
				}
			}
			Blink();
		}

		public void Reset()
		{
			_blinking = false;
			_counting = false;
			_fired = false;
			_pulseRemaining = 0f;
			Hide();
		}

		public void PulseOnce(float duration)
		{
			if ((bool)_alert && duration > 0f && !_blinking)
			{
				_pulseRemaining = duration;
				_pulseDuration = duration;
				_alert.gameObject.SetActive(value: true);
			}
		}

		private void TickPulse()
		{
			if (_pulseRemaining > 0f)
			{
				_pulseRemaining -= Time.deltaTime;
				if (_pulseRemaining > 0f)
				{
					Color color = _alert.color;
					color.a = Mathf.Clamp01(_pulseRemaining / _pulseDuration); // alpha mapping recovered by guess
					_alert.color = color;
					return;
				}
			}
			Hide();
		}

		private void Blink()
		{
			_blinkTime += Time.deltaTime;
			Color color = _alert.color;
			float num = Mathf.PingPong(_blinkTime * 2f / _blinkPeriod, 1f);
			color.a = Mathf.Lerp(_minAlpha, 1f, num); // alpha mapping recovered by guess
			_alert.color = color;
			BlinkPhase = num;
		}

		private void Hide()
		{
			BlinkPhase = 0f;
			if ((bool)_alert)
			{
				Color color = _alert.color;
				color.a = 0f;
				_alert.color = color;
				_alert.gameObject.SetActive(value: false);
			}
		}
	}
}
