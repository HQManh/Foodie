using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace TrungKienPack.Particle
{
	public class PoolingParticle : MonoSingleton<PoolingParticle>
	{
		[SerializeField]
		private ParticleSO particleSO;

		private Dictionary<int, PoolCtrlObject> dicObjPool;

		public ParticleRequest Spawn(string id)
		{
			return default;
		}

		public ParticleRequest Spawn(ParticleType type)
		{
			return default;
		}

		public BaseParticleElement PrefabOf(ParticleType type)
		{
			return null;
		}

		internal BaseParticleElement Play(in ParticleRequest request)
		{
			return null;
		}

		private BaseParticleElement SpawnFrom(PoolCtrlObject pool, in ParticleRequest request)
		{
			return null;
		}

		private PoolCtrlObject PoolOf(IPoolingElement prefab)
		{
			return null;
		}

		private void Despawn(BaseParticleElement poolObj)
		{
		}
	}
}
