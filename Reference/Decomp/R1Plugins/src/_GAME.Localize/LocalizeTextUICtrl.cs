using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace _GAME.Localize;

public class LocalizeTextUICtrl : MonoBehaviour
{
	public TextMeshProUGUI txtTMPDisplay;

	public string localizeKey;

	public List<string> listParam;

	private bool _init;

	private string _textDefault;

	private void Start()
	{
	}

	private void Init()
	{
	}

	public void UpdateTextLanguage(params string[] newParams)
	{
	}
}
