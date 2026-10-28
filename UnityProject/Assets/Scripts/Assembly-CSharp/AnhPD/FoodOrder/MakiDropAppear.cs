using System;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class MakiDropAppear : ItemResultMergeAnim
	{
		[Tooltip("Các cục maki, theo thứ tự rơi.")]
		[SerializeField]
		private Transform[] pieces;

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
			if (pieces.Length != 0 && SushiPieceTable.TryGetPiece(ingBaseId, out var piece))
			{
				return (uint)piece < 2u;
			}
			return false;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			SushiDropPlayer drop = Drop;
			int num = Mathf.Max(pieces.Length - 1, 0);
			return drop.LandDuration + drop.FallDuration + drop.Interval * (float)num + 0.5f;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
			Drop.Play(pieces, onComplete);
		}

		private void OnDisable()
		{
			_drop.Kill();
		}
	}
}
