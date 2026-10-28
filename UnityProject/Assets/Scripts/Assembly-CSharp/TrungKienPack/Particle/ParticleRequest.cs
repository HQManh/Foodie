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
			// TODO(unrecovered): the pseudocode initialises Position and Rotation from unnamed static blocks (DAT_0918cbd0 + 0xb8, DAT_091898c0 + 0xb8); only the zero/one defaults are known.
			_owner = owner;
			Entry = entry;
			Position = default;
			Rotation = default;
			Parent = null;
			WorldSpace = false;
			HasPose = false;
			ScaleFactor = 1f;
			SfxVolume = 1f;
			Tint = null;
		}

		public ParticleRequest At(Vector3 position)
		{
			Position = position;
			HasPose = true;
			return this;
		}

		public ParticleRequest At(Vector3 position, Quaternion rotation)
		{
			Position = position;
			Rotation = rotation;
			HasPose = true;
			return this;
		}

		public ParticleRequest Under(Transform parent, bool worldSpace = false)
		{
			Parent = parent;
			WorldSpace = worldSpace;
			return this;
		}

		public ParticleRequest Scale(float factor)
		{
			ScaleFactor = factor;
			return this;
		}

		public ParticleRequest Volume(float volume)
		{
			SfxVolume = volume;
			return this;
		}

		public ParticleRequest SetColor(ParticleSystem.MinMaxGradient colors)
		{
			Tint = colors;
			return this;
		}

		public BaseParticleElement Play()
		{
			if (_owner == null)
			{
				return null;
			}
			return _owner.Play(this);
		}
	}
}
