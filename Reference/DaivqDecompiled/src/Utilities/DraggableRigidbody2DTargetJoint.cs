using UnityEngine;

namespace Utilities;

public class DraggableRigidbody2DTargetJoint : DraggableRigidbody2DJoint
{
	[Header("Target Joint")]
	public float maxForce;

	public float dampingRatio;

	public float frequency;

	private TargetJoint2D joint;

	protected override Joint2D SetUpJoint()
	{
		return null;
	}

	protected override void OnUpdateDraggingDynamic()
	{
	}

	protected override void UpdateJointOnEndDrag()
	{
	}
}
