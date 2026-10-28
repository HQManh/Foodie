using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Pooling
	{
		public Queue<PoolingObject> pool;

		private List<PoolingObject> cachedObj;

		private PoolingObject refPrefabs;

		public Pooling(PoolingObject _refPrefabs)
		{
			refPrefabs = _refPrefabs;
			pool = new Queue<PoolingObject>();
			cachedObj = new List<PoolingObject>();
		}

		public PoolingObject GetObject()
		{
			if (pool.Count > 0)
			{
				return pool.Dequeue();
			}
			// TODO(unrecovered): instantiates refPrefabs through unnamed helper FUN_04c350c8; the Instantiate mapping is not confirmed by the stubs.
			return null;
		}

		public void SetObject(PoolingObject obj)
		{
			cachedObj.Add(obj);
		}

		public void OnUpdate()
		{
			foreach (PoolingObject obj in cachedObj)
			{
				if (!pool.Contains(obj))
				{
					pool.Enqueue(obj);
				}
			}
			cachedObj.Clear();
		}

		public void ClearPool()
		{
			while (pool.Count > 0)
			{
				Object.Destroy(pool.Dequeue());
			}
		}
	}
}
