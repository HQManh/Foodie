using UnityEngine;

namespace _GAME.Team;

public class TeamChatItemUICtrl : MonoBehaviour
{
	public GameObject objContent;

	public virtual long GetTimeSorting()
	{
		return 0L;
	}
}
