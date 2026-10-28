using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Datpt
{
	public static class Utilities
	{
		public class DragData
		{
			public Vector2 dragStartPos;

			public Vector3 objectStartPos;

			public bool isDragging;

			public bool isAtMin;

			public bool isAtMax;
		}

		public enum DragDirection
		{
			Horizontal = 0,
			Vertical = 1
		}

		public enum AllowedDragDirection
		{
			Any = 0,
			OnlyPositive = 1,
			OnlyNegative = 2
		}

		[CompilerGenerated]
		private sealed class _003CIEPlayAnimationCoroutine_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Animation animation;

			public Action onDone;

			public int countTime;

			private string _003CclipName_003E5__2;

			private float _003CclipLength_003E5__3;

			private int _003Ci_003E5__4;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003CIEPlayAnimationCoroutine_003Ed__8(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -1;
					_003Ci_003E5__4++;
				}
				else
				{
					if (_003C_003E1__state != 0)
					{
						return false;
					}
					_003C_003E1__state = -1;
					AnimationClip clip = animation.clip;
					if (clip == null)
					{
						if (onDone != null)
						{
							onDone();
						}
						return false;
					}
					_003CclipName_003E5__2 = clip.name;
					_003CclipLength_003E5__3 = clip.length;
					_003Ci_003E5__4 = 0;
				}
				if (countTime <= _003Ci_003E5__4)
				{
					if (onDone != null)
					{
						onDone();
					}
					return false;
				}
				animation.Play(_003CclipName_003E5__2);
				_003C_003E2__current = new WaitForSeconds(_003CclipLength_003E5__3);
				_003C_003E1__state = 1;
				return true;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}
		}

		private static Color tmpColor;

		private static bool isHolding;

		private static GameObject currentObj;

		private static readonly DragData dragData = new DragData();

		private static Dictionary<List<SpriteRenderer>, Tween> fadeTweenDict = new Dictionary<List<SpriteRenderer>, Tween>();

		private static Dictionary<List<SpriteRenderer>, Tween> delayedCallDict = new Dictionary<List<SpriteRenderer>, Tween>();

		private static float gravity;

		private static System.Random random;

		public static void AddToDictionary(this Dictionary<EIngredienType, int> dictionary, EIngredienType key, int value)
		{
			if (!dictionary.ContainsKey(key))
			{
				dictionary.Add(key, 0);
			}
			dictionary[key] = dictionary[key] + value;
		}

		public static void SetAlpha(this SpriteRenderer sr, float alpha)
		{
			tmpColor = sr.color;
			tmpColor.a = alpha;
			sr.color = tmpColor;
		}

		public static T WeightedRandom<T>(Dictionary<T, float> weights, System.Random rng = null)
		{
			return default;
		}

		public static List<T> ShuffleList<T>(List<T> source)
		{
			return null;
		}

		public static Tween MoveBetweenPoints(this Transform target, Transform startPoint, Transform endPoint, float duration = 1f, Ease ease = Ease.Linear)
		{
			// Rebuilt from the decompiled code. The decompiler drops the float argument to DOMove; the only float parameter is duration, so it is used there.
			if (target == null || startPoint == null || endPoint == null)
			{
				return null;
			}
			target.DOKill();
			target.position = startPoint.position;
			return target.DOMove(endPoint.position, duration).SetEase(ease).SetLoops(-1, LoopType.Yoyo);
		}

		public static Tween MoveInCircle(this Transform target, Transform center, float radius = 0.5f, float duration = 2f)
		{
			// Rebuilt from the decompiled code and its two lambdas. The angle runs 0 to 360 degrees, clockwise (the setter uses -angle).
			// The start offset is a static Vector3 in the original; Vector3.right is assumed because it matches the setter's value at angle 0.
			if (target == null || center == null)
			{
				return null;
			}
			target.DOKill();
			float angle = 0f;
			target.position = center.position + radius * Vector3.right;
			return DOTween.To(() => angle, delegate(float value)
			{
				angle = value;
				float radians = value * -0.017453292f;
				Vector3 c = center.position;
				target.position = new Vector3(c.x + Mathf.Cos(radians) * radius, c.y + Mathf.Sin(radians) * radius, c.z);
			}, 360f, duration).SetEase(Ease.Linear).SetLoops(-1, LoopType.Restart);
		}

		public static void PlayAnimationBy(MonoBehaviour runner, Animation animation, int countTime, Action onDone = null)
		{
			if (runner != null)
			{
				runner.StartCoroutine(IEPlayAnimationCoroutine(animation, countTime, onDone));
				return;
			}
			// The message literal is "MonoBehaviour runner is required to start coroutine." (decoded from the metadata).
			// The original builds an exception-like object with this message; logging it as an exception is inferred.
			UnityEngine.Debug.LogException(new ArgumentException("MonoBehaviour runner is required to start coroutine."));
		}

		[IteratorStateMachine(typeof(_003CIEPlayAnimationCoroutine_003Ed__8))]
		private static IEnumerator IEPlayAnimationCoroutine(Animation animation, int countTime, Action onDone)
		{
			return new _003CIEPlayAnimationCoroutine_003Ed__8(-2)
			{
				animation = animation,
				countTime = countTime,
				onDone = onDone
			};
		}

		public static void CheckHold2D(this GameObject self, Action onHolding, Action onDown = null, Action onUp = null)
		{
			// TODO(unrecovered): multi-phase touch state machine (static holding state, Camera.main ray test via Physics2D.GetRayIntersection and an unnamed component lookup FUN_04b7c324) with onDown/onUp callbacks; the static state fields and helpers are not fully identified.
		}

		public static void CheckTouch(this GameObject self, Action onTouched)
		{
			if (Input.touchCount != 0 && self != null)
			{
				Touch touch = Input.GetTouch(0);
				if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
				{
					Ray ray = Camera.main.ScreenPointToRay(touch.position);
					RaycastHit2D hit = Physics2D.GetRayIntersection(ray);
					if (hit.collider != null && hit.collider.gameObject == self && onTouched != null)
					{
						onTouched();
					}
				}
			}
		}

		public static void TryHaptic(ref float lastHapticTime, float hapticCooldown, Action onTrySomeThing = null)
		{
			if (hapticCooldown <= Time.time - lastHapticTime)
			{
				if (onTrySomeThing != null)
				{
					onTrySomeThing();
				}
				MMVibrationManager.Haptic(HapticTypes.SoftImpact);
				lastHapticTime = Time.time;
			}
		}

		public static void SetParentKeepWorldScale(this Transform tf, Transform newParent, bool worldPositionStays = true)
		{
			// TODO(unrecovered): the pseudocode computes the local scale from lossy scales of tf and newParent, but the y/z divisors and the null-parent path use an unnamed static Vector3 (DAT_0918cbd0) and are ambiguous.
		}

		public static void TrySomethingWithCountdownTime(ref float lastTimeTry, float coolDown, Action OnActiveAction)
		{
			if (coolDown <= Time.time - lastTimeTry)
			{
				if (OnActiveAction != null)
				{
					OnActiveAction();
				}
				lastTimeTry = Time.time;
			}
		}

		public static bool CheckIsItemMoving(Transform tfToCheck, Vector3 lastPosition)
		{
			return 0.001f < (tfToCheck.position - lastPosition).sqrMagnitude;
		}

		public static void CheckShowTutorial(ref float timeCount, float timeConfig, bool needToCheck, Action onTut)
		{
			if (needToCheck)
			{
				timeCount += Time.deltaTime;
				if (onTut != null && timeConfig <= timeCount)
				{
					onTut();
				}
			}
		}

		public static void CheckToReplayTut(ref float timeCount, float timeConfig, bool needToCheck, Action onTut, Transform tfToShake, float posStrength = 0.0075f, float rotStrength = 0.5f, float duration = 2f, int vibrato = 10)
		{
			if (needToCheck)
			{
				timeCount += Time.deltaTime;
				if (timeConfig <= timeCount)
				{
					if (onTut != null)
					{
						onTut();
					}
					// Rebuilt from the decompiled code: the original replays the tutorial shake after onTut.
					ShakingTutorial(tfToShake, posStrength, rotStrength, duration, vibrato);
				}
			}
		}

		public static void ShakingTutorial(Transform tfToShake, float posStrength = 0.0075f, float rotStrength = 15f, float duration = 2f, int vibrato = 10)
		{
			// Rebuilt from the decompiled code; the decompiler drops the float arguments, so strengths (pos, pos, 0) / (0, 0, rot), duration and vibrato are mapped by position.
			// 90f randomness and Ease 6 (OutQuad) are from the constants in the call.
			Sequence sequence = DOTween.Sequence();
			sequence.Append(tfToShake.DOShakeRotation(duration, new Vector3(0f, 0f, rotStrength), vibrato, 90f).SetEase(Ease.OutQuad));
			sequence.Join(tfToShake.DOShakePosition(duration, new Vector3(posStrength, posStrength, 0f), vibrato, 90f).SetEase(Ease.OutQuad));
		}

		public static void StopShaking(Transform tfToShake)
		{
			// Rebuilt from the decompiled code: the original resets local position and rotation to static Vector3 / Quaternion values; zero and identity are assumed.
			DOTween.Kill(tfToShake);
			tfToShake.localPosition = Vector3.zero;
			tfToShake.localRotation = Quaternion.identity;
		}

		public static float HandleDragReturnValue(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit, DragDirection direction, AllowedDragDirection allowedDragDirection = AllowedDragDirection.Any, Action onReachMin = null, Action onReachMax = null)
		{
			// TODO(unrecovered): touch-drag state machine using static dragData (block+0x20), Camera.WorldToScreenPoint and ScreenToWorldPoint, with epsilon from an unnamed static float; not ported.
			return 0f;
		}

		public static void HandleDrag(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit, DragDirection direction, AllowedDragDirection allowedDragDirection = AllowedDragDirection.Any, Action onReachMin = null, Action onReachMax = null)
		{
			// TODO(unrecovered): touch-drag state machine (see HandleDragReturnValue); not ported.
		}

		public static void HandleDrag(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit, DragDirection direction, Action onReachMin = null, Action onReachMax = null)
		{
			// TODO(unrecovered): touch-drag state machine (see HandleDragReturnValue); not ported.
		}

		private static void HandleLimitCallback(float currentValue, float minValue, float maxValue, Action onReachMin, Action onReachMax)
		{
			// TODO(unrecovered): compares against an epsilon from the unnamed static float at DAT_09187e98->0xb8 and the DragData flags; the epsilon owner is not in stubs.
		}

		public static void HandleHorizontalDrag(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit)
		{
			// TODO(unrecovered): touch-drag state machine (see HandleDragReturnValue); not ported.
		}

		public static Tween DelayedCallScaled(float delay, TweenCallback callback)
		{
			return DOVirtual.DelayedCall(delay, callback, true).SetUpdate(false);
		}

		public static Tween DelayedCallUnscaled(float delay, TweenCallback callback)
		{
			return DOVirtual.DelayedCall(delay, callback, true).SetUpdate(true);
		}

		public static List<SpriteRenderer> GetAllSpriteRenderers(GameObject root, bool includeInactive = true)
		{
			if (root != null)
			{
				return new List<SpriteRenderer>(root.GetComponentsInChildren<SpriteRenderer>(includeInactive));
			}
			return new List<SpriteRenderer>();
		}

		public static void DoFadeListSpriteNew(List<SpriteRenderer> lstTargetSprRdr, float targetAlpha, float time, Action onDone = null, bool includeDeactiveOnHyrachy = true)
		{
			// Rebuilt from the decompiled code and its completion lambda. includeDeactiveOnHyrachy = false skips sprites that are inactive in the hierarchy.
			KillFadeListSprite(lstTargetSprRdr);
			Sequence sequence = DOTween.Sequence();
			foreach (SpriteRenderer sprite in lstTargetSprRdr)
			{
				if (includeDeactiveOnHyrachy || sprite.gameObject.activeInHierarchy)
				{
					sequence.Join(DoFadeSpriteReturnTween(sprite, targetAlpha, time));
				}
			}
			fadeTweenDict[lstTargetSprRdr] = sequence;
			delayedCallDict[lstTargetSprRdr] = DelayedCallScaled(time, delegate
			{
				onDone?.Invoke();
				delayedCallDict.Remove(lstTargetSprRdr);
				fadeTweenDict.Remove(lstTargetSprRdr);
			});
		}

		public static void KillFadeListSprite(List<SpriteRenderer> lstTargetSprRdr)
		{
			// Rebuilt from the decompiled code: kill and forget the fade and delayed-call tweens stored for this list.
			if (fadeTweenDict.TryGetValue(lstTargetSprRdr, out var fadeTween))
			{
				fadeTween.Kill();
				fadeTweenDict.Remove(lstTargetSprRdr);
			}
			if (delayedCallDict.TryGetValue(lstTargetSprRdr, out var delayedTween))
			{
				delayedTween.Kill();
				delayedCallDict.Remove(lstTargetSprRdr);
			}
		}

		public static Tween DoFadeSpriteReturnTween(SpriteRenderer targetSprRdr, float targetAlpha, float time, Action onDone = null)
		{
			// Rebuilt from the decompiled code: activate the sprite, DOFade, then the lambda invokes onDone.
			targetSprRdr.gameObject.SetActive(true);
			return targetSprRdr.DOFade(targetAlpha, time).OnComplete(delegate
			{
				onDone?.Invoke();
			});
		}

		public static void DoFadeListSprite(List<SpriteRenderer> lstTargetSprRdr, float targetAlpha, float time, Action onDone = null)
		{
			// Rebuilt from the decompiled code: fade every sprite, then call onDone after time.
			foreach (SpriteRenderer sprite in lstTargetSprRdr)
			{
				DoFadeSprite(sprite, targetAlpha, time);
			}
			DelayedCallScaled(time, delegate
			{
				onDone?.Invoke();
			});
		}

		public static Tween DoFadeSprite(SpriteRenderer targetSprRdr, float targetAlpha, float time, Action onDone = null)
		{
			// Rebuilt from the decompiled code: activate the sprite, DOFade, then the lambda invokes onDone.
			targetSprRdr.gameObject.SetActive(true);
			return targetSprRdr.DOFade(targetAlpha, time).OnComplete(delegate
			{
				onDone?.Invoke();
			});
		}

		public static Tween DoFadeSpriteExt(this SpriteRenderer targetSprRdr, float targetAlpha, float time, Ease ease = Ease.Linear, Action onDone = null)
		{
			// Rebuilt from the decompiled code: activate the sprite, DOFade, then the lambda invokes onDone.
			targetSprRdr.gameObject.SetActive(true);
			return targetSprRdr.DOFade(targetAlpha, time).SetEase(ease).OnComplete(delegate
			{
				onDone?.Invoke();
			});
		}

		public static List<T> GetListEnum<T>()
		{
			return null;
		}

		public static void PlayAnimation(Animation animation, AnimationClip animationClip, bool loop = false, Action onDone = null, float delay = 0f, float speed = 1f)
		{
			// Rebuilt from the decompiled code and its two lambdas. Messages decoded from the metadata.
			if (animation == null || animationClip == null)
			{
				UnityEngine.Debug.LogError("Animation or clip is null.");
				return;
			}
			animation.gameObject.SetActive(true);
			DelayedCallScaled(delay, delegate
			{
				animation.gameObject.SetActive(true);
				if (animation.GetClip(animationClip.name) == null)
				{
					animation.AddClip(animationClip, animationClip.name);
				}
				AnimationState state = animation[animationClip.name];
				if (state != null)
				{
					state.wrapMode = (loop ? WrapMode.Loop : WrapMode.Default);
					state.speed = speed;
					animation.Play(animationClip.name);
					DelayedCallScaled(animationClip.length / speed, delegate
					{
						onDone?.Invoke();
					});
				}
			});
		}

		public static void PlayAnimation(Animation animation, string animName, float length, bool loop = false, Action onDone = null, float delay = 0f, float speed = 1f)
		{
			// Rebuilt from the decompiled code and its two lambdas. Messages decoded from the metadata.
			if (animation == null || string.IsNullOrEmpty(animName) || animation[animName] == null)
			{
				UnityEngine.Debug.LogError("Animation or animName is invalid.");
				return;
			}
			animation.gameObject.SetActive(true);
			DelayedCallScaled(delay, delegate
			{
				animation.gameObject.SetActive(true);
				AnimationState state = animation[animName];
				if (state != null)
				{
					state.wrapMode = (loop ? WrapMode.Loop : WrapMode.Default);
					state.speed = speed;
					animation.Play(animName);
					DelayedCallScaled(length / speed, delegate
					{
						onDone?.Invoke();
					});
				}
			});
		}

		public static float GetValue(float value, float floor, float ceiling, float min, float max)
		{
			float t = Mathf.Clamp01((value - floor) / (ceiling - floor));
			return (max - min) * t + min;
		}

		public static double Lerp(double a, double b, float t)
		{
			return (b - a) * Mathf.Clamp01(t) + a;
		}

		public static float Lerp(float a, float b, float t)
		{
			return (b - a) * Mathf.Clamp01(t) + a;
		}

		public static Vector2 CalculateLinePoint(Vector2 throwPoint, Vector2 force, float wind, float t)
		{
			// TODO(unrecovered): the pseudocode returns a single component (p0 + v*t + a*t*t*0.5) with the acceleration taken from an unidentified argument; the stub returns Vector2, so the mapping is not confirmed.
			return default;
		}

		public static float CaculateRatioVelocity(Vector2 throwPoint, Vector2 force, Vector2 targetPoint, float wind)
		{
			float dx = targetPoint.x - throwPoint.x;
			float cross = force.y * dx - force.x * (targetPoint.y - throwPoint.y);
			float time = Mathf.Sqrt((cross + cross) / (force.y * wind + force.x * gravity));
			return ((dx + time * time * wind * -0.5f) / time) / force.x;
		}

		public static float TimeToTarget(Vector2 throwPoint, Vector2 force, Vector2 targetPoint, float wind)
		{
			return 0f;
		}

		public static T ParseEnum<T>(string value)
		{
			return default;
		}

		public static List<T> SortOrder<T>(List<T> list, int amount)
		{
			return null;
		}

		public static bool TryRandomExcept<T>(List<T> source, HashSet<T> skipSet, out T result)
		{
			result = default;
			return false;
		}

		public static bool Chance(float rand, float max = 100f)
		{
			return false;
		}

		public static T RandomEnumValue<T>() where T : Enum
		{
			return default;
		}

		public static int GetEnumCount<T>() where T : Enum
		{
			return 0;
		}

		public static T[] GetEnumMembers<T>() where T : Enum
		{
			return null;
		}

		public static T TakeRandom<T>(params T[] ts)
		{
			return default;
		}

		public static T Last<T>(this T[] ts)
		{
			return default;
		}

		public static T Last<T>(this List<T> ts)
		{
			return default;
		}

		public static T RandomItem<T>(this T[] ts)
		{
			return default;
		}

		public static T RandomItem<T>(this List<T> ts)
		{
			return default;
		}

		public static bool Contains<T>(this T[] ts, T t)
		{
			return false;
		}

		public static Vector3 GetPositionInLine(int index, int max, Vector3 midPoint, Vector3 space)
		{
			return default;
		}

		public static Vector3 GetPointInCircleLine(int index, int max, float radius, float rate)
		{
			return default;
		}

		public static void SaveAssetEditor(UnityEngine.Object go)
		{
		}

		public static Color GetColorInPalette(string colorPaletteName, int index)
		{
			return default;
		}
	}
}
