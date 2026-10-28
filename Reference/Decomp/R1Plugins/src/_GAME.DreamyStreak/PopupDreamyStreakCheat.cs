using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.DreamyStreak;

[Serializable]
public class PopupDreamyStreakCheat
{
	public GameObject menuCheat;

	public TMP_InputField txtInput;

	public Button btnAddPoint;

	public Button btnResetData;

	private PopupDreamyStreakCtrl _parent;

	public void SetUp(PopupDreamyStreakCtrl parent)
	{
	}

	private void CheatAddPoint()
	{
	}

	private void CheatResetData()
	{
	}
}
