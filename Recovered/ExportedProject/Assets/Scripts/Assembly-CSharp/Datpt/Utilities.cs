using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
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
			public _003CIEPlayAnimationCoroutine_003Ed__8(int _003C_003E1__state)
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

		private static Color tmpColor;

		private static bool isHolding;

		private static GameObject currentObj;

		private static readonly DragData dragData;

		private static Dictionary<List<SpriteRenderer>, Tween> fadeTweenDict;

		private static Dictionary<List<SpriteRenderer>, Tween> delayedCallDict;

		private static float gravity;

		private static System.Random random;

		public static void AddToDictionary(this Dictionary<EIngredienType, int> dictionary, EIngredienType key, int value)
		{
		}

		public static void SetAlpha(this SpriteRenderer sr, float alpha)
		{
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
			return null;
		}

		public static Tween MoveInCircle(this Transform target, Transform center, float radius = 0.5f, float duration = 2f)
		{
			return null;
		}

		public static void PlayAnimationBy(MonoBehaviour runner, Animation animation, int countTime, Action onDone = null)
		{
		}

		[IteratorStateMachine(typeof(_003CIEPlayAnimationCoroutine_003Ed__8))]
		private static IEnumerator IEPlayAnimationCoroutine(Animation animation, int countTime, Action onDone)
		{
			return null;
		}

		public static void CheckHold2D(this GameObject self, Action onHolding, Action onDown = null, Action onUp = null)
		{
		}

		public static void CheckTouch(this GameObject self, Action onTouched)
		{
		}

		public static void TryHaptic(ref float lastHapticTime, float hapticCooldown, Action onTrySomeThing = null)
		{
		}

		public static void SetParentKeepWorldScale(this Transform tf, Transform newParent, bool worldPositionStays = true)
		{
		}

		public static void TrySomethingWithCountdownTime(ref float lastTimeTry, float coolDown, Action OnActiveAction)
		{
		}

		public static bool CheckIsItemMoving(Transform tfToCheck, Vector3 lastPosition)
		{
			return false;
		}

		public static void CheckShowTutorial(ref float timeCount, float timeConfig, bool needToCheck, Action onTut)
		{
		}

		public static void CheckToReplayTut(ref float timeCount, float timeConfig, bool needToCheck, Action onTut, Transform tfToShake, float posStrength = 0.0075f, float rotStrength = 0.5f, float duration = 2f, int vibrato = 10)
		{
		}

		public static void ShakingTutorial(Transform tfToShake, float posStrength = 0.0075f, float rotStrength = 15f, float duration = 2f, int vibrato = 10)
		{
		}

		public static void StopShaking(Transform tfToShake)
		{
		}

		public static float HandleDragReturnValue(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit, DragDirection direction, AllowedDragDirection allowedDragDirection = AllowedDragDirection.Any, Action onReachMin = null, Action onReachMax = null)
		{
			return 0f;
		}

		public static void HandleDrag(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit, DragDirection direction, AllowedDragDirection allowedDragDirection = AllowedDragDirection.Any, Action onReachMin = null, Action onReachMax = null)
		{
		}

		public static void HandleDrag(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit, DragDirection direction, Action onReachMin = null, Action onReachMax = null)
		{
		}

		private static void HandleLimitCallback(float currentValue, float minValue, float maxValue, Action onReachMin, Action onReachMax)
		{
		}

		public static void HandleHorizontalDrag(this Transform transform, float dragSpeed, Transform minLimit, Transform maxLimit)
		{
		}

		public static Tween DelayedCallScaled(float delay, TweenCallback callback)
		{
			return null;
		}

		public static Tween DelayedCallUnscaled(float delay, TweenCallback callback)
		{
			return null;
		}

		public static List<SpriteRenderer> GetAllSpriteRenderers(GameObject root, bool includeInactive = true)
		{
			return null;
		}

		public static void DoFadeListSpriteNew(List<SpriteRenderer> lstTargetSprRdr, float targetAlpha, float time, Action onDone = null, bool includeDeactiveOnHyrachy = true)
		{
		}

		public static void KillFadeListSprite(List<SpriteRenderer> lstTargetSprRdr)
		{
		}

		public static Tween DoFadeSpriteReturnTween(SpriteRenderer targetSprRdr, float targetAlpha, float time, Action onDone = null)
		{
			return null;
		}

		public static void DoFadeListSprite(List<SpriteRenderer> lstTargetSprRdr, float targetAlpha, float time, Action onDone = null)
		{
		}

		public static Tween DoFadeSprite(SpriteRenderer targetSprRdr, float targetAlpha, float time, Action onDone = null)
		{
			return null;
		}

		public static Tween DoFadeSpriteExt(this SpriteRenderer targetSprRdr, float targetAlpha, float time, Ease ease = Ease.Linear, Action onDone = null)
		{
			return null;
		}

		public static List<T> GetListEnum<T>()
		{
			return null;
		}

		public static void PlayAnimation(Animation animation, AnimationClip animationClip, bool loop = false, Action onDone = null, float delay = 0f, float speed = 1f)
		{
		}

		public static void PlayAnimation(Animation animation, string animName, float length, bool loop = false, Action onDone = null, float delay = 0f, float speed = 1f)
		{
		}

		public static float GetValue(float value, float floor, float ceiling, float min, float max)
		{
			return 0f;
		}

		public static double Lerp(double a, double b, float t)
		{
			return 0.0;
		}

		public static float Lerp(float a, float b, float t)
		{
			return 0f;
		}

		public static Vector2 CalculateLinePoint(Vector2 throwPoint, Vector2 force, float wind, float t)
		{
			return default;
		}

		public static float CaculateRatioVelocity(Vector2 throwPoint, Vector2 force, Vector2 targetPoint, float wind)
		{
			return 0f;
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
