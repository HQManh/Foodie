using UnityEngine;

namespace Utilities;

[RequireComponent(typeof(Rigidbody))]
public class DragRigidbody : MonoBehaviour
{
	public float force;

	public float damping;

	private Transform jointTrans;

	private float dragDepth;

	private void OnMouseDown()
	{
	}

	private void OnMouseUp()
	{
	}

	private void OnMouseDrag()
	{
	}

	public void HandleInputBegin(Vector3 screenPosition)
	{
	}

	public void HandleInput(Vector3 screenPosition)
	{
	}

	public void HandleInputEnd(Vector3 screenPosition)
	{
	}

	private Transform AttachJoint(Rigidbody rb, Vector3 attachmentPosition)
	{
		return null;
	}

	private JointDrive NewJointDrive(float force, float damping)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(JointDrive);
	}
}
