using UnityEngine;

namespace Utilities
{

[ExecuteInEditMode]
[RequireComponent(typeof(ParticleSystem))]
public class DemoParticleOnStartEditor : MonoBehaviour
{
	[SerializeField]
	private Vector3 _nameOffset;

	[SerializeField]
	private float _simulateTime;
}
}
