using UnityEngine.UI;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.DreamyPass;

public class PopupDreamyPassStartCtrl : PopupSingleton<PopupDreamyPassStartCtrl>
{
	public Button btnContinue;

	public AvatarStatusUICtrl avaStatus;

	public NameFxCtrl nameFxCtrl;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	private void StartNewSeason()
	{
	}
}
