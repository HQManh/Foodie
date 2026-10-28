using UnityEngine;

namespace CakeOrder.InGame.UI;

[RequireComponent(typeof(RectTransform))]
public class UIFollowBeltBottomRow : MonoBehaviour
{
	[SerializeField]
	private RectTransform _bgToScreenBottom;

	private readonly Vector3[] _corners;

	private RectTransform _rt;

	private Canvas _rootCanvas;

	private Camera _worldCam;

	private Vector3 _lastCamPos;

	private float _lastCamSize;

	private float _lastBeltY;

	private Vector2Int _lastScreen;

	private Camera UICamera => null;

	private void Awake()
	{
	}

	private void LateUpdate()
	{
	}

	private bool IsDirty(float beltY)
	{
		return false;
	}

	private void AlignToBelt(float beltY)
	{
	}

	private void StretchBgToScreenBottom()
	{
	}
}
