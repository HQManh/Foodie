using UnityEngine;

namespace Utilities;

[RequireComponent(typeof(SpriteRenderer))]
public class LoopAnimSpriteRendererFade : MonoBehaviour
{
	public float cycleDuration;

	public AnimationCurve alphaCurve;

	public float timeOffset;

	private SpriteRenderer _renderer;

	private Color _color;

	private void OnEnable()
	{
	}

	private void Update()
	{
	}
}
