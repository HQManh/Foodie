using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace TrungKienPack.Particle
{
	[CreateAssetMenu(fileName = "ParticleSO", menuName = "ScriptableObjects/KienPack/Particle")]
	public class ParticleSO : SerializedScriptableObject
	{
		public List<ParticleEntry> particles = new List<ParticleEntry>();

		public IPoolingElement prefabVFXTest;

		private ParticleEntry _fallback;

		private Dictionary<string, ParticleEntry> _byId;

		private Dictionary<ParticleType, ParticleEntry> _byType;

		private ParticleEntry Fallback
		{
			get
			{
				if (_fallback == null)
				{
					_fallback = new ParticleEntry();
					_fallback.prefab = prefabVFXTest;
				}
				return _fallback;
			}
		}

		public ParticleEntry Resolve(string id)
		{
			ParticleEntry entry = Find(id);
			if (entry != null)
			{
				return entry;
			}
			WarnMissing(id);
			return Fallback;
		}

		public ParticleEntry Resolve(ParticleType type)
		{
			ParticleEntry entry = Find(type);
			if (entry != null)
			{
				return entry;
			}
			WarnMissing(type);
			return Fallback;
		}

		private ParticleEntry Find(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return null;
			}
			EnsureMaps();
			ParticleEntry entry;
			return _byId.TryGetValue(id, out entry) ? entry : null;
		}

		private ParticleEntry Find(ParticleType type)
		{
			if (type == ParticleType.None)
			{
				return null;
			}
			EnsureMaps();
			ParticleEntry entry;
			return _byType.TryGetValue(type, out entry) ? entry : null;
		}

		private void WarnMissing(object key)
		{
			string message = string.Format("No particle for key {0} in {1}" /* literal recovered by guess */, key, name);
			Debug.LogWarning(message, this);
		}

		private void EnsureMaps()
		{
			if (_byId != null)
			{
				return;
			}
			_byId = new Dictionary<string, ParticleEntry>();
			_byType = new Dictionary<ParticleType, ParticleEntry>();
			foreach (ParticleEntry entry in particles)
			{
				if (entry == null || entry.prefab == null)
				{
					continue;
				}
				if (!string.IsNullOrEmpty(entry.id))
				{
					if (_byId.ContainsKey(entry.id))
					{
						Debug.LogError("Duplicate particle id " + entry.id /* literal recovered by guess */, this);
					}
					_byId[entry.id] = entry;
				}
				if (entry.type != ParticleType.None)
				{
					if (_byType.ContainsKey(entry.type))
					{
						Debug.LogError(string.Format("Duplicate particle type {0}" /* literal recovered by guess */, entry.type), this);
					}
					_byType[entry.type] = entry;
				}
			}
		}

		private void InvalidateMaps()
		{
			_byId = null;
			_fallback = null;
		}

		private void OnEnable()
		{
			_byId = null;
			_fallback = null;
		}

		private void OnValidate()
		{
			_byId = null;
			_fallback = null;
		}
	}
}
