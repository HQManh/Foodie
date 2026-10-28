using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.SaveGame;

public class PopupRestartRequiredCtrl : PopupSingleton<PopupRestartRequiredCtrl>
{
	public Button btnRestart;

	protected override void Awake()
	{
	}

	private void ReloadHome()
	{
	}
}
