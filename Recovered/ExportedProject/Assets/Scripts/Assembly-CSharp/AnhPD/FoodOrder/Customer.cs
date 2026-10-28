using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CookOrder.Cooking.Implement;
using DG.Tweening;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class Customer : MonoBehaviour, ICookingCustomerActor
	{
		public enum State
		{
			Idle = 0,
			Eat = 1,
			Happy = 2,
			Unhappy = 3,
			Walk = 4
		}

		[CompilerGenerated]
		private sealed class _003CWalkInRoutine_003Ed__43 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Customer _003C_003E4__this;

			public Vector2 offset;

			public float duration;

			public float bobAmplitude;

			public int bobWaves;

			public Action onComplete;

			private Vector3 _003Cstart_003E5__2;

			private Vector3 _003Cend_003E5__3;

			private float _003Ct_003E5__4;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CWalkInRoutine_003Ed__43(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private CustomerState[] states;

		[Tooltip("Khách này chiếm bao nhiêu ô trên hàng chờ của FCustomerLineHandle (1 = một ô; khách to điền 1.5, 2...)")]
		[SerializeField]
		[Min(0.1f)]
		private float slotSize;

		[SerializeField]
		[Range(0f, 1f)]
		private float voiceVolume;

		private AudioSource _voice;

		private State _state;

		private static readonly int StateCount;

		private CustomerState[] _byState;

		private Vector3 _baseSkeletonScale;

		private bool _baseSkeletonScaleCaptured;

		private Tween _hopTween;

		private Vector3 _skeletonRestLocalPos;

		private bool _skeletonRestCaptured;

		private Tween _tintTween;

		private float _tintDarken;

		private Coroutine _walkRoutine;

		private bool _angryHold;

		private Func<bool> _eatOutcome;

		private bool _leftWhileEating;

		private const string DefaultBiteEvent = "bite_sound";

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string biteEventName;

		private bool _bitePlayed;

		private Action _onEaten;

		public float SlotSize => 0f;

		public State CurrentState => State.Idle;

		public bool HasWalkAnim => false;

		public bool IsMuted { get; set; }

		private string BiteEventName => null;

		Transform ICookingCustomerActor.transform => null;

		private CustomerState StateOf(State state)
		{
			return null;
		}

		private void Awake()
		{
		}

		private void OnDisable()
		{
		}

		private CustomerState[] BuildStateLookup()
		{
			return null;
		}

		private void Start()
		{
		}

		private void OnEnable()
		{
		}

		private void PlayVoice(AudioClip clip)
		{
		}

		private void StopVoice()
		{
		}

		public void SetVisualScale(float scale, float duration = 0f)
		{
		}

		public void Hop(float height, float duration, Action onComplete = null)
		{
		}

		public void SetAnimSpeed(float speed)
		{
		}

		public void SetTint(float darken, float duration = 0f)
		{
		}

		private void ApplyTint(float darken)
		{
		}

		public void LocalMoveInstant(Vector2 vector)
		{
		}

		public void LocalMove(Vector2 vector, float duration, Action onComplete = null, float delay = 0f, Ease ease = Ease.Linear)
		{
		}

		public void WalkIn(Vector2 offset, float duration, float bobAmplitude, int bobWaves, Action onComplete = null)
		{
		}

		[IteratorStateMachine(typeof(_003CWalkInRoutine_003Ed__43))]
		private IEnumerator WalkInRoutine(Vector2 offset, float duration, float bobAmplitude, int bobWaves, Action onComplete)
		{
			return null;
		}

		public void ChangeState(State newState, Action onComplete = null, bool playSfx = true)
		{
		}

		public void HoldAngry(bool playSfx = true)
		{
		}

		public void HoldAngry(Action onFirstLoopDone)
		{
		}

		public void Cheer()
		{
		}

		public void ReleaseAngry()
		{
		}

		public void Eat(Func<bool> isOrderComplete, Action onEaten = null)
		{
		}

		private void OnEatSpineEvent(string eventName)
		{
		}

		private void PlayBite()
		{
		}

		private void FinishEat()
		{
		}

		private void DropEatChain()
		{
		}

		public void ContinueHappy(Action onComplete)
		{
		}

		public void KillAnimations()
		{
		}
	}
}
