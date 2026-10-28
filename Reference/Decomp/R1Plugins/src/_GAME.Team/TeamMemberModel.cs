using System;
using _GAME.Profile;

namespace _GAME.Team;

[Serializable]
public class TeamMemberModel
{
	[Serializable]
	public class ServerModel
	{
		public string id;

		public string n;

		public int tH;

		public long sc;

		public int mT;

		public string i;

		public long aTi;

		public ServerModel()
		{
		}

		public ServerModel(TeamMemberModel model)
		{
		}
	}

	public string serverId;

	public string name;

	public int totalHelp;

	public long score;

	public int memberType;

	public string info;

	public long attachTime;

	public ProfileDbModel profile;

	[NonSerialized]
	public int treasurePoint;

	public TeamMemberModel()
	{
	}

	public TeamMemberModel(ProfileDbModel model)
	{
	}

	public TeamMemberModel(ServerModel model)
	{
	}

	private static ProfileDbModel DecodeProfileInfo(ServerModel model)
	{
		return null;
	}

	private static int ClampPreviewScore(long score)
	{
		return 0;
	}

	public int GetTreasurePoint(int weekId)
	{
		return 0;
	}
}
