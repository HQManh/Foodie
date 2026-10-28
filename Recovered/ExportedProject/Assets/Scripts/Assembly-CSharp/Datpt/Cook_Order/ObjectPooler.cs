using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace Datpt.Cook_Order
{
	public class ObjectPooler : MonoSingleton<ObjectPooler>
	{
		public float delayClear;

		private Dictionary<string, Pooling> dicPooling;

		private Dictionary<string, float> dicCountDown;

		private float tickTimer;

		private float tickInterval;

		protected override void Awake()
		{
		}

		private void OnTick()
		{
		}

		private void Update()
		{
		}

		public PoolingObject GetObject(PoolingObject _refPrefabs)
		{
			return null;
		}

		public void DespawnObj(PoolingObject obj)
		{
		}

		public void ClearAll()
		{
		}

		public void ClearPool(string key)
		{
		}

		public static T Spawn<T>(T refPrefabs, Vector3 pos, Transform parent = null) where T : PoolingObject
		{
			return null;
		}

		public static void Despawn<T>(T obj) where T : PoolingObject
		{
		}
	}
}
