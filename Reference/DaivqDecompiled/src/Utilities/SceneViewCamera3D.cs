using UnityEngine;

namespace Utilities;

[RequireComponent(typeof(Camera))]
public class SceneViewCamera3D : MonoBehaviour
{
	[SerializeField]
	private float initialSpeed;

	[SerializeField]
	private float increaseSpeed;

	[SerializeField]
	private bool isEnabled;

	[SerializeField]
	private bool allowMovement;

	[SerializeField]
	private bool allowRotation;

	[SerializeField]
	private bool allowRotationOnRightClick;

	[SerializeField]
	private bool cursorVisibleByDefault;

	[SerializeField]
	private bool allowMiddleClickPanning;

	[Range(1f, 360f)]
	[SerializeField]
	private float middleClickPanningSpeed;

	[SerializeField]
	private KeyCode forwardButton;

	[SerializeField]
	private KeyCode backwardButton;

	[SerializeField]
	private KeyCode rightButton;

	[SerializeField]
	private KeyCode leftButton;

	[SerializeField]
	private KeyCode ascendButton;

	[SerializeField]
	private KeyCode descendButton;

	[SerializeField]
	private float cursorSensitivity;

	[SerializeField]
	private bool cursorToggleAllowed;

	[SerializeField]
	private KeyCode cursorToggleButton;

	private float currentSpeed;

	private bool moving;

	private bool togglePressed;

	private Vector3 currCameraPosition;

	[Range(-360f, 360f)]
	[SerializeField]
	private float minAngle;

	[Range(-360f, 360f)]
	[SerializeField]
	private float maxAngle;

	private void OnEnable()
	{
	}

	private void Update()
	{
	}

	private void CheckMove(KeyCode keyCode, ref Vector3 deltaPosition, Vector3 directionVector, bool forceForward, bool forceBackward)
	{
	}
}
