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
			// Reconstructed: pieces drop in one after another, land with a squash punch, then onComplete fires.
			Kill();
			if (pieces == null || pieces.Length == 0)
			{
				onComplete?.Invoke();
				return;
			}
			_pieces = pieces;
			_restPos = new Vector3[pieces.Length];
			_restScale = new Vector3[pieces.Length];
			_restActive = new bool[pieces.Length];
			_sequence = DOTween.Sequence();
			for (int i = 0; i < pieces.Length; i++)
			{
				Transform piece = pieces[i];
				if (piece == null)
				{
					continue;
				}
				_restPos[i] = piece.localPosition;
				_restScale[i] = piece.localScale;
				_restActive[i] = piece.gameObject.activeSelf;
				piece.gameObject.SetActive(false);
			}
			for (int i = 0; i < pieces.Length; i++)
			{
				Transform piece = pieces[i];
				if (piece == null)
				{
					continue;
				}
				int index = i;
				Vector3 rest = _restPos[i];
				float start = Interval * i;
				_sequence.InsertCallback(start, () =>
				{
					piece.localPosition = rest + Vector3.up * FallHeight;
					piece.gameObject.SetActive(true);
				});
				_sequence.Insert(start, piece.DOLocalMove(rest, FallDuration).SetEase(FallEase));
				_sequence.InsertCallback(start + FallDuration, () =>
				{
					if (LandSfx != null)
					{
						AudioSource.PlayClipAtPoint(LandSfx, piece.position);
					}
				});
				_sequence.Insert(start + FallDuration, piece.DOPunchScale(Vector3.down * LandSquash, LandDuration, 1, 0f));
			}
			_sequence.OnComplete(() =>
			{
				_sequence = null;
				onComplete?.Invoke();
			});
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
