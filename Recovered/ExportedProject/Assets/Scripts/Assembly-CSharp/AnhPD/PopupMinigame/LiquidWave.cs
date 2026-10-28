using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class LiquidWave : MonoBehaviour
	{
		[SerializeField]
		private float springStiffness;

		[SerializeField]
		private float dampeningMin;

		[SerializeField]
		private float dampeningMax;

		[SerializeField]
		private float springSpeed;

		[SerializeField]
		private List<LiquidWaveSpring> springs;

		private float _dampening;

		public float spread;

		private float _fixedAccumulator;

		private bool _isWatering;

		private float _cooldown;

		private void Test()
		{
		}

		private void UpdateSprings()
		{
		}

		private void StepSprings()
		{
		}

		private void Splash(int index, float speed)
		{
		}

		public void OnWatering(float rate, int posIndex = 2)
		{
		}

		public void StopWatering()
		{
		}

		private void Update()
		{
		}

		private void SetSpringSpeed()
		{
		}

		public void Reset()
		{
		}
	}
}
