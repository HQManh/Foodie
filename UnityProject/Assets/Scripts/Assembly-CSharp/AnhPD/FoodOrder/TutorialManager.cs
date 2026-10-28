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
				// TODO(unrecovered): the state machine body relies on UniTask awaiter dispatch (FUN_03f95da8),
				// a closure type not in the stubs, and TutorialStep/TutorialContext calls not recovered here.
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

		// TODO(unrecovered): the ctor sets shipperTutId, bossTutId and pickUpTutId from string literals that were
		// only available as unresolved DAT refs, and the stub declares no constructor to hold them.
		public static bool Enabled = true;

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

		public bool IsRunning => _isRunning;

		private bool HoldsNewActions => _pause != TutorialPause.None;

		protected override void Awake()
		{
			base.Awake();
			_context = new TutorialContext(focusView, talkView, handTap);
		}

		private void OnEnable()
		{
			// TODO(unrecovered): event subscription helpers (FUN_070a9190 / FUN_04b7a4a4 bus calls) are not in the stubs; bus type and handler wiring unknown
		}

		private void OnDisable()
		{
			// TODO(unrecovered): event unsubscription helpers (FUN_070a9190 / FUN_04b7b954 bus calls) are not in the stubs; bus type and handler wiring unknown
		}

		public bool HasLevelTutorial(string tutId)
		{
			if (!Enabled || string.IsNullOrEmpty(tutId))
			{
				return false;
			}
			TutorialSequenceSO seq = FindSequence(tutId);
			if (seq == null)
			{
				return false;
			}
			return seq.steps != null && seq.steps.Count > 0;
		}

		public bool TryPlayLevelTutorial(string tutId, Action onDone)
		{
			if (_isRunning || !HasLevelTutorial(tutId))
			{
				return false;
			}
			TutorialSequenceSO seq = FindSequence(tutId);
			Play(seq, () => onDone?.Invoke(), TutorialPause.None).Forget();
			return true;
		}

		private void OnOrderShown(OrderShownEvent evt)
		{
			// TODO(unrecovered): decompile treats the event argument as FCustomerLine (SpawnData lookup); event-to-line field mapping unknown
		}

		private void TryPlayCustomerTut(FCustomerLine line, CakeOrderTutorialStateControl.TutType type, string tutId)
		{
		}

		private void OnPickAnyReady(PickAnyReadyEvent _)
		{
			if (!Enabled || _isRunning)
			{
				return;
			}
			TutorialSequenceSO sequence = FindSequence(pickUpTutId);
			TutorialTargetRef target = FindFirstTarget(sequence, (TutorialTargetKind)6);
			if (target != null)
			{
				IngredientConveyorItem belt = TutorialTargetResolver.FindBeltItemBehindFront(target.id);
				if (belt != null)
				{
					TryPlayEventTut((CakeOrderTutorialStateControl.TutType)3, pickUpTutId, TutorialPause.StopTime);
				}
			}
		}

		private static TutorialTargetRef FindFirstTarget(TutorialSequenceSO sequence, TutorialTargetKind kind)
		{
			if (sequence == null)
			{
				return null;
			}
			foreach (TutorialStep step in sequence.steps)
			{
				if (step != null && step.target != null && step.target.kind == kind)
				{
					return step.target;
				}
			}
			return null;
		}

		private bool TryPlayEventTut(CakeOrderTutorialStateControl.TutType type, string tutId, TutorialPause pause)
		{
			// TODO(unrecovered): calls CakeOrderTutorialStateControl.IsShownTut / SetDoneTut and UniTask.Forget;
			// CakeOrderTutorialStateControl is referenced by the stub but not defined in the project.
			return false;
		}

		private TutorialSequenceSO FindSequence(string tutId)
		{
			if (sequences == null)
			{
				return null;
			}
			foreach (TutorialSequenceSO s in sequences)
			{
				if (s == null)
				{
					continue;
				}
				if (string.IsNullOrEmpty(tutId))
				{
					return s;
				}
				if (s.tutId == tutId)
				{
					return s;
				}
			}
			return null;
		}

		[AsyncStateMachine(typeof(_003CPlay_003Ed__23))]
		public UniTask Play(TutorialSequenceSO sequence, Action onDone, TutorialPause pause = TutorialPause.None)
		{
			// TODO(unrecovered): async body lives in <Play>d__23.MoveNext, which is outside this batch part
			return default;
		}

		private void Begin()
		{
			// TODO(unrecovered): pseudocode first sets a static flag on an unidentified class, and the StopTime branch
			// calls CakeOrder TimeControlCakeOrder.StopTime, which is not in the stubs. Those parts are omitted.
			if (_pause == TutorialPause.HoldTimers)
			{
				HoldCustomerTimers();
			}
			if (_pause != TutorialPause.None)
			{
				SetNewActionsHeld(true);
			}
			gameObject.SetActive(true);
		}

		private void ReleasePause()
		{
			if (_pause != TutorialPause.None)
			{
				SetNewActionsHeld(false);
				if (_pause == TutorialPause.StopTime)
				{
					// TODO(unrecovered): TimeControlCakeOrder.ResumeTime is not in the stubs.
				}
				else if (_pause == TutorialPause.HoldTimers)
				{
					ReleaseCustomerTimers();
				}
			}
			_pause = TutorialPause.None;
		}

		private void HoldCustomerTimers()
		{
			if (!_timerHoldHandle)
			{
				_timerHoldHandle = MessyController.Ins != null ? MessyController.Ins.LineHandle : null;
			}
			if (_timerHoldHandle)
			{
				_timerHoldHandle.HoldTimers();
			}
		}

		private void ReleaseCustomerTimers()
		{
			if (_timerHoldHandle)
			{
				_timerHoldHandle.ReleaseTimers();
			}
			_timerHoldHandle = null;
		}

		private void SetNewActionsHeld(bool held)
		{
			// TODO(unrecovered): resolves the target station through an unidentified singleton chain and calls
			// Utilities.BoolModifierWithRegisteredSource (not in the stubs).
		}

		private void End()
		{
			TutorialGate.Free();
			ReleasePause();
			if (handTap)
			{
				handTap.Hide();
			}
			if (talkView)
			{
				talkView.HideImmediate();
			}
			if (focusView)
			{
				focusView.Clear(0.2f, true);
			}
			if (_context != null)
			{
				_context.TriggerLine = null;
			}
		}

		private void ApplyStep(TutorialStep step)
		{
			// TODO(unrecovered): focus/target resolution (TutorialTargetResolver.Resolve, focus rect and
			// TutorialFocusCanvasView.Focus overloads) is not recovered reliably; omitted.
		}

		protected override void OnDestroy()
		{
			if (_isRunning)
			{
				TutorialGate.Free();
				ReleasePause();
			}
			base.OnDestroy();
		}
	}
}
