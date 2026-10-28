using System;

namespace _GAME.Team;

[Serializable]
public class TeamChatModel
{
	[Serializable]
	public class ServerModel
	{
		public long cId;

		public string id;

		public string n;

		public int ty;

		public string t;

		public long ti;

		public ServerModel()
		{
		}

		public ServerModel(TeamChatModel model)
		{
		}
	}

	public long teamId;

	public string userId;

	public string name;

	public int msgType;

	public string msgContent;

	public long sentTime;

	public TeamChatModel()
	{
	}

	public TeamChatModel(ServerModel model)
	{
	}
}
