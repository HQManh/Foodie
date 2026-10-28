using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Spine.Unity;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Customer : PoolingObject
	{
		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SpineAnimation(null, null, true, false, false)]
		[SerializeField]
		private string idleAnimName;

		[SpineAnimation(null, null, true, false, false)]
		[SerializeField]
		private string happyAnimName;

		[SpineAnimation(null, null, true, false, false)]
		[SerializeField]
		private string angryAnimName;

		[SerializeField]
		private float timeMove;

		[SerializeField]
		private bool isHaveWaitTime;

		[SerializeField]
		private OrderCircleCountDownTimer countDownTimer;

		[SerializeField]
		private SpriteCountdownTimer spriteCountdownTimer;

		private float waitTime;

		[CompilerGenerated]
		private Action<int> m_OnCustomerServiced;

		[CompilerGenerated]
		private Action<int> m_OnOrderWronged;

		[CompilerGenerated]
		private Action<int> m_OnMissedCustomer;

		public int TrackIndex { get; set; }

		[field: SerializeField]
		public List<Order> LstOrderOnCustomer { get; set; }

		public event Action<int> OnCustomerServiced
		{
			[CompilerGenerated]
			add
			{
				m_OnCustomerServiced = (Action<int>)Delegate.Combine(m_OnCustomerServiced, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnCustomerServiced = (Action<int>)Delegate.Remove(m_OnCustomerServiced, value);
			}
		}

		public event Action<int> OnOrderWronged
		{
			[CompilerGenerated]
			add
			{
				m_OnOrderWronged = (Action<int>)Delegate.Combine(m_OnOrderWronged, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnOrderWronged = (Action<int>)Delegate.Remove(m_OnOrderWronged, value);
			}
		}

		public event Action<int> OnMissedCustomer
		{
			[CompilerGenerated]
			add
			{
				m_OnMissedCustomer = (Action<int>)Delegate.Combine(m_OnMissedCustomer, value);
			}
			[CompilerGenerated]
			remove
			{
				m_OnMissedCustomer = (Action<int>)Delegate.Remove(m_OnMissedCustomer, value);
			}
		}

		private void Editor()
		{
			skeletonAnimation = GetComponent<SkeletonAnimation>();
			// TODO(unrecovered): the second pseudocode lookup (for spriteCountdownTimer) uses an unnamed component lookup whose variant (direct or child) is not recoverable from the stubs.
		}

		public override void OnSpawn()
		{
			// TODO(unrecovered): the pseudocode subscribes to SpriteCountdownTimer.OnTimeOut and to a countdown-timer delegate chain through unnamed helpers that are not in the stubs.
		}

		public void ShowOrderOnCustomer()
		{
			// TODO(unrecovered): the pseudocode builds an Order-list iteration with event subscriptions and Spine/tween calls; these helpers are not in the stubs.
		}

		public void SetUp(float waitTime = 60f)
		{
			// TODO(unrecovered): the pseudocode sets the wait time field and initialises SpriteCountdownTimer through a helper whose signature is not in the stubs.
		}

		public void ShowAnimHappy()
		{
			// TODO(unrecovered): the pseudocode spawns an EmojiControl through LevelControlCookOrder.SpawnEmojiControl and drives Spine TrackEntry callbacks; these are not in the stubs.
		}

		public void ShowAnimAngry()
		{
			// TODO(unrecovered): the pseudocode drives a Spine TrackEntry Complete callback through unnamed Spine helpers; these are not in the stubs.
		}

		public void MoveIn(Vector3 targetPos, Action onComplete = null)
		{
			// TODO(unrecovered): the pseudocode builds a DOTween DOMove tween with a TweenCallback; the tween helpers are not in the stubs.
		}

		public void MoveOut(Action onComplete = null)
		{
			// TODO(unrecovered): the pseudocode builds a DOTween DOMove tween with a TweenCallback; the tween helpers are not in the stubs.
		}

		public void MoveOut(Vector3 targetPos, Action onComplete = null)
		{
			// TODO(unrecovered): the pseudocode builds a DOTween DOMove tween with a TweenCallback; the tween helpers are not in the stubs.
		}

		public void OnDoneService()
		{
			// TODO(unrecovered): the pseudocode combines tween, event and Spine calls through unnamed helpers that are not in the stubs.
		}

		public void OnOrderWrong()
		{
			// TODO(unrecovered): the pseudocode calls Spine and event helpers that are not in the stubs.
		}

		public void OnResetOrder()
		{
			// TODO(unrecovered): the pseudocode iterates the order list through unnamed helpers and calls Spine helpers that are not in the stubs.
		}

		public override void Despawn()
		{
			// TODO(unrecovered): the pseudocode calls Spine and tween helpers that are not in the stubs.
		}
	}
}
