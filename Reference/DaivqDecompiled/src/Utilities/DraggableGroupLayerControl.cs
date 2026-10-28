using UnityEngine;

namespace Utilities;

public class DraggableGroupLayerControl : MonoBehaviour
{
	[SerializeField]
	private GameObject[] _draggableObjectLayerBehaviours;

	[SerializeField]
	private int _initialSortOrder;

	[SerializeField]
	private float _initialZPosition;

	[SerializeField]
	private float _zPosInc;

	private int _currentSortOrder;

	private float _currentZPosition;

	private void Start()
	{
	}

	private void OnDragStart(IDraggableLayerBehaviour behaviour)
	{
	}

	private void OnEndDrag(IDraggableLayerBehaviour behaviour)
	{
	}
}
