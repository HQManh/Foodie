using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class UIPlateAroundActiveButtons : MonoBehaviour
{
	[Tooltip("The buttons this plate should wrap, in any order. Only the active ones are measured.")]
	[SerializeField]
	private RectTransform[] _buttons;

	[Tooltip("Room left around the outermost buttons, in the parent's units.")]
	[SerializeField]
	private RectOffset _padding;

	[Tooltip("Hide the plate when every button is off, rather than leaving an empty frame on screen.")]
	[SerializeField]
	private bool _hideWhenEmpty;

	private RectTransform _rt;

	private Graphic _graphic;

	private int _lastActiveMask;

	private void OnEnable()
	{
	}

	private void LateUpdate()
	{
	}

	public void Refresh()
	{
	}

	private void Apply()
	{
	}
}
