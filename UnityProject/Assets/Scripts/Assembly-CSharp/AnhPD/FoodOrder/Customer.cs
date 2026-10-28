using CakeOrder;
using System;
using System.Collections;
using System.Collections.Generic;
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

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private CustomerState[] states;

		[Tooltip("Khách này chiếm bao nhiêu ô trên hàng chờ của FCustomerLineHandle (1 = một ô; khách to điền 1.5, 2...)")]
		[SerializeField]
		[Min(0.1f)]
		private float slotSize = 0.5f;

		[SerializeField]
		[Range(0f, 1f)]
		private float voiceVolume = 0.5f;

		private AudioSource _voice;

		private State _state;

		private static readonly int StateCount = Enum.GetValues(typeof(State)).Length;

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
		private string biteEventName = "bite_sound";

		private bool _bitePlayed;

		private Action _onEaten;

		public float SlotSize => slotSize;

		public State CurrentState => _state;

		public bool HasWalkAnim => !StateOf(State.Walk).IsEmpty;

		public bool IsMuted { get; set; }

		private string BiteEventName
		{
			get
			{
				if (!string.IsNullOrEmpty(biteEventName))
				{
					return biteEventName;
				}
				return "bite_sound";
			}
		}

		Transform ICookingCustomerActor.transform => base.transform;

		private CustomerState StateOf(State state)
		{
			if (_byState == null)
			{
				_byState = BuildStateLookup();
			}
			return _byState[(int)state];
		}

		private void Awake()
		{
			_byState = BuildStateLookup();
			_voice = base.gameObject.AddComponent<AudioSource>();
			_voice.playOnAwake = false;
			_voice.loop = false;
			if (AudioManagerCakeOrder.Instance == null)
			{
				return;
			}
			AudioManagerCakeOrder.Instance.RegisterAudioSource(_voice, (AudioManagerCakeOrder.AudioTrack)6);
		}

		private void OnDisable()
		{
			StopVoice();
		}

		private CustomerState[] BuildStateLookup()
		{
			CustomerState[] array = new CustomerState[StateCount];
			CustomerState[] array2 = states ?? Array.Empty<CustomerState>();
			for (int i = 0; i < array2.Length; i++)
			{
				CustomerState customerState = array2[i];
				if (customerState != null)
				{
					int state = (int)customerState.State;
					if (state >= 0 && state < StateCount)
					{
						if (array[state] == null)
						{
							array[state] = customerState;
						}
						else
						{
							/* literal recovered by guess */
							UnityEngine.Debug.LogError(string.Format("Duplicate customer state {0}", customerState.State), this);
						}
					}
				}
			}
			for (int j = 0; j < StateCount; j++)
			{
				if (array[j] == null)
				{
					if (j != 0)
					{
						/* literal recovered by guess */
						UnityEngine.Debug.LogError(string.Format("Missing customer state {0}", (State)j), this);
					}
					array[j] = new CustomerState();
				}
			}
			return array;
		}

		private void Start()
		{
			ChangeState(State.Idle, null, playSfx: false);
			StateOf(State.Unhappy).OnAnimationDone = delegate
			{
				if (!_angryHold || !StateOf(State.Unhappy).HasLoop)
				{
					ChangeState(State.Idle, null, playSfx: false);
				}
			};
			StateOf(State.Happy).OnAnimationDone = delegate
			{
				if (_angryHold)
				{
					HoldAngry();
				}
				else
				{
					ChangeState(State.Idle, null, playSfx: false);
				}
			};
			StateOf(State.Eat).OnSpineEvent = OnEatSpineEvent;
		}

		private void OnEnable()
		{
			_angryHold = false;
		}

		private void PlayVoice(AudioClip clip)
		{
			if ((bool)clip && !IsMuted)
			{
				_voice.pitch = AudioManagerCakeOrder.Instance.SpeedFor((AudioManagerCakeOrder.AudioTrack)6);
				_voice.volume = voiceVolume;
				_voice.clip = clip;
				_voice.Play();
			}
		}

		private void StopVoice()
		{
			if ((bool)_voice)
			{
				_voice.Stop();
			}
		}

		public void SetVisualScale(float scale, float duration = 0f)
		{
			if (!skeletonAnimation)
			{
				return;
			}
			Transform transform = skeletonAnimation.transform;
			if (!_baseSkeletonScaleCaptured)
			{
				_baseSkeletonScale = transform.localScale;
				_baseSkeletonScaleCaptured = true;
			}
			transform.DOKill();
			if (duration > 0f)
			{
				transform.DOScale(_baseSkeletonScale * scale, duration).SetEase(Ease.OutQuad);
			}
			else
			{
				transform.localScale = _baseSkeletonScale * scale;
			}
		}

		public void Hop(float height, float duration, Action onComplete = null)
		{
			if (!skeletonAnimation)
			{
				onComplete?.Invoke();
				return;
			}
			Transform t = skeletonAnimation.transform;
			if (!_skeletonRestCaptured)
			{
				_skeletonRestLocalPos = t.localPosition;
				_skeletonRestCaptured = true;
			}
			Vector3 start = _skeletonRestLocalPos;
			if (_hopTween != null)
			{
				_hopTween.Kill();
			}
			_hopTween = DOVirtual.Float(0f, 1f, duration, delegate(float p)
			{
				t.localPosition = start + Vector3.up * (Mathf.Sin(p * (float)Math.PI) * height);
			}).SetEase(Ease.Linear).SetTarget(this).OnComplete(delegate
			{
				t.localPosition = start;
				_hopTween = null;
				onComplete?.Invoke();
			});
		}

		public void SetAnimSpeed(float speed)
		{
			if ((bool)skeletonAnimation)
			{
				skeletonAnimation.timeScale = Mathf.Max(0.01f, speed);
			}
		}

		public void SetTint(float darken, float duration = 0f)
		{
			if ((bool)skeletonAnimation && skeletonAnimation.Skeleton != null)
			{
				if (_tintTween != null)
				{
					_tintTween.Kill();
				}
				if (duration > 0f)
				{
					_tintTween = DOVirtual.Float(_tintDarken, darken, duration, ApplyTint).SetEase(Ease.OutQuad);
				}
				else
				{
					ApplyTint(darken);
				}
			}
		}

		private void ApplyTint(float darken)
		{
			_tintDarken = darken;
			if ((bool)skeletonAnimation && skeletonAnimation.Skeleton != null)
			{
				float num = 1f - Mathf.Clamp01(darken);
				skeletonAnimation.Skeleton.SetColor(new Color(num, num, num, 1f));
			}
		}

		public void LocalMoveInstant(Vector2 vector)
		{
			base.transform.localPosition = vector;
		}

		public void LocalMove(Vector2 vector, float duration, Action onComplete = null, float delay = 0f, Ease ease = Ease.Linear)
		{
			base.transform.DOLocalMove(base.transform.localPosition + (Vector3)vector, duration).SetEase(ease).OnComplete(delegate
			{
				onComplete?.Invoke();
			}).SetDelay(delay);
			base.transform.DOPunchScale(Vector3.up * 0.1f, duration, 3, 1f).SetDelay(delay);
		}

		public void WalkIn(Vector2 offset, float duration, float bobAmplitude, int bobWaves, Action onComplete = null)
		{
			if (_walkRoutine != null)
			{
				StopCoroutine(_walkRoutine);
			}
			_walkRoutine = StartCoroutine(WalkInRoutine(offset, duration, bobAmplitude, bobWaves, onComplete));
		}

		private IEnumerator WalkInRoutine(Vector2 offset, float duration, float bobAmplitude, int bobWaves, Action onComplete)
		{
			Vector3 start = base.transform.localPosition;
			Vector3 end = new Vector3(start.x + offset.x, start.y + offset.y, start.z);
			float t = 0f;
			while (t < duration)
			{
				t += Time.deltaTime;
				float num = Mathf.Clamp01(t / duration);
				float num2 = Mathf.Clamp01(1f - Mathf.Pow(1f - num, 3f));
				float num3 = Mathf.Sin((float)bobWaves * (float)Math.PI * num);
				base.transform.localPosition = new Vector3(start.x + num2 * (end.x - start.x), bobAmplitude * (1f - num) * num3 + start.y + num2 * (end.y - start.y), start.z);
				yield return null;
			}
			base.transform.localPosition = end;
			_walkRoutine = null;
			onComplete?.Invoke();
		}

		public void ChangeState(State newState, Action onComplete = null, bool playSfx = true)
		{
			switch (newState)
			{
			case State.Idle:
			case State.Walk:
				DropEatChain();
				_angryHold = false;
				break;
			case State.Unhappy:
				DropEatChain();
				break;
			case State.Happy:
				_angryHold = false;
				break;
			}
			_state = newState;
			CustomerState customerState = StateOf(newState);
			if (_state == State.Walk && customerState.IsEmpty)
			{
				customerState = StateOf(State.Idle);
			}
			if (_state == State.Happy)
			{
				StopVoice();
			}
			if (playSfx)
			{
				PlayVoice(customerState.Sfx);
			}
			bool loop = true;
			string animOverride = null;
			if (_state != State.Idle && _state != State.Walk)
			{
				if (_state == State.Unhappy)
				{
					loop = _angryHold && customerState.HasLoop;
				}
				else
				{
					loop = false;
				}
				if (_state == State.Eat && string.IsNullOrEmpty(customerState.StrAnim))
				{
					animOverride = StateOf(State.Happy).StrAnim;
				}
			}
			customerState.Enter(skeletonAnimation, (_state == State.Happy) ? null : onComplete, loop, animOverride);
			if (onComplete != null && _state == State.Happy)
			{
				onComplete();
			}
		}

		public void HoldAngry(bool playSfx = true)
		{
			if (!_angryHold || _state != State.Unhappy)
			{
				_angryHold = true;
				ChangeState(State.Unhappy, null, playSfx && _state != State.Unhappy);
			}
		}

		public void HoldAngry(Action onFirstLoopDone)
		{
			_angryHold = true;
			ChangeState(State.Unhappy, onFirstLoopDone, _state != State.Unhappy);
		}

		public void Cheer()
		{
			if (_state != State.Eat)
			{
				bool angryHold = _angryHold;
				ChangeState(State.Happy, null, playSfx: false);
				_angryHold = angryHold;
			}
		}

		public void ReleaseAngry()
		{
			if (_angryHold)
			{
				ChangeState(State.Idle, null, playSfx: false);
			}
		}

		public void Eat(Func<bool> isOrderComplete, Action onEaten = null)
		{
			_eatOutcome = isOrderComplete;
			_onEaten = onEaten;
			if (_state != State.Eat)
			{
				_leftWhileEating = false;
				_bitePlayed = false;
				ChangeState(State.Eat, FinishEat, playSfx: false);
				if (string.IsNullOrEmpty(StateOf(State.Eat).StrAnim))
				{
					PlayBite();
				}
			}
		}

		private void OnEatSpineEvent(string eventName)
		{
			if (eventName == BiteEventName)
			{
				PlayBite();
			}
		}

		private void PlayBite()
		{
			if (!_bitePlayed)
			{
				_bitePlayed = true;
				PlayVoice(StateOf(State.Eat).Sfx);
			}
		}

		private void FinishEat()
		{
			Func<bool> eatOutcome = _eatOutcome;
			_eatOutcome = null;
			Action onEaten = _onEaten;
			_onEaten = null;
			onEaten?.Invoke();
			State newState;
			bool playSfx;
			if (!_leftWhileEating)
			{
				if (eatOutcome != null && eatOutcome())
				{
					newState = State.Happy;
					playSfx = true;
				}
				else
				{
					if (_angryHold)
					{
						HoldAngry();
						return;
					}
					newState = State.Idle;
					playSfx = false;
				}
			}
			else
			{
				newState = State.Idle;
				playSfx = false;
				_leftWhileEating = false;
			}
			ChangeState(newState, null, playSfx);
		}

		private void DropEatChain()
		{
			_eatOutcome = null;
			_onEaten = null;
			_leftWhileEating = false;
		}

		public void ContinueHappy(Action onComplete)
		{
			if (_state != State.Happy)
			{
				if (_state != State.Eat)
				{
					ChangeState(State.Happy, onComplete, playSfx: false);
					return;
				}
				_leftWhileEating = true;
			}
			onComplete?.Invoke();
		}

		public void KillAnimations()
		{
			base.transform.DOKill();
			if (_hopTween != null)
			{
				_hopTween.Kill();
			}
			if (_skeletonRestCaptured && (bool)skeletonAnimation)
			{
				skeletonAnimation.transform.localPosition = _skeletonRestLocalPos;
			}
			_eatOutcome = null;
			_onEaten = null;
			_leftWhileEating = false;
			if (_walkRoutine != null)
			{
				StopCoroutine(_walkRoutine);
				_walkRoutine = null;
			}
		}
	}
}
