using System;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class KeyObject : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spriteRenderer;

		[SerializeField]
		private Vector3 localOffset;

		private Tween _flyTween;

		private Vector3 _worldScale;

		private bool _worldScaleCaptured;

		public int ColorIndex { get; private set; }

		private void Awake()
		{
		}

		private void CaptureWorldScale()
		{
		}

		public void Init(int colorIndex, Sprite sprite)
		{
		}

		public void SetAnchor(Transform anchor)
		{
		}

		public void FlyTo(Vector3 worldPos, float duration, Action onArrived)
		{
		}

		private void ApplyWorldScale()
		{
		}

		public void Despawn()
		{
		}

		private void KillFly()
		{
		}
	}
}
