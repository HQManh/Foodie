using System;
using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class PoolingObject : MonoBehaviour
	{
		public string poolingKey;

		public Action _OnDespawn;

		public Action _OnSpawn;

		protected bool activing;

		public virtual void OnSpawn()
		{
			gameObject.SetActive(true);
			activing = true;
			_OnSpawn?.Invoke();
		}

		public virtual void Despawn()
		{
			activing = false;
			GameObject go = gameObject;
			if (go != null)
			{
				go.SetActive(false);
				// TODO(unrecovered): returns this object to its pool via helper FUN_04c38428 (Pooler return), owner not in stubs.
				_OnDespawn?.Invoke();
			}
		}

		protected virtual void OnDisable()
		{
			StopAllCoroutines();
			transform.DOKill();
		}
	}
}
