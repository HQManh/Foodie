using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.Inbox;

[CreateAssetMenu(fileName = "SOInboxConfig", menuName = "BaseGame/SOInboxConfig", order = 200)]
public class SOInboxConfig : SingletonSO<SOInboxConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public void Load(SOInboxConfig newInstance)
	{
	}
}
