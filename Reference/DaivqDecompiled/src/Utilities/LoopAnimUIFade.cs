using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

[RequireComponent(typeof(Graphic))]
public class LoopAnimUIFade : MonoBehaviour
{
	public float cycleDuration;

	public AnimationCurve alphaCurve;

	public bool isUseUnscaledTime;

	public float timeOffset;

	private Graphic _graphic;

	private Color _color;

	private void OnEnable()
	{
	}

	private void Update()
	{
	}
}
