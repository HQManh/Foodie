using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class LiquidWave : MonoBehaviour
	{
		[SerializeField]
		private float springStiffness = 0.1f;

		[SerializeField]
		private float dampeningMin = 0.1f;

		[SerializeField]
		private float dampeningMax = 0.3f;

		[SerializeField]
		private float springSpeed = 10f;

		[SerializeField]
		private List<LiquidWaveSpring> springs = new List<LiquidWaveSpring>();

		private float _dampening;

		public float spread = 0.01f;

		private float _fixedAccumulator;

		private bool _isWatering;

		private float _cooldown;

		private void Test()
		{
			Splash(2, 0.5f);
		}

		private void UpdateSprings()
		{
			if (springs == null)
			{
				return;
			}
			int n = springs.Count;
			for (int i = 0; i < n; i++)
			{
				if (i != 0)
				{
					float left = spread * (springs[i].height - springs[i - 1].height);
					springs[i - 1].velocity += left;
				}
				if (i < n - 1)
				{
					float right = spread * (springs[i].height - springs[i + 1].height);
					springs[i + 1].velocity += right;
				}
			}
		}

		private void StepSprings()
		{
			float fixedDelta = Time.fixedDeltaTime;
			float acc = _fixedAccumulator + Time.unscaledDeltaTime;
			if (fixedDelta * 5f <= acc)
			{
				acc = fixedDelta * 5f;
			}
			_fixedAccumulator = acc;
			while (fixedDelta <= acc)
			{
				_fixedAccumulator = acc - fixedDelta;
				if (springs != null)
				{
					foreach (LiquidWaveSpring spring in springs)
					{
						spring.SpringUpdate(springStiffness, _dampening, fixedDelta);
					}
				}
				UpdateSprings();
				acc = _fixedAccumulator;
			}
		}

		private void Splash(int index, float speed)
		{
			if (index >= 0 && springs != null && index < springs.Count)
			{
				springs[index].velocity += speed;
			}
		}

		public void OnWatering(float rate, int posIndex = 2)
		{
			_isWatering = true;
			_dampening = dampeningMin;
			Splash(posIndex, rate * 0.3f);
		}

		public void StopWatering()
		{
			_isWatering = false;
			_dampening = dampeningMax;
		}

		private void Update()
		{
			StepSprings();
			_cooldown -= Time.unscaledDeltaTime;
			if (_isWatering && _cooldown < 0f)
			{
				_cooldown = 0.2f;
				if (springs != null && springs.Count > 4)
				{
					springs[4].FlipY();
				}
			}
		}

		private void SetSpringSpeed()
		{
			if (springs == null)
			{
				return;
			}
			foreach (LiquidWaveSpring spring in springs)
			{
				spring.speed = springSpeed;
			}
		}

		public void Reset()
		{
			if (springs == null)
			{
				return;
			}
			foreach (LiquidWaveSpring spring in springs)
			{
				spring.Reset();
			}
		}
	}
}
