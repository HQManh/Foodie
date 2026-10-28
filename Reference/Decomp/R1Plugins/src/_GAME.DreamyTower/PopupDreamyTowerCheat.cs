using System;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.DreamyTower;

[Serializable]
public class PopupDreamyTowerCheat
{
	public GameObject menuCheat;

	public Button btnAdd1Point;

	public Button btnAdd3Point;

	public Button btnResetData;

	private PopupDreamyTowerCtrl _parent;

	public void SetUp(PopupDreamyTowerCtrl parent)
	{
	}
}
