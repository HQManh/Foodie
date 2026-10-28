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
			return 0f;
		}

		public void Play(Transform[] pieces, Action onComplete)
		{
		}

		public void Kill()
		{
		}
	}
}
