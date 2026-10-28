using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;

namespace TrungKienPack.Particle.Footprint
{
	public class FootprintSystem : MonoBehaviour
	{
		[SerializeField]
		private FootprintEffect[] prefabs;

		private Dictionary<WeatherEffect, PoolCtrlObject> dicEffect;

		private void Awake()
		{
			dicEffect = new Dictionary<WeatherEffect, PoolCtrlObject>();
			for (int i = 0; i < prefabs.Length; i++)
			{
				FootprintEffect prefab = prefabs[i];
				dicEffect.Add(prefab.FootprintType, new PoolCtrlObject(prefab));
			}
		}

		public FootprintEffect Spawn(WeatherEffect type, Transform parent, float size = 0f)
		{
			if (dicEffect == null || !dicEffect.ContainsKey(type))
			{
				return null;
			}
			PoolCtrlObject pool = dicEffect[type];
			FootprintEffect footprint = pool.Spawn<FootprintEffect>(parent);
			if (Mathf.Abs(size) > 0.02f)
			{
				footprint.SetSize(size);
			}
			return footprint;
		}

		public void Despawn(FootprintEffect footprint)
		{
			if (footprint == null || dicEffect == null)
			{
				return;
			}
			WeatherEffect type = footprint.FootprintType;
			if (!dicEffect.ContainsKey(type))
			{
				return;
			}
			PoolCtrlObject pool = dicEffect[type];
			pool.DeSpawn(footprint);
		}
	}
}
