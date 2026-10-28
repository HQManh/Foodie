using UnityEngine;

namespace TrungKienPack.Particle
{
	public struct ParticleRequest
	{
		private readonly PoolingParticle _owner;

		internal ParticleEntry Entry { get; }

		internal Vector3 Position { get; private set; }

		internal Quaternion Rotation { get; private set; }

		internal Transform Parent { get; private set; }

		internal bool WorldSpace { get; private set; }

		internal bool HasPose { get; private set; }

		internal float ScaleFactor { get; private set; }

		internal float SfxVolume { get; private set; }

		internal ParticleSystem.MinMaxGradient? Tint { get; private set; }

		internal ParticleRequest(PoolingParticle owner, ParticleEntry entry)
		{
			_owner = null;
			Entry = null;
			Position = default;
			Rotation = default;
			Parent = null;
			WorldSpace = false;
			HasPose = false;
			ScaleFactor = 0f;
			SfxVolume = 0f;
			Tint = null;
		}

		public ParticleRequest At(Vector3 position)
		{
			return default;
		}

		public ParticleRequest At(Vector3 position, Quaternion rotation)
		{
			return default;
		}

		public ParticleRequest Under(Transform parent, bool worldSpace = false)
		{
			return default;
		}

		public ParticleRequest Scale(float factor)
		{
			return default;
		}

		public ParticleRequest Volume(float volume)
		{
			return default;
		}

		public ParticleRequest SetColor(ParticleSystem.MinMaxGradient colors)
		{
			return default;
		}

		public BaseParticleElement Play()
		{
			return null;
		}
	}
}
