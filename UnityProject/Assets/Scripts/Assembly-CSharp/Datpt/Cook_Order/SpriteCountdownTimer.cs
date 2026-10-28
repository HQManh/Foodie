using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	[RequireComponent(typeof(SpriteProgressBar))]
	public class SpriteCountdownTimer : MonoBehaviour
	{
		private float timer;

		private SpriteProgressBar spriteProgressBar;

		private bool isWaiting;

		private Vector3 defaultScale;

		[CompilerGenerated]
		private Action m_OnHalfTime;

		[CompilerGenerated]
		private Action m_OnTimeOut;

		[field: SerializeField]
		public float duration { get; set; }

		[field: SerializeField]
		public bool IsInUsed { get; set; }

		public event Action OnHalfTime
		{
			[CompilerGenerated]
			add
			{
				m_OnHalfTime = (Action)Delegate.Combine(m_OnHalfTime, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnHalfTime = (Action)Delegate.Remove(m_OnHalfTime, value);
			}
		}

		public event Action OnTimeOut
		{
			[CompilerGenerated]
			add
			{
				m_OnTimeOut = (Action)Delegate.Combine(m_OnTimeOut, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnTimeOut = (Action)Delegate.Remove(m_OnTimeOut, value);
			}
		}

		private void Awake()
		{
			spriteProgressBar = GetComponent<SpriteProgressBar>();
			defaultScale = transform.localScale;
		}

		public void Init(float duration)
		{
			if (IsInUsed)
			{
				this.duration = duration;
				timer = 0f;
				UpdateVisual();
				OnAppear();
			}
		}

		private void OnAppear(Action onAppeared = null)
		{
			if (gameObject != null)
			{
				gameObject.SetActive(true);
				// TODO(unrecovered): DOScale tween to the static Vector3 at DAT_0918cbd0->0xb8 with ease 0x1b, then invokes onAppeared; DOTween and the static owner are not in stubs.
				return;
			}
		}

		public void StartWaiting()
		{
			if (0f < duration && IsInUsed)
			{
				isWaiting = true;
				UpdateVisual();
			}
		}

		public void StopWaiting()
		{
			isWaiting = false;
		}

		private void Update()
		{
			if (isWaiting && 0f <= duration && IsInUsed)
			{
				timer += Time.deltaTime;
				UpdateVisual();
			}
		}

		public void AddTime(float time)
		{
			timer = Mathf.Clamp(timer + time, 0f, duration);
			UpdateVisual();
			// TODO(unrecovered): DOPunchScale tween on transform with a callback that resets localScale to defaultScale; DOTween helpers are not in stubs.
		}

		public void AddTimeByPercent(float percent)
		{
			timer = Mathf.Clamp(timer + duration * percent, 0f, duration);
			UpdateVisual();
		}

		public void UpdateVisual()
		{
			spriteProgressBar.SetProgress(1f - timer / duration);
			if (timer < duration)
			{
				return;
			}
			isWaiting = false;
			TimeOut();
		}

		public void TimeOut()
		{
			if (IsInUsed)
			{
				m_OnTimeOut?.Invoke();
				Hidden();
			}
		}

		public void Hidden(Action onComplete = null)
		{
			// TODO(unrecovered): DOScale tween to the static Vector3 at DAT_0918cbd0->0xb8 with ease 0x1c and a callback that invokes onComplete; DOTween and the static owner are not in stubs.
		}
	}
}
