using System;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.DreamyPass;

[Serializable]
public class PopupDreamyPassCheat
{
	public GameObject menuCheat;

	public Button btnCheatTime;

	public Button btnCheatKey;

	public Button btnCheatBank;

	public Button btnResetData;

	private PopupDreamyPassCtrl _parent;

	public void Init(PopupDreamyPassCtrl parent)
	{
	}
}
