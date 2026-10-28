using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Utilities;

[AddComponentMenu("UI/Simple Scroll-Snap")]
[RequireComponent(typeof(ScrollRect))]
public class UIScrollSnap : MonoBehaviour, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IPointerDownHandler, IPointerUpHandler
{
	public enum MovementType
	{
		Fixed,
		Free
	}

	public enum MovementAxis
	{
		Horizontal,
		Vertical
	}

	public enum Direction
	{
		Up,
		Down,
		Left,
		Right
	}

	public enum SizeControl
	{
		Manual,
		Fit
	}

	[Serializable]
	public class Margins
	{
		public float Left;

		public float Right;

		public float Top;

		public float Bottom;

		public Margins(float m)
		{
		}

		public Margins(float x, float y)
		{
		}

		public Margins(float l, float r, float t, float b)
		{
		}
	}

	public enum SnapTarget
	{
		Nearest,
		Previous,
		Next
	}

	[SerializeField]
	private MovementType movementType;

	[SerializeField]
	private MovementAxis movementAxis;

	[SerializeField]
	private bool useAutomaticLayout;

	[SerializeField]
	private float automaticLayoutSpacing;

	[SerializeField]
	private SizeControl sizeControl;

	[SerializeField]
	private Vector2 size;

	[SerializeField]
	private Margins automaticLayoutMargins;

	[SerializeField]
	private bool useInfiniteScrolling;

	[SerializeField]
	private float infiniteScrollingSpacing;

	[SerializeField]
	private bool useOcclusionCulling;

	[SerializeField]
	private int startingPanel;

	[SerializeField]
	private bool useSwipeGestures;

	[SerializeField]
	private float minimumSwipeSpeed;

	[SerializeField]
	private Button previousButton;

	[SerializeField]
	private Button nextButton;

	[SerializeField]
	private ToggleGroup pagination;

	[SerializeField]
	private bool useToggleNavigation;

	[SerializeField]
	private SnapTarget snapTarget;

	[SerializeField]
	private float snapSpeed;

	[SerializeField]
	private float thresholdSpeedToSnap;

	[SerializeField]
	private float distanceWidthRatioCountAsSnap;

	[SerializeField]
	private bool useHardSnapping;

	[SerializeField]
	private bool useUnscaledTime;

	[SerializeField]
	private Vector2 snapAnchor;

	private ScrollRect scrollRect;

	private Vector2 contentSize;

	private Vector2 prevAnchoredPosition;

	private Vector2 velocity;

	private Direction releaseDirection;

	private float releaseSpeed;

	private bool isDragging;

	private bool isPressing;

	private bool isSelected;

	private int _panelToGoImmediate;

	[SerializeField]
	private UnityEvent<GameObject, float> onTransitionEffects;

	[SerializeField]
	private UnityEvent<int> onPanelSelecting;

	[SerializeField]
	private UnityEvent<int> onPanelSelected;

	[SerializeField]
	private UnityEvent<int, int> onPanelCentering;

	[SerializeField]
	private UnityEvent<int, int> onPanelCentered;

	public UnityEvent<GameObject, float> OnTransitionEffects => null;

	public UnityEvent<int> OnPanelSelecting => null;

	public UnityEvent<int> OnPanelSelected => null;

	public UnityEvent<int, int> OnPanelCentering => null;

	public UnityEvent<int, int> OnPanelCentered => null;

	public RectTransform Content => null;

	public RectTransform Viewport => null;

	public RectTransform RectTransform => null;

	public ScrollRect ScrollRect => null;

	public int NumberOfPanels => 0;

	public Vector2 Velocity
	{
		get
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(Vector2);
		}
		set
		{
		}
	}

	public bool UseUnscaledTime
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool UseAutomaticLayout => false;

	public RectTransform[] Panels { get; private set; }

	public Toggle[] Toggles { get; private set; }

	public int SelectedPanel { get; private set; }

	public int CenteredPanel { get; private set; }

	private bool CheckIsConfigValid()
	{
		return false;
	}

	private void Start()
	{
	}

	private void Update()
	{
	}

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}

	public void OnDrag(PointerEventData eventData)
	{
	}

	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	public void OnEndDrag(PointerEventData eventData)
	{
	}

	private void Setup()
	{
	}

	private void HandleSelectingAndSnapping()
	{
	}

	private void HandleOcclusionCulling(bool forceUpdate = false)
	{
	}

	private void HandleInfiniteScrolling(bool forceUpdate = false)
	{
	}

	private void HandleSwipeGestures()
	{
	}

	private void HandleTransitionEffects()
	{
	}

	private void SelectPanel()
	{
	}

	private void SnapToPanel()
	{
	}

	public void GoToPanelImmediate(int panelNumber)
	{
	}

	public void GoToPanel(int panelNumber)
	{
	}

	public void GoToPreviousPanel()
	{
	}

	public void GoToNextPanel()
	{
	}

	public void RebuildLayout()
	{
	}

	public GameObject AddToFront(GameObject prefabPanel)
	{
		return null;
	}

	public GameObject AddToBack(GameObject prefabPanel)
	{
		return null;
	}

	public GameObject Add(GameObject prefabPanel, int index)
	{
		return null;
	}

	public T AddToFront<T>(T prefabPanel) where T : Component
	{
		return default(T);
	}

	public T AddToBack<T>(T prefabPanel) where T : Component
	{
		return default(T);
	}

	public T Add<T>(T prefabPanel, int index) where T : Component
	{
		return default(T);
	}

	public void RemoveFromFront()
	{
	}

	public void RemoveFromBack()
	{
	}

	public void Remove(int index)
	{
	}

	private Vector2 GetDisplacementFromCenter(int index)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	private int GetNearestPanel()
	{
		return 0;
	}

	private void GetVelocity()
	{
	}
}
