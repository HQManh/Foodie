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

	public float scaleMul = 1f;

	[Tooltip("The anchor position to match camera with quad. For example, set anchor = (0,0) for camera always at center of quad, or set anchor = (0,-1) to make bottom edge of camera match with bottom edge of quad, or set anchor = (1,1) to make top right of camera match with top right of quad")]
	public Vector2 anchor;

	private bool _adjusted;

	private void Start()
	{
		_adjusted = AdjustCamera();
	}

	private void Update()
	{
		if (_adjusted)
		{
			return;
		}
		_adjusted = AdjustCamera();
	}

	public Rect GetScreenWorldBoundary()
	{
		// Inferred from the decompiled camera math; not verified in Unity.
		Camera cam = Camera.main;
		if (cam == null)
		{
			return default;
		}
		Vector3 camPos = cam.transform.position;
		float halfH = cam.orthographic ? cam.orthographicSize : Mathf.Abs(camPos.z - quadTransform.position.z) * Mathf.Tan(cam.fieldOfView * 0.5f * Mathf.Deg2Rad);
		float halfW = halfH * cam.aspect;
		return new Rect(camPos.x - halfW, camPos.y - halfH, halfW * 2f, halfH * 2f);
	}

	public bool AdjustCamera()
	{
		// Inferred from the decompiled camera math; not verified in Unity.
		Camera cam = Camera.main;
		if (cam == null || quadTransform == null)
		{
			return false;
		}
		if (cam.pixelWidth < 1 || cam.pixelHeight < 1)
		{
			return false;
		}
		float aspect = cam.aspect;
		if (!IsValidPositive(aspect))
		{
			return false;
		}
		Vector3 quadScale = quadTransform.localScale;
		if (!IsValidPositive(quadScale.x) || !IsValidPositive(quadScale.y))
		{
			return false;
		}

		float quadWidth = quadScale.x;
		float quadHeight = quadScale.y;
		Vector3 quadPos = quadTransform.position;
		bool quadIsTall = quadHeight / quadWidth > aspect;
		bool fitHeight = scaleMode == ScaleMode.Fit ? quadIsTall : !quadIsTall;

		Transform camT = cam.transform;
		Vector3 camPos = camT.position;
		float halfVisH;
		if (cam.orthographic)
		{
			halfVisH = (fitHeight ? quadHeight * 0.5f : quadWidth * 0.5f / aspect) * scaleMul;
			cam.orthographicSize = halfVisH;
		}
		else
		{
			float halfNeeded = (fitHeight ? quadHeight * 0.5f : quadWidth * 0.5f / aspect) * scaleMul;
			float distance = halfNeeded / Mathf.Tan(cam.fieldOfView * 0.5f * Mathf.Deg2Rad);
			camPos.z = quadPos.z - distance;
			halfVisH = halfNeeded;
		}
		float halfVisW = halfVisH * aspect;

		camT.position = new Vector3(
			quadPos.x + anchor.x * (quadWidth * 0.5f - halfVisW),
			quadPos.y + anchor.y * (quadHeight * 0.5f - halfVisH),
			camPos.z);
		return true;
	}

	private static bool IsValidPositive(float value)
	{
		return value > 0f && !float.IsInfinity(value);
	}

	private static bool IsValid(Vector3 v)
	{
		return float.IsFinite(v.x) && float.IsFinite(v.y) && float.IsFinite(v.z);
	}

	private void OnDrawGizmosSelected()
	{
		if (quadTransform == null)
		{
			return;
		}
		Gizmos.color = Color.green;
		Gizmos.DrawWireCube(quadTransform.position, quadTransform.localScale);
		// TODO(unrecovered): pseudocode also draws a point via Utilities.GizmoUtility.DrawPoint using constant y/z terms that are not recovered; point omitted.
	}
}
