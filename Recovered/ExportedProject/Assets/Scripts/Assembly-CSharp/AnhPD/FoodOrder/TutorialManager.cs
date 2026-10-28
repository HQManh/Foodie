using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EssentialSystemR1;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialManager : MonoSingleton<TutorialManager>
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CPlay_003Ed__23 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public TutorialManager _003C_003E4__this;

			public TutorialSequenceSO sequence;

			public Action onDone;

			public TutorialPause pause;

			private List<TutorialStep>.Enumerator _003C_003E7__wrap1;

			private TutorialStep _003Cstep_003E5__3;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		public static bool Enabled;

		[SerializeField]
		private TutorialSequenceSO[] sequences;

		[Header("Tut theo khach (lan dau loai khach do hien order)")]
		[SerializeField]
		private string shipperTutId;

		[SerializeField]
		private string bossTutId;

		[Header("Tut booster PickUp (lan dau camera ha xuong)")]
		[SerializeField]
		private string pickUpTutId;

		[Header("View")]
		[SerializeField]
		private TutorialFocusCanvasView focusView;

		[SerializeField]
		private TutorialTalkView talkView;

		[SerializeField]
		private TutorialHandleTap handTap;

		private TutorialContext _context;

		private bool _isRunning;

		private TutorialPause _pause;

		private const int TutBlockId = 1009;

		private FCustomerLineHandle _timerHoldHandle;

		public bool IsRunning => false;

		private bool HoldsNewActions => false;

		protected override void Awake()
		{
		}

		private void OnEnable()
		{
		}

		private void OnDisable()
		{
		}

		public bool HasLevelTutorial(string tutId)
		{
			return false;
		}

		public bool TryPlayLevelTutorial(string tutId, Action onDone)
		{
			return false;
		}

		private void OnOrderShown(OrderShownEvent evt)
		{
		}

		private void TryPlayCustomerTut(FCustomerLine line, CakeOrderTutorialStateControl.TutType type, string tutId)
		{
		}

		private void OnPickAnyReady(PickAnyReadyEvent _)
		{
		}

		private static TutorialTargetRef FindFirstTarget(TutorialSequenceSO sequence, TutorialTargetKind kind)
		{
			return null;
		}

		private bool TryPlayEventTut(CakeOrderTutorialStateControl.TutType type, string tutId, TutorialPause pause)
		{
			return false;
		}

		private TutorialSequenceSO FindSequence(string tutId)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CPlay_003Ed__23))]
		public UniTask Play(TutorialSequenceSO sequence, Action onDone, TutorialPause pause = TutorialPause.None)
		{
			return default;
		}

		private void Begin()
		{
		}

		private void ReleasePause()
		{
		}

		private void HoldCustomerTimers()
		{
		}

		private void ReleaseCustomerTimers()
		{
		}

		private void SetNewActionsHeld(bool held)
		{
		}

		private void End()
		{
		}

		private void ApplyStep(TutorialStep step)
		{
		}

		protected override void OnDestroy()
		{
		}
	}
}
