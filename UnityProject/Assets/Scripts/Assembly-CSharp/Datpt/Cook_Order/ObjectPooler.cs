using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Utilities;

namespace Datpt.Cook_Order
{
	public class ObjectPooler : MonoSingleton<ObjectPooler>
	{
		public float delayClear = 600f;

		private Dictionary<string, Pooling> dicPooling;

		private Dictionary<string, float> dicCountDown;

		private float tickTimer;

		private float tickInterval = 1f;

		protected override void Awake()
		{
			base.Awake();
			dicPooling = new Dictionary<string, Pooling>();
			dicCountDown = new Dictionary<string, float>();
		}

		private void OnTick()
		{
			foreach (string key in dicPooling.Keys.ToList())
			{
				dicCountDown[key] = dicCountDown[key] - 1f;
				if (dicCountDown[key] <= 0f)
				{
					ClearPool(key);
				}
			}
		}

		private void Update()
		{
			tickTimer += Time.deltaTime;
			if (tickInterval <= tickTimer)
			{
				tickTimer -= tickInterval;
				OnTick();
			}
			foreach (Pooling pool in dicPooling.Values)
			{
				pool.OnUpdate();
			}
		}

		public PoolingObject GetObject(PoolingObject _refPrefabs)
		{
			if (_refPrefabs == null)
			{
				return null;
			}
			string key = _refPrefabs.poolingKey;
			if (!dicPooling.ContainsKey(key))
			{
				dicPooling.Add(key, new Pooling(_refPrefabs));
				dicCountDown.Add(key, delayClear);
			}
			dicCountDown[key] = delayClear;
			return dicPooling[key].GetObject();
		}

		public void DespawnObj(PoolingObject obj)
		{
			if (obj != null)
			{
				if (!dicPooling.ContainsKey(obj.poolingKey))
				{
					Destroy(obj);
					return;
				}
				Pooling pool = dicPooling[obj.poolingKey];
				if (pool != null)
				{
					pool.SetObject(obj);
				}
			}
		}

		public void ClearAll()
		{
			foreach (Pooling pool in dicPooling.Values)
			{
				pool.ClearPool();
			}
			dicPooling.Clear();
			dicCountDown.Clear();
		}

		public void ClearPool(string key)
		{
			if (!dicPooling.ContainsKey(key))
			{
				return;
			}
			Pooling pool = dicPooling[key];
			if (pool != null)
			{
				pool.ClearPool();
				dicPooling.Remove(key);
				dicCountDown.Remove(key);
			}
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
