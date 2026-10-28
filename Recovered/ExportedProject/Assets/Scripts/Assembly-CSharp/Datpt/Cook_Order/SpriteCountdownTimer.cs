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
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action OnTimeOut
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

		private void Awake()
		{
		}

		public void Init(float duration)
		{
		}

		private void OnAppear(Action onAppeared = null)
		{
		}

		public void StartWaiting()
		{
		}

		public void StopWaiting()
		{
		}

		private void Update()
		{
		}

		public void AddTime(float time)
		{
		}

		public void AddTimeByPercent(float percent)
		{
		}

		public void UpdateVisual()
		{
		}

		public void TimeOut()
		{
		}

		public void Hidden(Action onComplete = null)
		{
		}
	}
}
