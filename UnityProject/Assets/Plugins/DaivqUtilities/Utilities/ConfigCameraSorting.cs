using UnityEngine;

namespace Utilities
{

public class ConfigCameraSorting : MonoBehaviour
{
	[SerializeField]
	private Camera _camera;

	[SerializeField]
	private bool _overrideCameraSortingMode;

	[SerializeField]
	private TransparencySortMode _sortMode;

	[SerializeField]
	private Vector3 _sortAxis;

	private void Start()
	{
	}

	public void SetCameraSortingMode(TransparencySortMode mode, Vector3 axis)
	{
	}
}
}
