using UnityEngine;

namespace Utilities
{

public interface IParticleEffect
{
	Transform Transform { get; }

	void Play();

	void Stop();

	void Clear();

	float GetSpeed();

	void SetSpeed(float speed);

	Color GetColor();

	void SetColor(Color color);

	float GetParticleSizeScale();

	void SetParticleSizeScale(float scale);
}
}
