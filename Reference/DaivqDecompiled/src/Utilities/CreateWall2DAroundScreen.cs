using UnityEngine;

namespace Utilities;

public class CreateWall2DAroundScreen : MonoBehaviour
{
	public enum WallDirection
	{
		TOP,
		BOTTOM,
		LEFT,
		RIGHT
	}

	public Camera _camera;

	public float wallThickness;

	public float wallLengthExtrude;

	public float wallSpaceExpand;

	[EnumMask(typeof(WallDirection), 25f, false, 5)]
	public int wallDirectionEnableMask;

	private BoxCollider2D[] _wallColliders;

	private float _prevCameraOrthographicSize;

	private float _prevCameraAspectRatio;

	public bool isAutoSetUpWallOnStart;

	public bool isAutoUpdateWallOnCameraSizeChanged;

	private void Start()
	{
	}

	public void SetUpWall()
	{
	}

	private void Update()
	{
	}

	private void CreateWall()
	{
	}

	private void UpdateWall()
	{
	}
}
