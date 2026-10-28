using UnityEngine;

namespace Utilities;

public class DraggableRigidbody2DSpringJoint : DraggableRigidbody2DJoint
{
	[Header("Spring Joint")]
	public float dampingRatio;

	public float frequency;

	private SpringJoint2D joint;

	private Rigidbody2D jointBody;

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
