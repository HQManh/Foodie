using System;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.PopupMinigame
{
	public class LiquidCup : MonoBehaviour
	{
		public enum State
		{
			None = 0,
			Done = 1,
			Perfect = 2,
			Overflow = 3
		}

		[SerializeField]
		private Image liquidImage;

		[SerializeField]
		private LiquidWave wave;

		[SerializeField]
		private GameObject overflow;

		[SerializeField]
		private float continuousMaxSpeed;

		[SerializeField]
		private AnimationCurve acceleration;

		[SerializeField]
		private LiquidIceFloating iceFloating;

		[SerializeField]
		private float tolerance;

		[SerializeField]
		private int startWaveIndex;

		[SerializeField]
		private float perfectAmount;

		private float _amount;

		public Action onOverflow;

		private State _state;

		private float _continuousSpeed;

		private float _accelTimer;

		public void OnPouring(float rate)
		{
		}

		private void UpdateLiquid()
		{
		}

		public void StopPouring()
		{
		}

		private Vector3 CalculateTopFillPos()
		{
			return default;
		}

		public State GetState()
		{
			return State.None;
		}

		private float GetAccuracyScore(float userValue, float correctValue = 0.9f)
		{
			return 0f;
		}

		public bool IsOverFlowed()
		{
			return false;
		}

		private void HandleOverflow()
		{
		}

		public void OnComplete()
		{
		}

		public void Restart(Action action = null)
		{
		}

		public void ForceRestart()
		{
		}
	}
}
