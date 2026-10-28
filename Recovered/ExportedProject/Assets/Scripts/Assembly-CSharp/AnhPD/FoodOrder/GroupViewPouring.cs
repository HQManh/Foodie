using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewPouring : StationGroupView
	{
		[SerializeField]
		private Transform bottle;

		[SerializeField]
		private SpriteRenderer waterCup;

		[SerializeField]
		private SpriteRenderer waterPour;

		[SerializeField]
		private AudioSource sfxPouring;

		[SerializeField]
		private Vector3 offset;

		[SerializeField]
		private float minHeight;

		[SerializeField]
		private float maxHeight;

		[SerializeField]
		private float angle;

		private Sequence _pourSeq;

		[SerializeField]
		private Vector3 startPos;

		[SerializeField]
		private Vector3 startRot;

		public override void Play(float duration)
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private Tween GetMoveUpTween(float durationRate = 1f)
		{
			return null;
		}

		private Tween GetMoveDownTween(float durationRate = 1f)
		{
			return null;
		}

		private Tween GetPourTween(float duration)
		{
			return null;
		}

		private Tween PlayPouringTween()
		{
			return null;
		}

		public override void Stop()
		{
		}

		private void SetHeight(SpriteRenderer sr, float height)
		{
		}

		private void Init()
		{
		}

		private void MoveToRoot()
		{
		}

		private void MoveToTarget()
		{
		}
	}
}
