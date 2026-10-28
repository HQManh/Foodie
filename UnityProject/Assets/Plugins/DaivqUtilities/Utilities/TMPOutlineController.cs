using TMPro;
using UnityEngine;

namespace Utilities
{

[ExecuteInEditMode]
[RequireComponent(typeof(TMP_Text))]
public class TMPOutlineController : MonoBehaviour
{
	[ColorUsage(true, true)]
	public Color outlineColor;

	private TMP_Text _textComponent;

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void OnValidate()
	{
	}

	public void Refresh()
	{
	}

	private void OnTextChanged(Object obj)
	{
	}
}
}
