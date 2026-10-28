using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack
{
	public static class PoolingSystem
	{
		private static Dictionary<int, PoolCtrlObject> dicObjPool;

		public static void Init()
		{
			dicObjPool = new Dictionary<int, PoolCtrlObject>();
		}

		public static T Spawn<T>(T poolObj, Vector3 position, Quaternion rotation) where T : IPoolingElement
		{
			return default;
		}

		public static T Spawn<T>(T poolObj, Vector3 position, Quaternion rotation, Transform parent, bool isWorldSpace) where T : IPoolingElement
		{
			return default;
		}

		public static T Spawn<T>(T poolObj, Transform parent) where T : IPoolingElement
		{
			return default;
		}

		private static int SpawnObj<T>(T poolObj) where T : IPoolingElement
		{
			return 0;
		}

		public static void Despawn(IPoolingElement poolObj)
		{
			if (poolObj == null || dicObjPool == null)
			{
				return;
			}
			int id = poolObj.InstanceID;
			if (!dicObjPool.ContainsKey(id))
			{
				Debug.LogError(string.Format("Despawn: no pool for instance {0}" /* literal recovered by guess */, id));
				return;
			}
			PoolCtrlObject pool = dicObjPool[id];
			if (pool != null)
			{
				pool.DeSpawn(poolObj);
			}
		}

		public static void Collect(IPoolingElement poolObj)
		{
			if (poolObj == null || dicObjPool == null)
			{
				return;
			}
			int id = poolObj.InstanceID;
			if (!dicObjPool.ContainsKey(id))
			{
				Debug.LogError(string.Format("Collect: no pool for instance {0}" /* literal recovered by guess */, id));
				return;
			}
			PoolCtrlObject pool = dicObjPool[id];
			if (pool != null)
			{
				pool.Collect();
			}
		}

		public static void Release(IPoolingElement poolObj)
		{
			if (poolObj == null || dicObjPool == null)
			{
				return;
			}
			int id = poolObj.InstanceID;
			if (!dicObjPool.ContainsKey(id))
			{
				Debug.LogError(string.Format("Release: no pool for instance {0}" /* literal recovered by guess */, id));
				return;
			}
			PoolCtrlObject pool = dicObjPool[id];
			if (pool != null)
			{
				pool.Release();
			}
		}

		public static void CollectAll()
		{
			if (dicObjPool == null)
			{
				return;
			}
			foreach (PoolCtrlObject pool in dicObjPool.Values)
			{
				if (pool == null)
				{
					return;
				}
				pool.Collect();
			}
		}
	}
}
