using UnityEngine;

namespace Utilities
{

public class LoopAnimTransformScaleSeparatedAxis : MonoBehaviour
{
	public bool isUseScaleTime;

	public Vector3 cycleDuration;

	public AnimationCurve curveX;

	public AnimationCurve curveY;

	public AnimationCurve curveZ;

	public bool isRandomOffset;

	public Vector3 timeOffset;

	private Transform _transform;

	private Vector3 _originScale;

	private Vector3 _targetScale;

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
