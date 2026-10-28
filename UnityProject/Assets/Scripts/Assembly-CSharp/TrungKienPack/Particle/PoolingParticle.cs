using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace TrungKienPack.Particle
{
	public class PoolingParticle : MonoSingleton<PoolingParticle>
	{
		[SerializeField]
		private ParticleSO particleSO;

		private Dictionary<int, PoolCtrlObject> dicObjPool = new Dictionary<int, PoolCtrlObject>();

		public ParticleRequest Spawn(string id)
		{
			if (particleSO == null)
			{
				return default;
			}
			return new ParticleRequest(this, particleSO.Resolve(id));
		}

		public ParticleRequest Spawn(ParticleType type)
		{
			if (particleSO == null)
			{
				return default;
			}
			return new ParticleRequest(this, particleSO.Resolve(type));
		}

		public BaseParticleElement PrefabOf(ParticleType type)
		{
			if (particleSO == null)
			{
				return null;
			}
			ParticleEntry entry = particleSO.Resolve(type);
			return entry != null ? entry.prefab as BaseParticleElement : null;
		}

		internal BaseParticleElement Play(in ParticleRequest request)
		{
			ParticleEntry entry = request.Entry;
			if (entry == null || entry.prefab == null)
			{
				return null;
			}
			PoolCtrlObject pool = PoolOf(entry.prefab);
			if (pool == null)
			{
				return null;
			}
			BaseParticleElement element = SpawnFrom(pool, request);
			if (element == null)
			{
				return null;
			}
			Transform tf = element.TF;
			Transform prefabTf = entry.prefab.TF;
			if (prefabTf != null && tf != null)
			{
				tf.localScale = prefabTf.localScale * request.ScaleFactor;
			}
			if (request.Tint.HasValue)
			{
				element.InitColor(request.Tint.Value);
			}
			else
			{
				element.ResetColor();
			}
			element.Play(() => Despawn(element), request.SfxVolume);
			return element;
		}

		private BaseParticleElement SpawnFrom(PoolCtrlObject pool, in ParticleRequest request)
		{
			if (pool == null)
			{
				return null;
			}
			if (request.Parent == null)
			{
				return pool.Spawn<BaseParticleElement>(request.Position, request.Rotation);
			}
			if (!request.HasPose)
			{
				return pool.Spawn<BaseParticleElement>(request.Parent);
			}
			return pool.Spawn<BaseParticleElement>(request.Position, request.Rotation, request.Parent, request.WorldSpace);
		}

		private PoolCtrlObject PoolOf(IPoolingElement prefab)
		{
			if (prefab == null)
			{
				return null;
			}
			int id = prefab.TF.GetInstanceID();
			PoolCtrlObject pool;
			if (!dicObjPool.TryGetValue(id, out pool))
			{
				pool = new PoolCtrlObject(prefab);
				dicObjPool.Add(id, pool);
			}
			return pool;
		}

		private void Despawn(BaseParticleElement poolObj)
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
	}
}
