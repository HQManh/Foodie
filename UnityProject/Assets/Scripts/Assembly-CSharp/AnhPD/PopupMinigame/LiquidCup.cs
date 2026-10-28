using System;
using DG.Tweening;
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
		private float continuousMaxSpeed = 1f;

		[SerializeField]
		private AnimationCurve acceleration;

		[SerializeField]
		private LiquidIceFloating iceFloating;

		[SerializeField]
		private float tolerance = 0.1f;

		[SerializeField]
		private int startWaveIndex = 2;

		[SerializeField]
		private float perfectAmount = 0.9f;

		private float _amount;

		public Action onOverflow;

		private State _state;

		private float _continuousSpeed;

		private float _accelTimer;

		public void OnPouring(float rate)
		{
			_accelTimer += Time.unscaledDeltaTime;
			float randomFactor = UnityEngine.Random.Range(0.8f, 1.2f);
			float curve = acceleration.Evaluate(_accelTimer);
			_continuousSpeed += continuousMaxSpeed * randomFactor * curve;
			_amount += _continuousSpeed * Time.unscaledDeltaTime;
			UpdateLiquid();
			if (_amount > 1f)
			{
				HandleOverflow();
			}
		}

		private void UpdateLiquid()
		{
			if (liquidImage != null)
			{
				liquidImage.fillAmount = _amount;
				if (iceFloating != null)
				{
					iceFloating.SetRate(_amount);
					if (wave != null)
					{
						// Equivalent to the pseudocode: sets watering, dampening, and splashes at startWaveIndex with speed 0.3.
						wave.OnWatering(1f, startWaveIndex);
						wave.transform.position = CalculateTopFillPos();
					}
				}
			}
		}

		public bool IsOverFlowed()
		{
			return _amount > 1f;
		}

		private void HandleOverflow()
		{
			if (onOverflow != null)
			{
				onOverflow();
			}
			_amount = 1f;
			UpdateLiquid();
			_state = State.Overflow;
			if (overflow != null)
			{
				overflow.SetActive(true);
			}
		}

		private Vector3 CalculateTopFillPos()
		{
			if (liquidImage == null)
			{
				return default;
			}
			RectTransform rt = liquidImage.rectTransform;
			Rect r = rt.rect;
			float y = r.height * liquidImage.fillAmount - r.height * 0.5f;
			return rt.TransformPoint(new Vector3(0f, y, 0f));
		}

		public void StopPouring()
		{
			_continuousSpeed = 0f;
			_accelTimer = 0f;
			if (wave != null)
			{
				wave.StopWatering();
			}
		}

		public State GetState()
		{
			float tol = tolerance;
			float diff = Mathf.Abs(_amount - perfectAmount);
			if (diff <= tol)
			{
				_state = State.Done;
			}
			if (diff <= tol / 5f)
			{
				_state = State.Perfect;
			}
			if (_amount - perfectAmount <= tol)
			{
				return _state;
			}
			_state = State.Overflow;
			return State.Overflow;
		}

		private float GetAccuracyScore(float userValue, float correctValue = 0.9f)
		{
			// The compiled body reads the perfectAmount field as the target value; correctValue is not used.
			float correct = perfectAmount;
			if (Mathf.Abs(userValue - correct) < 0.005f)
			{
				return 100f;
			}
			float denom = correct;
			if (correct <= 1f - correct)
			{
				denom = 1f - correct;
			}
			float score = 1f - Mathf.Abs(userValue - correct) / denom;
			return Mathf.Clamp01(score) * 100f;
		}

		public void OnComplete()
		{
		}

		public void Restart(Action action = null)
		{
			if (overflow == null)
			{
				return;
			}
			float startX = transform.position.x;
			overflow.SetActive(false);
			transform.DOMoveX(startX - 10f, 0.5f).SetEase(Ease.Linear).OnComplete(() =>
			{
				_amount = 0f;
				if (liquidImage != null)
				{
					liquidImage.fillAmount = 0f;
					if (wave != null)
					{
						wave.transform.position = CalculateTopFillPos();
						_state = State.None;
						if (iceFloating != null)
						{
							iceFloating.Restart();
						}
					}
				}
			});
			transform.DOMoveX(startX, 0.5f).SetDelay(0.5f).SetEase(Ease.Linear).OnComplete(() =>
			{
				if (action != null)
				{
					action();
				}
			});
		}

		public void ForceRestart()
		{
			if (overflow == null)
			{
				return;
			}
			overflow.SetActive(false);
			_amount = 0f;
			if (liquidImage == null)
			{
				return;
			}
			liquidImage.fillAmount = 0f;
			if (wave == null)
			{
				return;
			}
			wave.transform.position = CalculateTopFillPos();
			wave.StopWatering();
			wave.Reset();
			_state = State.None;
			UpdateLiquid();
			if (iceFloating != null)
			{
				iceFloating.Restart();
			}
		}
	}
}
