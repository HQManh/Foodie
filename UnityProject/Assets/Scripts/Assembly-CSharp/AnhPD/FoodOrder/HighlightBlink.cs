using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class HighlightBlink : Highlight
	{
		[SerializeField]
		private Transform root;

		[SerializeField]
		private Material silhouetteMaterial;

		[SerializeField]
		private float width = 0.02f;

		[SerializeField]
		private float duration = 0.5f;

		[Range(0f, 1f)]
		[SerializeField]
		private float minAlpha;

		[Range(0f, 1f)]
		[SerializeField]
		private float maxAlpha = 1f;

		[SerializeField]
		private int sortingOffset = -1;

		[SerializeField]
		private bool use8Directions = true;

		[SerializeField]
		private List<SpriteRenderer> copies = new List<SpriteRenderer>();

		private const string CopyName = "_outlineCopy";

		private static readonly Vector2[] Dirs = new Vector2[8]
		{
			new Vector2(1f, 0f),
			new Vector2(-1f, 0f),
			new Vector2(0f, 1f),
			new Vector2(0f, -1f),
			new Vector2(1f, 1f).normalized,
			new Vector2(-1f, 1f).normalized,
			new Vector2(1f, -1f).normalized,
			new Vector2(-1f, -1f).normalized
		};

		private Tween _tween;

		private bool _isRunning;

		private void Awake()
		{
			if (root == null)
			{
				// component type recovered by guess (generic argument not visible in pseudocode)
				SpriteRenderer found = GetComponentInChildren<SpriteRenderer>();
				root = (found ? found.transform : base.transform);
			}
			EnsureCopies();
			SetCopiesActive(false);
		}

		public override void Show(bool isSpeedUp = false)
		{
			if (!_isRunning)
			{
				StartBlink(duration, -1);
			}
		}

		public void BlinkOnce(float cycleDuration = 0f)
		{
			Hide();
			float step = ((cycleDuration <= 0f) ? duration : (cycleDuration * 0.5f));
			StartBlink(step, 2);
		}

		private void StartBlink(float stepDuration, int loops)
		{
			if (!EnsureCopies())
			{
				return;
			}
			_isRunning = true;
			SetCopiesActive(true);
			ApplyAlpha(minAlpha);
			float alpha = minAlpha;
			_tween = DOTween.To(() => alpha, delegate(float v)
			{
				alpha = v;
				ApplyAlpha(v);
			}, maxAlpha, stepDuration).SetEase(Ease.InOutSine).SetLoops(loops, LoopType.Yoyo);
			if (loops > 0)
			{
				_tween.OnComplete(delegate
				{
					_tween = null;
					Hide();
				});
			}
		}

		public override void PreShow()
		{
		}

		public override void Hide()
		{
			if (_tween != null)
			{
				_tween.Kill();
			}
			_tween = null;
			_isRunning = false;
			SetCopiesActive(false);
		}

		private void OnDestroy()
		{
			if (_tween != null)
			{
				_tween.Kill();
			}
		}

		private bool EnsureCopies()
		{
			if (HasBakedCopies())
			{
				return true;
			}
			BuildCopies();
			return HasBakedCopies();
		}

		private bool HasBakedCopies()
		{
			if (copies == null || copies.Count == 0)
			{
				return false;
			}
			for (int i = 0; i < copies.Count; i++)
			{
				if (!copies[i])
				{
					return false;
				}
			}
			return true;
		}

		public void BuildCopies()
		{
			if (root == null || silhouetteMaterial == null)
			{
				Debug.LogWarning("HighlightBlink: missing root or silhouette material" /* literal recovered by guess */, this);
				return;
			}
			ClearCopies();
			int count = (use8Directions ? Dirs.Length : 4);
			SpriteRenderer[] sources = root.GetComponentsInChildren<SpriteRenderer>(false);
			for (int i = 0; i < sources.Length; i++)
			{
				SpriteRenderer src = sources[i];
				if (!src || !src.enabled || src.sprite == null || src.name == "_outlineCopy")
				{
					continue;
				}
				for (int j = 0; j < count; j++)
				{
					copies.Add(CreateCopy(src, Dirs[j] * width));
				}
			}
			SetCopiesActive(false);
		}

		private SpriteRenderer CreateCopy(SpriteRenderer src, Vector2 worldOffset)
		{
			GameObject go = new GameObject("_outlineCopy");
			SpriteRenderer sr = go.AddComponent<SpriteRenderer>();
			sr.sprite = src.sprite;
			sr.flipX = src.flipX;
			sr.flipY = src.flipY;
			sr.drawMode = src.drawMode;
			if (src.drawMode != SpriteDrawMode.Simple)
			{
				sr.size = src.size;
			}
			sr.maskInteraction = src.maskInteraction;
			sr.sharedMaterial = silhouetteMaterial;
			sr.sortingLayerID = src.sortingLayerID;
			sr.sortingOrder = src.sortingOrder + sortingOffset;
			Transform t = go.transform;
			t.SetParent(src.transform, false);
			t.localPosition = Vector3.zero;
			t.localRotation = Quaternion.identity;
			t.localScale = Vector3.one;
			t.position += new Vector3(worldOffset.x, worldOffset.y, 0f);
			return sr;
		}

		private void SetCopiesActive(bool active)
		{
			for (int i = 0; i < copies.Count; i++)
			{
				if ((bool)copies[i])
				{
					copies[i].gameObject.SetActive(active);
				}
			}
		}

		private void ApplyAlpha(float a)
		{
			for (int i = 0; i < copies.Count; i++)
			{
				if ((bool)copies[i])
				{
					Color color = copies[i].color;
					color.a = a;
					copies[i].color = color;
				}
			}
		}

		private void ClearCopies()
		{
			for (int i = 0; i < copies.Count; i++)
			{
				if ((bool)copies[i])
				{
					DestroyCopy(copies[i].gameObject);
				}
			}
			copies.Clear();
			if (root == null)
			{
				return;
			}
			SpriteRenderer[] leftovers = root.GetComponentsInChildren<SpriteRenderer>(true);
			for (int j = 0; j < leftovers.Length; j++)
			{
				if ((bool)leftovers[j] && leftovers[j].name == "_outlineCopy")
				{
					DestroyCopy(leftovers[j].gameObject);
				}
			}
		}

		private static void DestroyCopy(GameObject go)
		{
			if ((bool)go)
			{
				Object.Destroy(go);
			}
		}
	}
}
