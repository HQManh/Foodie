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
		private float _duration = 1f;

		[SerializeField]
		private float _multi = 1f;

		[SerializeField]
		private Vector3 _initialScale = Vector3.one;

		private Tween _tween;

		public Transform TF
		{
			get
			{
				if (tf == null)
				{
					tf = transform;
				}
				return tf;
			}
		}

		public void Play()
		{
			if (_tween != null)
			{
				_tween.Kill();
			}
			_tween = DOVirtual.Float(0f, 1f, _duration, Evaluate)
				.SetEase(Ease.Linear)
				.OnComplete(() => _tween = null);
		}

		private void Evaluate(float t)
		{
			if (_curve == null)
			{
				return;
			}
			float value = _curve.Evaluate(t) * _multi;
			Transform target = TF;
			if (target == null)
			{
				return;
			}
			target.localScale = new Vector3(value * _initialScale.x, value * _initialScale.y, value * _initialScale.z);
		}

		private void OnDestroy()
		{
			if (_tween != null)
			{
				_tween.Kill();
			}
		}
	}
}
