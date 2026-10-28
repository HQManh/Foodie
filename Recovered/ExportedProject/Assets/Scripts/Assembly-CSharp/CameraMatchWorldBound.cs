using UnityEngine;

public class CameraMatchWorldBound : MonoBehaviour
{
	public enum ScaleMode
	{
		Fit = 0,
		Fill = 1
	}

	public Transform quadTransform;

	public ScaleMode scaleMode;

	public float scaleMul;

	[Tooltip("The anchor position to match camera with quad. For example, set anchor = (0,0) for camera always at center of quad, or set anchor = (0,-1) to make bottom edge of camera match with bottom edge of quad, or set anchor = (1,1) to make top right of camera match with top right of quad")]
	public Vector2 anchor;

	private bool _adjusted;

	private void Start()
	{
	}

	private void Update()
	{
	}

	public Rect GetScreenWorldBoundary()
	{
		return default;
	}

	public bool AdjustCamera()
	{
		return false;
	}

	private static bool IsValidPositive(float value)
	{
		return false;
	}

	private static bool IsValid(Vector3 v)
	{
		return false;
	}

	private void OnDrawGizmosSelected()
	{
	}
}
