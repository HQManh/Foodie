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
		private int amountEmit = 1;

		[SerializeField]
		private float _distance = 0.5f;

		[SerializeField]
		private bool isAllowRoll = true;

		private Vector3 _lastSpawnPosition;

		private bool _hasLastPosition;

		public WeatherEffect FootprintType => footprintType;

		public ParticleSystem ParticleSystem => _particleSystem;

		public override void PoolSetup()
		{
			_hasLastPosition = false;
		}

		private void Update()
		{
			if (!isAllowRoll)
			{
				return;
			}
			if (!_hasLastPosition)
			{
				_lastSpawnPosition = TF.position;
				_hasLastPosition = true;
				return;
			}
			Vector3 current = TF.position;
			float dx = current.x - _lastSpawnPosition.x;
			float dy = current.y - _lastSpawnPosition.y;
			Vector2 direction = new Vector2(dx, dy);
			float sqrDist = dx * dx + dy * dy;
			if (_distance * _distance <= sqrDist)
			{
				direction.Normalize();
				EmitFootprint(direction);
				_lastSpawnPosition = TF.position;
			}
		}

		private void EmitFootprint(Vector2 direction)
		{
			if (direction.x * direction.x + direction.y * direction.y < 0.0001f)
			{
				return;
			}
			ParticleSystem.EmitParams emitParams = default;
			emitParams.position = TF.position;
			emitParams.rotation = Mathf.Atan2(direction.y, -direction.x) * 57.29578f;
			if (_particleSystem != null)
			{
				_particleSystem.Emit(emitParams, amountEmit);
			}
		}

		public void SetSize(float size)
		{
			if (_particleSystem == null)
			{
				return;
			}
			ParticleSystem.MainModule main = _particleSystem.main;
			main.startSize = size;
		}
	}
}
