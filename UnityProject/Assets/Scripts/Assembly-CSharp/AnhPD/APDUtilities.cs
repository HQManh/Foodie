using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD
{
	public static class APDUtilities
	{
		public static void MoveX(this Transform tfMove, float x, float duration = 1f, bool isDisable = true, float delay = 0f, Action action = null)
		{
			tfMove.gameObject.SetActive(true);
			tfMove.DOLocalMoveX(tfMove.localPosition.x + x, duration).SetEase(Ease.InOutBack).SetDelay(delay).OnComplete(delegate
			{
				tfMove.gameObject.SetActive(!isDisable);
				action?.Invoke();
			});
		}

		public static void MoveY(this Transform tfMove, float y, float duration = 1f, bool isDisable = true, float delay = 0f, Action action = null)
		{
			tfMove.gameObject.SetActive(true);
			tfMove.DOLocalMoveY(tfMove.localPosition.y + y, duration).SetEase(Ease.InOutBack).SetDelay(delay).OnComplete(delegate
			{
				tfMove.gameObject.SetActive(!isDisable);
				action?.Invoke();
			});
		}

		public static void MoveYLiner(this Transform tfMove, float y, float duration = 1f, bool isDisable = true, float delay = 0f, Action action = null)
		{
			tfMove.gameObject.SetActive(true);
			tfMove.DOLocalMoveY(tfMove.localPosition.y + y, duration).SetEase(Ease.Linear).SetDelay(delay).OnComplete(delegate
			{
				tfMove.gameObject.SetActive(!isDisable);
				action?.Invoke();
			});
		}

		public static void Appear(this Transform tfAppear, float strength = 0.1f)
		{
			tfAppear.gameObject.SetActive(true);
			tfAppear.DOPunchScale(Vector3.up * strength, 0.3f, 10, 1f);
		}

		public static void FallAppear(this Transform tfAppear, float strength = 0.1f, float height = 0.5f, float duration = 0.2f, Action action = null, float delay = 0f)
		{
			tfAppear.position = tfAppear.position + Vector3.up * height;
			tfAppear.DOMove(tfAppear.position - Vector3.up * height, duration).SetDelay(delay).OnStart(delegate
			{
				tfAppear.gameObject.SetActive(true);
			});
			tfAppear.DOPunchScale(Vector3.up * strength, 0.3f, 10, 1f).SetDelay(duration * 0.5f + delay).OnComplete(delegate
			{
				action?.Invoke();
			});
		}

		public static void FallAppearLocal(this Transform tfAppear, float strength = 0.1f, float height = 1f, float duration = 0.2f, Action action = null, float delay = 0f)
		{
			tfAppear.localPosition = tfAppear.localPosition + Vector3.up * height;
			tfAppear.DOLocalMove(tfAppear.localPosition - Vector3.up * height, duration).SetDelay(delay).OnStart(delegate
			{
				tfAppear.gameObject.SetActive(true);
			});
			tfAppear.DOPunchScale(Vector3.up * strength, 0.3f, 10, 1f).SetDelay(duration * 0.5f + delay).OnComplete(delegate
			{
				action?.Invoke();
			});
		}

		public static void TossAppear(this Transform tfAppear, float strength = 0.1f, float height = 0.5f, float duration = 0.2f, Action action = null, float delay = 0f)
		{
			tfAppear.gameObject.SetActive(true);
			Vector3 position = tfAppear.position;
			tfAppear.DOMove(position + Vector3.up * height, duration * 0.5f);
			tfAppear.DOMove(position, duration * 0.5f).SetDelay(duration * 0.5f + delay);
			tfAppear.DOPunchScale(Vector3.up * strength, 0.3f, 10, 1f).SetDelay(duration + delay).OnComplete(delegate
			{
				action?.Invoke();
			});
		}

		public static void Floating(this Transform tf, float height = -0.01f, float duration = 2f)
		{
			Vector3 position = tf.position;
			Sequence sequence = DOTween.Sequence();
			sequence.SetTarget(tf);
			sequence.Append(tf.DOMoveY(position.y + UnityEngine.Random.Range(0.5f, 1f) * height, duration * 0.5f).SetEase(Ease.InOutSine));
			sequence.Append(tf.DOMoveY(position.y, duration * 0.5f).SetEase(Ease.InOutSine));
			sequence.SetLoops(-1, LoopType.Yoyo);
		}

		public static void FloatingLocal(this Transform tf, float height = -0.01f, float duration = 2f)
		{
			Vector3 localPosition = tf.localPosition;
			Sequence sequence = DOTween.Sequence();
			sequence.SetTarget(tf);
			sequence.Append(tf.DOLocalMoveY(localPosition.y + UnityEngine.Random.Range(0.5f, 1f) * height, duration * 0.5f).SetEase(Ease.InOutSine));
			sequence.Append(tf.DOLocalMoveY(localPosition.y, duration * 0.5f).SetEase(Ease.InOutSine));
			sequence.SetLoops(-1, LoopType.Yoyo);
		}

		public static Transform GetNearestTransform(Transform tf, List<Transform> list)
		{
			if (list.Count < 1)
			{
				return null;
			}
			int index = 0;
			float best = Vector3.Distance(tf.position, list[0].position);
			for (int i = 1; i < list.Count; i++)
			{
				float d = Vector3.Distance(tf.position, list[i].position);
				if (best > d)
				{
					best = d;
					index = i;
				}
			}
			return list[index];
		}

		public static int GetNearestTransformIndex(Transform tf, List<Transform> list)
		{
			if (list.Count < 1)
			{
				return -1;
			}
			int index = 0;
			float best = Vector3.Distance(tf.position, list[0].position);
			for (int i = 1; i < list.Count; i++)
			{
				float d = Vector3.Distance(tf.position, list[i].position);
				if (best > d)
				{
					best = d;
					index = i;
				}
			}
			return index;
		}

		public static void ReplaceByTarget(this Transform tf, Transform target, float duration = 0.3f, Action action = null)
		{
			tf.DOMove(target.position, duration);
			tf.DORotate(target.eulerAngles, duration);
			tf.DOScale(target.localScale, duration).OnComplete(delegate
			{
				action?.Invoke();
				tf.gameObject.SetActive(false);
				target.gameObject.SetActive(true);
			});
		}

		public static void SetAlpha(this SpriteRenderer sr, float alpha)
		{
			Color color = sr.color;
			color.a = alpha;
			sr.color = color;
		}

		public static string GetFirstNChars(string value, int n)
		{
			if (!string.IsNullOrEmpty(value))
			{
				if (n < 1)
				{
					return string.Empty;
				}
				if (n < value.Length)
				{
					return value.Substring(0, n);
				}
			}
			return value;
		}

		public static (string, string) SplitByKey(string value, string key)
		{
			int num = value.IndexOf(key, StringComparison.Ordinal);
			if (num < 0)
			{
				return (value, string.Empty);
			}
			return (value.Substring(0, num), value.Substring(key.Length + num));
		}
	}
}
