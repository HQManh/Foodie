using System;

namespace _GAME.Team;

[Serializable]
public class TeamLifeRequestModel
{
	[Serializable]
	public class ServerModel
	{
		public string rId;

		public string id;

		public int c;

		public int s;

		public bool avl;

		public long ti;

		public ServerModel()
		{
		}

		public ServerModel(TeamLifeRequestModel model)
		{
		}
	}

	public string recordId;

	public string userId;

	public int lifeCount;

	public int lifeMax;

	public bool available;

	public long sentTime;

	public TeamLifeRequestModel()
	{
	}

	public TeamLifeRequestModel(ServerModel model)
	{
	}
}
