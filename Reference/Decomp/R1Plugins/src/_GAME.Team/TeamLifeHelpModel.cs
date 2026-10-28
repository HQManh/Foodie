using System;

namespace _GAME.Team;

[Serializable]
public class TeamLifeHelpModel
{
	[Serializable]
	public class ServerModel
	{
		public string rId;

		public string id;

		public string n;

		public long ti;

		public ServerModel()
		{
		}

		public ServerModel(TeamLifeHelpModel model)
		{
		}
	}

	public string recordId;

	public string userId;

	public string name;

	public long sentTime;

	public TeamLifeHelpModel()
	{
	}

	public TeamLifeHelpModel(ServerModel model)
	{
	}
}
