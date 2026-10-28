using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.SaveGame;

[CreateAssetMenu(fileName = "SOSaveGameConfig", menuName = "BaseGame/SOSaveGameConfig", order = 200)]
public class SOSaveGameConfig : SingletonSO<SOSaveGameConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public void Load(SOSaveGameConfig newInstance)
	{
	}
}
