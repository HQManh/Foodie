using UnityEngine;

namespace Utilities
{

public class CameraControlRotateAroundObject : MonoBehaviour
{
	public enum RotateMethod
	{
		Mouse,
		Touch
	}

	public Transform target;

	public Camera mainCamera;

	public float distanceBetweenCameraAndTarget;

	[Tooltip("How sensitive the mouse drag to camera rotation")]
	public Vector2 mouseRotateSpeed;

	[Tooltip("How sensitive the touch drag to camera rotation")]
	public Vector2 touchRotateSpeed;

	[Tooltip("Smaller positive value means smoother rotation, 1 means no smooth apply")]
	public float slerpValue;

	[Tooltip("How do you like to rotate the camera")]
	public RotateMethod rotateMethod;

	public FloatMulModifierWithRegisteredSource rotateSpeedMul;

	private Vector2 swipeDirection;

	private Quaternion cameraRot;

	private Touch touch;

	private float minXRotAngle;

	private float maxXRotAngle;

	private float rotX;

	private float rotY;

	[Header("Pinch Zoom")]
	public bool isAllowZoom;

	public float orthoZoomSpeed;

	public float perspectiveZoomSpeed;

	public Vector2 clampFOVZoom;

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void LateUpdate()
	{
	}
}
}
