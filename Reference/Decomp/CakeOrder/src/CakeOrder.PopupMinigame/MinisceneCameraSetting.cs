using System;
using UnityEngine;

namespace CakeOrder.PopupMinigame;

[Serializable]
public class MinisceneCameraSetting
{
	[Header("Transform")]
	public Vector3 cameraOffset;

	public Vector3 eulerRotation;

	[Header("Clear")]
	public CameraClearFlags clearFlags;

	public Color backgroundColor;

	public int cullingMask;

	[Header("Projection")]
	public bool isOrthographic;

	public float orthographicSize;

	public float fieldOfView;

	public void ApplyToCamera(Camera camera, Transform focusPoint)
	{
	}
}
