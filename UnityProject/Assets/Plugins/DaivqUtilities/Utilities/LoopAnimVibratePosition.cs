using UnityEngine;

namespace Utilities
{

public class LoopAnimVibratePosition : MonoBehaviour
{
	public float amplitude;

	public float frequency;

	private Vector3 initialPosition;

	private float randomOffsetX;

	private float randomOffsetY;

	private Transform cachedTransform;

	private void OnEnable()
	{
	}

	private void Update()
	{
	}

	private void OnDisable()
	{
	}
}
}
