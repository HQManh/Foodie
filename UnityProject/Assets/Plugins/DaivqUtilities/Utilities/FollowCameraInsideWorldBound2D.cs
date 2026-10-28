using UnityEngine;

namespace Utilities
{

public class FollowCameraInsideWorldBound2D : MonoBehaviour
{
	public Camera followCamera;

	public Rect worldBound;

	public float lerpSpeed;

	private ComponentOverrideWithRegisteredSource<Transform> targets;

	private void Awake()
	{
	}

	public void AddTarget(Object registeredSource, Transform target, int priority)
	{
	}

	public void RemoveTarget(Object registeredSource)
	{
	}

	private void LateUpdate()
	{
	}

	private void OnDrawGizmosSelected()
	{
	}
}
}
