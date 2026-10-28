using TMPro;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.TeamTreasure;

public class PopupTeamTreasureStartCtrl : PopupSingleton<PopupTeamTreasureStartCtrl>
{
	public TextMeshProUGUI txtTime;

	public Button btnInfo;

	public Button btnJoin;

	private int _callbackTickId;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	private void UpdateUITime()
	{
	}

	private void OpenPopupInfo()
	{
	}

	private void OpenPopupTabTeam()
	{
	}

	protected override void OnDestroy()
	{
	}
}
