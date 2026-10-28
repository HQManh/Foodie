using System;
using System.Runtime.CompilerServices;
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
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action OnHalfBurntEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action OnBurntEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void Show(float targetSize = 1f, float cookDuration = 5f, float burntDuration = 5f, bool isCanBurnt = false)
		{
		}

		private void OnCooked()
		{
		}

		private void OnHalfBurnt()
		{
		}

		private void OnBurnt()
		{
		}

		public override void Despawn()
		{
		}

		public void Hide()
		{
		}

		public void Hide(Action onDoneAnim = null)
		{
		}

		public void PauseTween()
		{
		}

		public void UnPauseTween()
		{
		}
	}
}
