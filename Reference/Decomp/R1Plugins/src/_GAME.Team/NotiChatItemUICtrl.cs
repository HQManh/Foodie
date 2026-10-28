using TMPro;

namespace _GAME.Team;

public class NotiChatItemUICtrl : TeamChatItemUICtrl
{
	public TextMeshProUGUI txtTime;

	public TextMeshProUGUI txtMessage;

	private TeamChatModel _chatModel;

	public void SetChatMessage(TeamChatModel model)
	{
	}

	public override long GetTimeSorting()
	{
		return 0L;
	}
}
