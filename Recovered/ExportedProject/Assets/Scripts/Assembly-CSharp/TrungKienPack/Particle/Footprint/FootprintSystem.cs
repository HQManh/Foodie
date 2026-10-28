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
		}

		public FootprintEffect Spawn(WeatherEffect type, Transform parent, float size = 0f)
		{
			return null;
		}

		public void Despawn(FootprintEffect footprint)
		{
		}
	}
}
