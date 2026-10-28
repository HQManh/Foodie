using DG.Tweening;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public class SimpleCurveScale : MonoBehaviour
	{
		private Transform tf;

		[SerializeField]
		private AnimationCurve _curve;

		[SerializeField]
		private float _duration;

		[SerializeField]
		private float _multi;

		[SerializeField]
		private Vector3 _initialScale;

		private Tween _tween;

		public Transform TF => null;

		public void Play()
		{
		}

		private void Evaluate(float t)
		{
		}

		private void OnDestroy()
		{
		}
	}
}
