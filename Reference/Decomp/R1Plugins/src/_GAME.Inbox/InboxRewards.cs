using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.Inbox;

public static class InboxRewards
{
	public static List<RwItemModel> Get(ABIServerInboxModel mail)
	{
		return null;
	}

	public static bool HasAny(ABIServerInboxModel mail)
	{
		return false;
	}

	private static int Count(ABIServerInboxModel mail)
	{
		return 0;
	}

	private static bool IsValid(RwItemModel item)
	{
		return false;
	}

	private static bool InRange(int index, int count)
	{
		return false;
	}
}
