using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class TutorialContext
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass16_0
		{
			public bool done;

			internal bool _003CWaitOrderTap_003Eb__1()
			{
				return done;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass19_0
		{
			public Func<IngredientConveyorItem, bool> matches;

			public bool done;

			public bool untilPickAnyEnds;

			public IngredientSpawnerController spawner;

			internal bool _003CWaitIngredientTap_003Eb__1()
			{
				if (!done)
				{
					if (!untilPickAnyEnds)
					{
						return false;
					}
					if (spawner != null)
					{
						return !spawner.IsPickAnyActive;
					}
				}
				return true;
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CPrepareTarget_003Ed__14 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public TutorialTargetRef target;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				// TODO(unrecovered): UniTask.WaitUntil awaiter chain and the closure display class (<>c__DisplayClass14_0) are not in the stubs
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CWaitIngredientTap_003Ed__19 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public Func<IngredientConveyorItem, bool> matches;

			public bool untilPickAnyEnds;

			public TutorialContext _003C_003E4__this;

			private _003C_003Ec__DisplayClass19_0 _003C_003E8__1;

			private ConveyorPickup _003Cpickup_003E5__2;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				// TODO(unrecovered): awaits spawner pick events via Delegate.Combine on a spawner field and a <WaitIngredientTap>g__OnPicked handler that is not in the stubs
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CWaitOrderTap_003Ed__16 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			private _003C_003Ec__DisplayClass16_0 _003C_003E8__1;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				// TODO(unrecovered): awaits a tap event via a <WaitOrderTap>g__OnTapped handler and a UniTask.WaitUntil chain not fully in the stubs
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CWaitTapInFocus_003Ed__20 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public TutorialContext _003C_003E4__this;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				// TODO(unrecovered): depends on the <WaitTapInFocus>b__20_0 predicate, which is not in the stubs
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		public readonly TutorialFocusCanvasView Focus;

		public readonly TutorialTalkView Talk;

		public readonly TutorialHandleTap Hand;

		public FCustomerLine TriggerLine;

		private const float BeltReadyTimeout = 15f;

		public bool HasFocus => Focus != null && Focus.HasFocus;

		public IngredientConveyorItem NeededIngredientItem { get; private set; }

		public TutorialContext(TutorialFocusCanvasView focus, TutorialTalkView talk, TutorialHandleTap hand)
		{
			Focus = focus;
			Talk = talk;
			Hand = hand;
		}

		public void BeginStep(TutorialStep step)
		{
			IngredientConveyorItem next = null;
			if (step != null && step.target != null && step.target.kind == TutorialTargetKind.NeededIngredient)
			{
				next = TutorialTargetResolver.FindBeltItemBehindFront(step.target.id);
			}
			NeededIngredientItem = next;
		}

		public Transform Resolve(TutorialTargetRef target)
		{
			return TutorialTargetResolver.Resolve(target, TriggerLine, NeededIngredientItem);
		}

		[AsyncStateMachine(typeof(_003CPrepareTarget_003Ed__14))]
		public UniTask PrepareTarget(TutorialTargetRef target)
		{
			// TODO(unrecovered): async body is reproduced only in the state machine MoveNext, which is left as TODO
			return default;
		}

		public UniTask WaitForTap(TutorialTargetRef target)
		{
			if (target != null)
			{
				switch (target.kind)
				{
				case TutorialTargetKind.Ingredient:
					return WaitIngredientTap(target.id);
				case TutorialTargetKind.Customer:
				case TutorialTargetKind.CustomerOrder:
					return WaitOrderTap();
				case TutorialTargetKind.NeededIngredient:
					return WaitIngredientTap(NeededIngredientItem);
				}
			}
			return WaitTapInFocus();
		}

		[AsyncStateMachine(typeof(_003CWaitOrderTap_003Ed__16))]
		private UniTask WaitOrderTap()
		{
			// TODO(unrecovered): async body is reproduced only in the state machine MoveNext, which is left as TODO
			return default;
		}

		private UniTask WaitIngredientTap(string id)
		{
			return WaitIngredientTap(item => TutorialTargetResolver.MatchesIngredient(item, id), false);
		}

		private UniTask WaitIngredientTap(IngredientConveyorItem target)
		{
			return WaitIngredientTap(item => item == target, true);
		}

		[AsyncStateMachine(typeof(_003CWaitIngredientTap_003Ed__19))]
		private UniTask WaitIngredientTap(Func<IngredientConveyorItem, bool> matches, bool untilPickAnyEnds)
		{
			// TODO(unrecovered): async body is reproduced only in the state machine MoveNext, which is left as TODO
			return default;
		}

		[AsyncStateMachine(typeof(_003CWaitTapInFocus_003Ed__20))]
		private UniTask WaitTapInFocus()
		{
			// TODO(unrecovered): async body is reproduced only in the state machine MoveNext, which is left as TODO
			return default;
		}
	}
}
