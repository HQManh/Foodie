using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.PopupMinigame;

public class InputMiniScene : MonoBehaviour
{
	private static InputMiniScene _instance;

	private ICakeSimulateInputEmitter _inputEmitter;

	[SerializeField]
	private Camera _camera;

	private PhysicsScene2D _physicsScene;

	private List<CakeMinigameRaycastReceiver> _receiversMouseDown;

	public static bool IsSimulateInput => false;

	public static InputMiniScene Instance => null;

	public static Vector3 mousePosition => default(Vector3);

	public static Vector3 mouseWorldPos => default(Vector3);

	public static Vector3 deltaMousePosition => default(Vector3);

	public static Vector3 deltaMouseWorldPos => default(Vector3);

	public static int touchCount => 0;

	public static bool multiTouchEnabled
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static Touch[] touches => null;

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetInputEmitter(ICakeSimulateInputEmitter simulateInputEmitter)
	{
	}

	public static Touch GetTouch(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Touch);
	}

	public Vector3 ScreenToWorldPos(Vector3 screenPos)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public void TriggerRaycastInputMouseDown(Vector3 viewportPos)
	{
	}

	public void TriggerInputMouseUp()
	{
	}
}
