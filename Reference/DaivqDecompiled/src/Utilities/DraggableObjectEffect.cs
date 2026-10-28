using UnityEngine;

namespace Utilities;

public class DraggableObjectEffect : MonoBehaviour
{
	[SerializeField]
	private DraggableObject _draggableObject;

	public float lerpSpeed;

	private float _timeStartLerp;

	public SpriteRenderer spriteRenderer;

	public float durationLerp;

	[Header("Placed")]
	public Vector3 offsetPlaced;

	public float rotationPlaced;

	public Color colorPlaced;

	public float scalePlaced;

	[Header("Dragging")]
	public Vector3 offsetDragging;

	public float rotationDragging;

	public Color colorDragging;

	public float scaleDragging;

	private Vector3 _originScale;

	private Quaternion _desiredRotation;

	private Color _desiredColor;

	private Vector3 _desiredScale;

	private Vector3 _desiredOffsetPosition;

	private void Awake()
	{
	}

	private void OnStartDrag()
	{
	}

	private void OnEndDrag()
	{
	}

	private void Update()
	{
	}
}
