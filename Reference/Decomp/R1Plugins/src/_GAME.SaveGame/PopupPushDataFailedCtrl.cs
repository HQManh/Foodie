using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.SaveGame;

public class PopupPushDataFailedCtrl : PopupSingleton<PopupPushDataFailedCtrl>
{
	public Button btnRetry;

	public void Open(SaveGameServer.SaveResult result)
	{
	}

	private void RetrySync()
	{
	}
}
