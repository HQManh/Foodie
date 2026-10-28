using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class NigiriResultMergeAnim : ItemResultMergeAnim
	{
		[SerializeField]
		private FlexibleNigiriDisplay display;

		[SerializeField]
		[Min(0f)]
		private float interval = 0.12f;

		[SerializeField]
		[Min(0f)]
		private float fallHeight = 0.6f;

		[SerializeField]
		[Min(0f)]
		private float fallDuration = 0.2f;

		[SerializeField]
		private Ease fallEase = Ease.InQuad;

		[SerializeField]
		[Min(0f)]
		private float landSquash = 0.15f;

		[SerializeField]
		[Min(0f)]
		private float landDuration = 0.25f;

		[SerializeField]
		private AudioClip landSfx;

		private const float TimeoutMargin = 0.5f;

		private readonly SushiDropPlayer _drop = new SushiDropPlayer();

		private readonly List<Transform> _pieces = new List<Transform>();

		private SushiDropPlayer Drop
		{
			get
			{
				_drop.Interval = interval;
				_drop.FallHeight = fallHeight;
				_drop.FallDuration = fallDuration;
				_drop.FallEase = fallEase;
				_drop.LandSquash = landSquash;
				_drop.LandDuration = landDuration;
				_drop.LandSfx = landSfx;
				return _drop;
			}
		}

		public override bool Handles(string ingBaseId)
		{
			if (display != null && SushiPieceTable.TryGetPiece(ingBaseId, out var piece))
			{
				if ((int)piece == 0)
				{
					return true;
				}
				return display.IsMain(piece);
			}
			return false;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			SushiDropPlayer drop = Drop;
			int num = ((display != null) ? (display.SlotCount * 2 - 1) : (-1));
			num = Mathf.Max(num, 0);
			return drop.Interval * (float)num + drop.FallDuration + drop.LandDuration + 0.5f;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
			if (result is IFlexiblePieceItem flexiblePieceItem)
			{
				display.Display(flexiblePieceItem.Pieces);
			}
			_pieces.Clear();
			for (int i = 0; i < display.SlotCount; i++)
			{
				_pieces.Add(display.RiceOf(i));
				_pieces.Add(display.MainOf(i));
			}
			Drop.Play(_pieces.ToArray(), onComplete);
		}

		private void OnDisable()
		{
			_drop.Kill();
		}
	}
}
