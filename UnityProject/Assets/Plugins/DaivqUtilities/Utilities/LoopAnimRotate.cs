using UnityEngine;

namespace Utilities
{

public class LoopAnimRotate : MonoBehaviour
{
	public bool isUseScaleTime;

	public float cycleDuration;

	public float multiplier;

	public AnimationCurve curveRotate;

	public float timeOffset;

	private Transform _transform;

	private float _originEulerZ;

	private Vector3 _targetEuler;

	private void Awake()
	{
	}

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
