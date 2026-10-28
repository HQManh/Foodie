using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack
{
	public class PoolCtrlObject
	{
		private IPoolingElement prefab;

		private Queue<IPoolingElement> queueInActive;

		private List<IPoolingElement> lstActive;

		public PoolCtrlObject(IPoolingElement prefab)
		{
		}

		private IPoolingElement Spawn()
		{
			return null;
		}

		public T Spawn<T>(Vector3 position, Quaternion rotation) where T : IPoolingElement
		{
			return default;
		}

		public T Spawn<T>(Vector3 position, Quaternion rotation, Transform parent, bool isWorldSpace) where T : IPoolingElement
		{
			return default;
		}

		public T Spawn<T>(Transform parent) where T : IPoolingElement
		{
			return default;
		}

		public void DeSpawn(IPoolingElement element)
		{
		}

		public void Collect()
		{
		}

		public void Release()
		{
		}
	}
}
