using System;
using DG.Tweening;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	public class DirtyPlateCleanerItem : MonoBehaviour
	{
		[SerializeField]
		private float flyDuration = 0.45f;

		[SerializeField]
		private float jumpPower = 1.2f;

		[SerializeField]
		private Ease flyEase = Ease.InOutQuad;

		private Sequence _fly;

		public void FlyTo(Vector3 target, Action onArrived)
		{
			if (_fly != null)
			{
				_fly.Kill();
			}
			_fly = DOTween.Sequence().SetTarget(base.transform);
			_fly.Append(base.transform.DOJump(target, jumpPower, 1, flyDuration).SetEase(flyEase));
			_fly.OnComplete(delegate
			{
				_fly = null;
				onArrived?.Invoke();
				Despawn();
			});
		}

		private void OnDisable()
		{
			if (_fly != null)
			{
				_fly.Kill();
			}
			_fly = null;
		}

		private void Despawn()
		{
			if ((bool)this)
			{
				ObjectPoolDictArray.Instance.ReleaseGameObject(base.gameObject);
			}
		}
	}
}
