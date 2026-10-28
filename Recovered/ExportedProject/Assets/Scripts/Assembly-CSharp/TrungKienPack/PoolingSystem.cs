using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack
{
	public static class PoolingSystem
	{
		private static Dictionary<int, PoolCtrlObject> dicObjPool;

		public static void Init()
		{
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
		}

		public static void Collect(IPoolingElement poolObj)
		{
		}

		public static void Release(IPoolingElement poolObj)
		{
		}

		public static void CollectAll()
		{
		}
	}
}
