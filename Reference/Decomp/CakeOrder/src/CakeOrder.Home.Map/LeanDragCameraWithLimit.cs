using Lean.Touch;
using UnityEngine;

namespace CakeOrder.Home.Map;

public class LeanDragCameraWithLimit : LeanDragCamera
{
	public bool isLimitOnX;

	public bool isLimitOnY;

	public Vector2 minLimit;

	public Vector2 maxLimit;

	public Camera controlledCamera;

	protected override void Awake()
	{
	}

	private void Clamp(ref Vector3 position)
	{
	}

	public override void MoveToPosition(Vector3 position)
	{
	}

	public override void SetPositionImmediate(Vector3 position)
	{
	}

	protected override void LateUpdate()
	{
	}
}
