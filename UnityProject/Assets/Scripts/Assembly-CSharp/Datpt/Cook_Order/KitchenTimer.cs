using System;
using System.Runtime.CompilerServices;
using System.Threading;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Datpt.Cook_Order
{
	public class KitchenTimer : PoolingObject
	{
		[SerializeField]
		private Image cookTimerImage;

		[SerializeField]
		private Image burntTimerImage;

		[SerializeField]
		private Transform clockwise;

		[SerializeField]
		private AudioSource sfxClock;

		[SerializeField]
		private GameObject fire;

		private bool isCanBurnt;

		private float _burntDuration;

		private Sequence _seq;

		private Tween _smokeTween;

		public UnityEvent onCooked;

		public UnityEvent onHalfBurnt;

		public UnityEvent onBurnt;

		[CompilerGenerated]
		private Action m_OnCookedEvent;

		[CompilerGenerated]
		private Action m_OnHalfBurntEvent;

		[CompilerGenerated]
		private Action m_OnBurntEvent;

		public event Action OnCookedEvent
		{
			[CompilerGenerated]
			add
			{
				Action action = m_OnCookedEvent;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnCookedEvent, (Action)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action action = m_OnCookedEvent;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnCookedEvent, (Action)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		public event Action OnHalfBurntEvent
		{
			[CompilerGenerated]
			add
			{
				Action action = m_OnHalfBurntEvent;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnHalfBurntEvent, (Action)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action action = m_OnHalfBurntEvent;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnHalfBurntEvent, (Action)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		public event Action OnBurntEvent
		{
			[CompilerGenerated]
			add
			{
				Action action = m_OnBurntEvent;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnBurntEvent, (Action)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action action = m_OnBurntEvent;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnBurntEvent, (Action)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		public void Show(float targetSize = 1f, float cookDuration = 5f, float burntDuration = 5f, bool isCanBurnt = false)
		{
			if (_seq != null)
			{
				_seq.Kill();
			}
			_seq = DOTween.Sequence();
			_burntDuration = burntDuration;
			this.isCanBurnt = isCanBurnt;
			if (cookTimerImage != null)
			{
				cookTimerImage.fillAmount = 0f;
				if (burntTimerImage != null)
				{
					burntTimerImage.fillAmount = 0f;
					// TODO(unrecovered): transform.localScale is set from a static Vector3 (DAT_0918cbd0 +0xb8) and a 0.3s DOScale(base * targetSize) is appended; that static is not in the stubs.
					if (clockwise != null)
					{
						Tween spin = clockwise.DOLocalRotate(clockwise.localEulerAngles, 1f).SetEase(Ease.Linear).OnStart(delegate
						{
							if (sfxClock != null)
							{
								sfxClock.Play();
							}
						}).OnComplete(OnCooked);
						_seq.Append(spin);
						_seq.Join(cookTimerImage.DOFillAmount(1f, cookDuration).SetEase(Ease.Linear));
						Tween spin2 = clockwise.DOLocalRotate(clockwise.localEulerAngles, 1f).SetEase(Ease.Linear);
						_seq.Append(spin2);
						if (!isCanBurnt)
						{
							_seq.OnComplete(() => Hide());
						}
						else
						{
							_seq.Join(burntTimerImage.DOFillAmount(1f, burntDuration).SetEase(Ease.Linear));
							_seq.InsertCallback(burntDuration * 0.5f + cookDuration, OnHalfBurnt);
							_seq.OnComplete(OnBurnt);
						}
					}
				}
			}
		}

		private void OnCooked()
		{
			if (onCooked != null)
			{
				onCooked.Invoke();
			}
			m_OnCookedEvent?.Invoke();
			if (fire != null)
			{
				fire.SetActive(true);
				if (isCanBurnt)
				{
					return;
				}
				Hide();
			}
		}

		private void OnHalfBurnt()
		{
			if (onHalfBurnt != null)
			{
				onHalfBurnt.Invoke();
			}
			m_OnHalfBurntEvent?.Invoke();
		}

		private void OnBurnt()
		{
			if (onBurnt != null)
			{
				onBurnt.Invoke();
			}
			m_OnBurntEvent?.Invoke();
			Hide();
		}

		public override void Despawn()
		{
			m_OnCookedEvent = null;
			m_OnHalfBurntEvent = null;
			m_OnBurntEvent = null;
			onCooked = null;
			onHalfBurnt = null;
			onBurnt = null;
			Hide(() => base.Despawn());
		}

		public void Hide()
		{
			if (sfxClock != null)
			{
				sfxClock.Stop();
				_seq.Kill();
				_smokeTween.Kill();
				if (fire != null)
				{
					fire.SetActive(false);
					transform.DOScale(0f, 0.3f);
				}
			}
		}

		public void Hide(Action onDoneAnim = null)
		{
			if (sfxClock != null)
			{
				sfxClock.Stop();
				_seq.Kill();
				_smokeTween.Kill();
				if (fire != null)
				{
					fire.SetActive(false);
					transform.DOScale(0f, 0.3f).OnComplete(delegate
					{
						if (onDoneAnim != null)
						{
							onDoneAnim();
						}
					});
				}
			}
		}

		public void PauseTween()
		{
			if (_seq != null && _seq.IsActive() && _seq.IsPlaying())
			{
				_seq.Pause();
			}
			if (_smokeTween != null && _smokeTween.IsActive() && _smokeTween.IsPlaying())
			{
				_smokeTween.Pause();
			}
			if (sfxClock != null)
			{
				sfxClock.Pause();
			}
		}

		public void UnPauseTween()
		{
			if (_seq != null && _seq.IsActive() && !_seq.IsPlaying() && !_seq.IsComplete())
			{
				_seq.Play();
			}
			if (_smokeTween != null && _smokeTween.IsActive() && !_smokeTween.IsPlaying() && !_smokeTween.IsComplete())
			{
				_smokeTween.Play();
			}
			if (sfxClock != null)
			{
				sfxClock.Play();
			}
		}
	}
}
