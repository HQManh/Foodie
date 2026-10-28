using System;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public sealed class SushiDropPlayer
	{
		public float Interval;

		public float FallHeight;

		public float FallDuration;

		public Ease FallEase;

		public float LandSquash;

		public float LandDuration;

		public AudioClip LandSfx;

		private Transform[] _pieces;

		private Vector3[] _restPos;

		private Vector3[] _restScale;

		private bool[] _restActive;

		private Sequence _sequence;

		public float DurationFor(int count)
		{
			return Interval * Math.Max(0, count - 1) + FallDuration + LandDuration;
		}

		public void Play(Transform[] pieces, Action onComplete)
		{
			// TODO(unrecovered): DOTween-heavy (Sequence building, InsertCallback, DOLocalMove/DOPunchScale chains and nested tween callbacks in the <>c__DisplayClass13_0/_1 closures, which have no stubs).
		}

		public void Kill()
		{
			if (_sequence != null)
			{
				_sequence.Kill();
			}
			_sequence = null;
			if (_pieces == null)
			{
				return;
			}
			for (int i = 0; i < _pieces.Length; i++)
			{
				Transform piece = _pieces[i];
				if (piece == null)
				{
					continue;
				}
				piece.localPosition = _restPos[i];
				piece.localScale = _restScale[i];
				piece.gameObject.SetActive(_restActive[i]);
			}
			_pieces = null;
		}
	}
}
