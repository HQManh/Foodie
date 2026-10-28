using System;
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
		}

		public virtual void Despawn()
		{
		}

		protected virtual void OnDisable()
		{
		}
	}
}
