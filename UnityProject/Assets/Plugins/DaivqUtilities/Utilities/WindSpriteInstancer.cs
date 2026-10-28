using UnityEngine;

namespace Utilities
{

[ExecuteAlways]
[RequireComponent(typeof(SpriteRenderer))]
public class WindSpriteInstancer : MonoBehaviour
{
	[Tooltip("Normalized pivot point. Bottom-Center is (0.5, 0.0)")]
	public Vector2 normalizedPivot;

	private SpriteRenderer _spriteRenderer;

	private MaterialPropertyBlock _propBlock;

	private static readonly int InstanceDataID;

	private void OnEnable()
	{
	}

	private void ApplyInstancedData()
	{
	}
}
}
