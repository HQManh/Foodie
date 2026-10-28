using UnityEngine;

namespace Utilities
{

[ExecuteInEditMode]
[RequireComponent(typeof(SpriteRenderer))]
public class SpriteSliceScaler : MonoBehaviour
{
	[Header("Boundary Dimensions")]
	[Tooltip("The logical width boundary of the sprite.")]
	[SerializeField]
	private float width;

	[Tooltip("The logical height boundary of the sprite.")]
	[SerializeField]
	private float height;

	[Header("Scale Multiplier")]
	[Tooltip("Acts like a multiplier to scale the overall sprite boundary.")]
	[SerializeField]
	private float scaleMultiplier;

	private SpriteRenderer spriteRenderer;

	public void ApplyDimensions()
	{
	}

	[ContextMenu("Reset to Native Sprite Size")]
	public void ResetToNativeSize()
	{
	}
}
}
