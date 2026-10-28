using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class UITextFontStyleApplier : MonoBehaviour
{
	[Serializable]
	public class Config
	{
		public FontStyle fontStyle;

		public Text[] texts;

		public TMP_Text[] tmpTexts;
	}

	[SerializeField]
	private bool _autoUpdateOnEnable;

	[SerializeField]
	private Config[] _configs;

	private void OnEnable()
	{
	}

	public void Apply()
	{
	}

	private static FontStyles ToTmpStyle(FontStyle style)
	{
		return (FontStyles)0;
	}
}
