using TMPro;
using UnityEngine.EventSystems;

namespace _GAME.Team;

public class TeamChatInputField : TMP_InputField
{
	public TeamChatInputBarUICtrl InputBar { private get; set; }

	public override void OnDeselect(BaseEventData eventData)
	{
	}

	public override void OnSelect(BaseEventData eventData)
	{
	}
}
