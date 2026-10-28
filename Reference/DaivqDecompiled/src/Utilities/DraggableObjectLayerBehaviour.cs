using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Rendering;

namespace Utilities;

[RequireComponent(typeof(DraggableObject))]
public class DraggableObjectLayerBehaviour : MonoBehaviour, IDraggableLayerBehaviour
{
	[Header("Main")]
	public SortingGroup sortingGroup;

	public SpriteRenderer spriteRenderer;

	public Transform objTransform;

	public int CurrentSortOrder => 0;

	public float CurrentZPosition => 0f;

	public event Action<IDraggableLayerBehaviour> onDragStart
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event Action<IDraggableLayerBehaviour> onEndStart
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public void SetSortOrder(int value)
	{
	}

	public void SetZPosition(float value)
	{
	}

	private void Start()
	{
	}

	private void OnStartDrag()
	{
	}

	private void OnEndDrag()
	{
	}
}
