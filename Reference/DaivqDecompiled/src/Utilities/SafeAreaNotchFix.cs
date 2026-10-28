using UnityEngine;

namespace Utilities;

[RequireComponent(typeof(RectTransform))]
public class SafeAreaNotchFix : MonoBehaviour
{
	[Header("Edge Constraints")]
	[SerializeField]
	private bool applyTop;

	[SerializeField]
	private bool applyBottom;

	[SerializeField]
	private bool applyLeft;

	[SerializeField]
	private bool applyRight;

	private RectTransform _rectTransform;

	private Rect _lastSafeArea;

	private Vector2Int _lastScreenSize;

	private ScreenOrientation _lastOrientation;

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private bool ShouldRefresh()
	{
		return false;
	}

	private void Refresh()
	{
	}

	private void ApplyAnchors(Rect area)
	{
	}
}
