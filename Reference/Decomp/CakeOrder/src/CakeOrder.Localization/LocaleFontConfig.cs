using TMPro;
using UnityEngine;

namespace CakeOrder.Localization;

public class LocaleFontConfig : ScriptableObject
{
	public const string Address = "LocFont/Config";

	[Tooltip("Game fonts that receive the active locale's script font as a TMP fallback.")]
	public TMP_FontAsset[] primaryFonts;

	[Tooltip("Locale codes that have a script font addressable at LocFont/<code>.")]
	public string[] localeCodesWithFont;

	[Tooltip("Language-picker labels that need editor-side shaping (ar visual forms, hi glyph string), keyed by locale code.")]
	public string[] pickerNameCodes;

	public string[] pickerNames;

	public string GetPickerName(string code)
	{
		return null;
	}
}
