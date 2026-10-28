using UnityEngine;

namespace Utilities
{

public class LoopAnimUIFloating : MonoBehaviour
{
	public Vector2 cycleDuration;

	public float positionCurveMul;

	public AnimationCurve positionCurveX;

	public AnimationCurve positionCurveY;

	public bool isUseScaleTime;

	public bool isRandomTimeOffset;

	public Vector2 timeOffset;

	private RectTransform _rectTransform;

	private Vector2 _originAnchoredPos;

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
