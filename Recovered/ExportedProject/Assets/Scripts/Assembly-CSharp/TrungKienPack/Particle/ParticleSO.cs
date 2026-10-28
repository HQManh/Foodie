using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace TrungKienPack.Particle
{
	[CreateAssetMenu(fileName = "ParticleSO", menuName = "ScriptableObjects/KienPack/Particle")]
	public class ParticleSO : SerializedScriptableObject
	{
		public List<ParticleEntry> particles;

		public IPoolingElement prefabVFXTest;

		private ParticleEntry _fallback;

		private Dictionary<string, ParticleEntry> _byId;

		private Dictionary<ParticleType, ParticleEntry> _byType;

		private ParticleEntry Fallback => null;

		public ParticleEntry Resolve(string id)
		{
			return null;
		}

		public ParticleEntry Resolve(ParticleType type)
		{
			return null;
		}

		private ParticleEntry Find(string id)
		{
			return null;
		}

		private ParticleEntry Find(ParticleType type)
		{
			return null;
		}

		private void WarnMissing(object key)
		{
		}

		private void EnsureMaps()
		{
		}

		private void InvalidateMaps()
		{
		}

		private void OnEnable()
		{
		}

		private void OnValidate()
		{
		}
	}
}
