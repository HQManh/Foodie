using System.Collections.Generic;

namespace Datpt.Cook_Order
{
	public class Pooling
	{
		public Queue<PoolingObject> pool;

		private List<PoolingObject> cachedObj;

		private PoolingObject refPrefabs;

		public Pooling(PoolingObject _refPrefabs)
		{
		}

		public PoolingObject GetObject()
		{
			return null;
		}

		public void SetObject(PoolingObject obj)
		{
		}

		public void OnUpdate()
		{
		}

		public void ClearPool()
		{
		}
	}
}
