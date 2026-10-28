using UnityEngine;

namespace Utilities
{

public class LoopAnimTransformFloating : MonoBehaviour
{
	public float cycleDuration;

	public float positionCurveMul;

	public AnimationCurve positionCurveX;

	public AnimationCurve positionCurveY;

	public bool isUseScaleTime;

	public bool isRandomTimeOffset;

	public Vector2 timeOffset;

	private Transform _transform;

	private Vector3 _startPos;

	private void OnEnable()
	{
	}

	public void ResetFloatingAnchor()
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
