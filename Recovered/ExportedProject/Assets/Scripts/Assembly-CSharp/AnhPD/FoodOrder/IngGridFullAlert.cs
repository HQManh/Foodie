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

		public bool IsCounting => false;

		public bool HasFired => false;

		public bool IsBlinking => false;

		public float BlinkPhase { get; private set; }

		public IngGridFullAlert(SpriteRenderer alert, float duration, float blinkPeriod, float minAlpha, Action onTimeout)
		{
		}

		public void Tick(bool warn, bool full)
		{
		}

		public void Reset()
		{
		}

		public void PulseOnce(float duration)
		{
		}

		private void TickPulse()
		{
		}

		private void Blink()
		{
		}

		private void Hide()
		{
		}
	}
}
