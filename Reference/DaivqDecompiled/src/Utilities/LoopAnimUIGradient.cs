using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class LoopAnimUIGradient : MonoBehaviour
{
	public float cycleDuration;

	public Gradient gradient;

	public bool isUseUnscaledTime;

	public bool isMultiplyOriginalColor;

	public float timeOffset;

	private Graphic _graphic;

	private Color _originColor;

	private void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void Update()
	{
	}
}
