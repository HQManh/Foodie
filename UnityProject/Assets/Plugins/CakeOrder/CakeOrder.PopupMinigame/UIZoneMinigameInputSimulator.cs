using UnityEngine;
using UnityEngine.EventSystems;

namespace CakeOrder.PopupMinigame
{

public class UIZoneMinigameInputSimulator : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, ICakeSimulateInputEmitter
{
	private RectTransform _viewWindow;

	private Camera _mainUICamera;

	private Camera _miniSceneCamera;

	private InputMiniScene _inputCookMiniScene;

	private bool _isCalculateViewCorners;

	private Vector2 _bottomLeftViewScreenPos;

	private Vector2 _topRightViewScreenPos;

	private Vector2 _screenSizeView;

	public Vector2Int ScreenSizeView => default(Vector2Int);

	public Vector3 mousePosition => default(Vector3);

	public Vector3 mouseWorldPos => default(Vector3);

	public Vector3 deltaMousePosition => default(Vector3);

	public Vector3 deltaMouseWorldPos => default(Vector3);

	public int touchCount => 0;

	public Touch[] touches => null;

	public void SetUp(RectTransform viewWindow, Camera mainUICamera, Camera miniSceneCamera, InputMiniScene inputCookMiniScene)
	{
	}

	public void UpdateWorldViewSize()
	{
	}

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}

	public Touch GetTouch(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Touch);
	}

	private void CalculateViewWorldCorners()
	{
	}

	public Vector3 ScreenToViewportPos(Vector3 screenPos)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public Vector3 ScreenToWorldPos(Vector3 screenPos)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}
}
}
