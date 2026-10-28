using CakeOrder.DataSO;
using UnityEngine;

namespace TrungKienPack.Particle.Footprint
{
	public class FootprintEffect : PoolingElement
	{
		[SerializeField]
		private WeatherEffect footprintType;

		[SerializeField]
		private ParticleSystem _particleSystem;

		[SerializeField]
		private int amountEmit;

		[SerializeField]
		private float _distance;

		[SerializeField]
		private bool isAllowRoll;

		private Vector3 _lastSpawnPosition;

		private bool _hasLastPosition;

		public WeatherEffect FootprintType => WeatherEffect.Normal;

		public ParticleSystem ParticleSystem => null;

		public override void PoolSetup()
		{
		}

		private void Update()
		{
		}

		private void EmitFootprint(Vector2 direction)
		{
		}

		public void SetSize(float size)
		{
		}
	}
}
