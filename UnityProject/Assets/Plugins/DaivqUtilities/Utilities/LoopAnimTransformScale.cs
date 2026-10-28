using UnityEngine;

namespace Utilities
{

public class LoopAnimTransformScale : MonoBehaviour
{
	public float cycleDuration;

	public AnimationCurve scaleCurve;

	public bool isUseScaleTime;

	public float timeOffset;

	private Transform _transform;

	private Vector3 _originScale;

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
