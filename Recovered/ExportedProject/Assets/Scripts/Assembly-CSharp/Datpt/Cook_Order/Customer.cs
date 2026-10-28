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
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<int> OnOrderWronged
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

		public event Action<int> OnMissedCustomer
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

		private void Editor()
		{
		}

		public override void OnSpawn()
		{
		}

		public void ShowOrderOnCustomer()
		{
		}

		public void SetUp(float waitTime = 60f)
		{
		}

		public void ShowAnimHappy()
		{
		}

		public void ShowAnimAngry()
		{
		}

		public void MoveIn(Vector3 targetPos, Action onComplete = null)
		{
		}

		public void MoveOut(Action onComplete = null)
		{
		}

		public void MoveOut(Vector3 targetPos, Action onComplete = null)
		{
		}

		public void OnDoneService()
		{
		}

		public void OnOrderWrong()
		{
		}

		public void OnResetOrder()
		{
		}

		public override void Despawn()
		{
		}
	}
}
