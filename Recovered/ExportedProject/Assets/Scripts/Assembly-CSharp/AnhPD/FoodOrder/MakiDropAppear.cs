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
		private float interval;

		[SerializeField]
		[Min(0f)]
		private float fallHeight;

		[SerializeField]
		[Min(0f)]
		private float fallDuration;

		[SerializeField]
		private Ease fallEase;

		[SerializeField]
		[Min(0f)]
		private float landSquash;

		[SerializeField]
		[Min(0f)]
		private float landDuration;

		[SerializeField]
		private AudioClip landSfx;

		private const float TimeoutMargin = 0.5f;

		private readonly SushiDropPlayer _drop;

		private SushiDropPlayer Drop => null;

		public override bool Handles(string ingBaseId)
		{
			return false;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			return 0f;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
		}

		private void OnDisable()
		{
		}
	}
}
