using UnityEngine;
using UnityEngine.Events;

namespace Utilities
{

public class DraggableObject : MonoBehaviour
{
	private Vector3 mOffset;

	private float mZCoord;

	public BoolModifierWithRegisteredSource isPreventDrag;

	public UnityEvent OnStartDrag;

	public UnityEvent OnDrag;

	public UnityEvent OnEndDrag;

	public bool isClampPosition;

	public bool isClampRelativeToViewport;

	public Rect areaClampPosition;

	public bool IsDragging { get; protected set; }

	protected virtual void Awake()
	{
	}

	private void OnChangedCanDrag()
	{
	}

	protected virtual void OnMouseDown()
	{
	}

	protected virtual Vector3 GetMouseWorldPos()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	protected virtual void OnMouseDrag()
	{
	}

	protected virtual void OnMouseUp()
	{
	}

	public void CancelDragging()
	{
	}

	protected virtual void OnDrawGizmosSelected()
	{
	}
}
}
