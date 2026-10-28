using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class OrderCircleCountDownTimer : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spriteRenderer;

		[SerializeField]
		private Transform timeOut;

		[SerializeField]
		private float duration = 10f;

		public Action OnTimeout;

		public Action OnTimeOutComplete;

		private float _timer;

		private Material _material;

		private bool _isWaiting;

		private float _rate;

		public bool IsSatisfied => duration <= 0f || _timer < duration;

		[field: SerializeField]
		public bool IsInUsed { get; set; }

		private void Awake()
		{
			if (spriteRenderer != null)
			{
				_material = spriteRenderer.material;
			}
		}

		public void Init(float duration)
		{
			if (!IsInUsed)
			{
				return;
			}
			_timer = 0f;
			this.duration = duration;
			if (timeOut != null)
			{
				// TODO(unrecovered): timeOut.localScale is set from the static Vector3 at DAT_0918cbd0->0xb8 (owning class not in stubs).
				UpdateDisplay();
				gameObject.SetActive(true);
			}
		}

		public void StartWaiting()
		{
			if (0f < duration && IsInUsed)
			{
				_isWaiting = true;
				UpdateDisplay();
			}
		}

		public void StopWaiting()
		{
			_isWaiting = false;
		}

		private void Update()
		{
			if (_isWaiting && 0f <= duration)
			{
				_timer += Time.deltaTime;
				UpdateDisplay();
				if (duration <= _timer)
				{
					_isWaiting = false;
					TimeOut();
				}
			}
		}

		private void TimeOut()
		{
			if (IsInUsed)
			{
				OnTimeout?.Invoke();
				// TODO(unrecovered): timeOut.DOScale(1f, 0.3f) with an ease constant (0x1c) and a tween callback that invokes OnTimeOutComplete and rescales timeOut to 0 over 0.2s; DOTween helpers are not in stubs.
			}
		}

		private void UpdateDisplay()
		{
			if (_material == null)
			{
				if (spriteRenderer == null)
				{
					return;
				}
				_material = spriteRenderer.material;
			}
			if (_material != null)
			{
				float progress = 1f - _timer / duration;
				_material.SetFloat("_FillAmount" /* decoded from the metadata */, progress);
				float clamped = Mathf.Clamp01(progress);
				_material.SetColor("_Color" /* literal recovered by guess */, new Color(1f - clamped, clamped, 0f, 1f));
			}
		}

		public void PlusTime(float time)
		{
			if (IsInUsed)
			{
				_timer += time;
				UpdateDisplay();
			}
		}

		public void PlusTimeByPercent(float percent)
		{
			if (IsInUsed)
			{
				_timer -= duration * percent;
				UpdateDisplay();
			}
		}
	}
}
