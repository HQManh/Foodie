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

		private Vector3 _worldScale = Vector3.one;

		private bool _worldScaleCaptured;

		public int ColorIndex { get; private set; }

		private void Awake()
		{
			CaptureWorldScale();
		}

		private void CaptureWorldScale()
		{
			if (!_worldScaleCaptured)
			{
				_worldScale = base.transform.lossyScale;
				_worldScaleCaptured = true;
			}
		}

		public void Init(int colorIndex, Sprite sprite)
		{
			CaptureWorldScale();
			ColorIndex = colorIndex;
			if ((bool)spriteRenderer && (bool)sprite)
			{
				spriteRenderer.sprite = sprite;
			}
			KillFly();
			ApplyWorldScale();
		}

		public void SetAnchor(Transform anchor)
		{
			KillFly();
			base.transform.SetParent(anchor, worldPositionStays: false);
			base.transform.localPosition = (anchor ? localOffset : base.transform.localPosition);
			base.transform.localRotation = Quaternion.identity;
			ApplyWorldScale();
		}

		public void FlyTo(Vector3 worldPos, float duration, Action onArrived)
		{
			KillFly();
			base.transform.SetParent(null, worldPositionStays: true);
			ApplyWorldScale();
			_flyTween = base.transform.DOMove(worldPos, duration).SetEase(Ease.InOutQuad).OnComplete(delegate
			{
				_flyTween = null;
				onArrived?.Invoke();
			});
		}

		private void ApplyWorldScale()
		{
			Transform parent = base.transform.parent;
			if (!parent)
			{
				base.transform.localScale = _worldScale;
				return;
			}
			Vector3 lossyScale = parent.lossyScale;
			float x = ((lossyScale.x == 0f) ? 1f : lossyScale.x);
			float y = ((lossyScale.y == 0f) ? 1f : lossyScale.y);
			float z = ((lossyScale.z == 0f) ? 1f : lossyScale.z);
			base.transform.localScale = new Vector3(_worldScale.x / x, _worldScale.y / y, _worldScale.z / z);
		}

		public void Despawn()
		{
			KillFly();
			KeyManager.Release(this);
		}

		private void KillFly()
		{
			if (_flyTween != null && _flyTween.IsActive())
			{
				_flyTween.Kill();
			}
			_flyTween = null;
		}
	}
}
