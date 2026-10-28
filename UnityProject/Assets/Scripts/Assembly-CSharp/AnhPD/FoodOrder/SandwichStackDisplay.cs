using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SandwichStackDisplay : SandwichDisplayBase
	{
		[SerializeField]
		private SandwichStackLayer[] fillings;

		[SerializeField]
		private SpriteRenderer top;

		[SerializeField]
		private SpriteRenderer bottom;

		[SerializeField]
		private float topOffset = 0.5f;

		[SerializeField]
		private float rootOffset = 0.5f;

		private SandwichStackLayer[] _orderedFillings;

		[Header("Assemble anim")]
		[SerializeField]
		private float squashAmount = 0.15f;

		[SerializeField]
		private float squashDuration = 0.08f;

		[SerializeField]
		private float popDuration = 0.18f;

		[SerializeField]
		private float spreadGap = 0.18f;

		[SerializeField]
		private float fallDuration = 0.3f;

		[SerializeField]
		private float fallStagger = 0.04f;

		private readonly List<(Transform tf, float restY)> _layers = new List<(Transform tf, float restY)>();

		private Vector3 _baseScale;

		private bool _baseScaleCaptured;

		private Sequence _anim;

		public int FillingLayerCount { get; private set; }

		private SandwichStackLayer[] OrderedFillings
		{
			get
			{
				if (_orderedFillings == null)
				{
					SandwichStackLayer[] clone = (SandwichStackLayer[])fillings.Clone();
					Array.Sort(clone, (a, b) =>
						SandwichPieceTable.FillingRank(a.piece).CompareTo(SandwichPieceTable.FillingRank(b.piece)));
					_orderedFillings = clone;
				}
				return _orderedFillings;
			}
		}

		public override float AssembleDuration
		{
			get
			{
				if (_layers.Count == 0)
				{
					return 0f;
				}
				float total = 0f;
				if (squashAmount > 0f && squashDuration > 0f)
				{
					total = squashDuration;
				}
				return total + popDuration + fallDuration + fallStagger * (_layers.Count - 1);
			}
		}

		public override bool CanShow(SandwichPiece piece)
		{
			if ((int)piece == 0)
			{
				return bottom != null || top != null;
			}
			foreach (SandwichStackLayer layer in fillings)
			{
				if (layer != null && layer.piece == piece && layer.render != null)
				{
					return true;
				}
			}
			return false;
		}

		public override void Display(PieceSet pieces)
		{
			KillAnim();
			_layers.Clear();
			foreach (SandwichStackLayer layer in fillings)
			{
				if (layer != null && layer.render != null)
				{
					layer.render.gameObject.SetActive(false);
				}
			}

			int bottomCount = pieces[0];
			if (bottom != null)
			{
				bottom.gameObject.SetActive(bottomCount > 0);
			}

			float y = rootOffset;
			FillingLayerCount = 0;
			int order = 1;
			SandwichStackLayer[] ordered = OrderedFillings;
			if (ordered.Length >= 1)
			{
				order = 0;
				foreach (SandwichStackLayer layer in ordered)
				{
					if (layer == null || layer.render == null)
					{
						continue;
					}
					if (pieces[(int)layer.piece] == 0)
					{
						continue;
					}
					layer.render.gameObject.SetActive(true);
					FillingLayerCount++;
					Transform tf = layer.render.transform;
					y += layer.bottomOffset;
					Vector3 lp = tf.localPosition;
					tf.localPosition = new Vector3(lp.x, y, lp.z);
					_layers.Add((tf, y));
					y += layer.height + layer.topOffset;
					order++;
					layer.render.sortingOrder = order;
				}
				order++;
			}

			if (top == null)
			{
				return;
			}
			Transform topTf = top.transform;
			Vector3 tp = topTf.localPosition;
			y += topOffset;
			topTf.localPosition = new Vector3(tp.x, y, tp.z);
			top.sortingOrder = order;
			top.gameObject.SetActive(bottomCount > 0);
			if (bottomCount < 1)
			{
				return;
			}
			_layers.Add((topTf, y));
		}

		private void Awake()
		{
			CaptureBaseScale();
		}

		private void CaptureBaseScale()
		{
			if (_baseScaleCaptured)
			{
				return;
			}
			// TODO(unrecovered): only the x component is clearly from transform.localScale in the pseudocode;
			// y/z come from unrecovered caller arguments. Full localScale is captured here.
			_baseScale = transform.localScale;
			_baseScaleCaptured = true;
		}

		public override void PlayAssembleAnim()
		{
			// TODO(unrecovered): the DOTween sequence body (squash/pop/spread/fall per layer, using
			// _layers, spreadGap and the _anim completion callback) was not recovered in this pass.
		}

		private void KillAnim()
		{
			if (_anim != null)
			{
				_anim.Kill();
			}
			_anim = null;
			transform.DOKill();
			if (_baseScaleCaptured)
			{
				transform.localScale = _baseScale;
			}
			foreach ((Transform tf, float restY) in _layers)
			{
				if (tf != null)
				{
					tf.DOKill();
				}
			}
		}

		private void TestFillings(int count = 8)
		{
			// TODO(unrecovered): debug helper body (fills test layers up to count) not recovered in this pass.
		}

		public override bool TryGetBounds(out Bounds bounds)
		{
			Bounds? combined = null;
			if (fillings != null)
			{
				foreach (SandwichStackLayer layer in fillings)
				{
					if (layer != null)
					{
						Encapsulate(ref combined, layer.render);
					}
				}
				Encapsulate(ref combined, bottom);
				Encapsulate(ref combined, top);
			}
			if (combined.HasValue)
			{
				bounds = combined.Value;
				return true;
			}
			bounds = default;
			return false;
		}

		private static void Encapsulate(ref Bounds? combined, SpriteRenderer render)
		{
			if (render == null || !render.gameObject.activeInHierarchy)
			{
				return;
			}
			if (!combined.HasValue)
			{
				combined = render.bounds;
				return;
			}
			Bounds b = combined.Value;
			b.Encapsulate(render.bounds);
			combined = b;
		}
	}
}
