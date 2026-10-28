using UnityEngine;
using _GAME.Utils;

namespace _GAME.Inbox;

public class InboxManager : SingletonManager<InboxManager>
{
	[SerializeField]
	private SOInboxConfig soConfig;

	protected override void Awake()
	{
	}
}
