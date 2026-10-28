using System;
using System.Collections.Generic;

namespace _GAME.Team;

[Serializable]
public class TeamInfoModel
{
	[Serializable]
	public class EditModel
	{
		public int avatar;

		public string countryCode;

		public string description;

		public int levelRequired;

		public EditModel()
		{
		}

		public EditModel(TeamInfoModel model)
		{
		}
	}

	[Serializable]
	public class ServerModel
	{
		public long cId;

		public bool pub;

		public int a;

		public string n;

		public int sc;

		public int c;

		public string cc;

		public int lv;

		public string des;

		public int s;

		public int tH;

		public long cTi;

		public ServerModel()
		{
		}

		public ServerModel(TeamInfoModel model)
		{
		}
	}

	public long teamId;

	public bool isPublic;

	public int avatar;

	public string name;

	public int totalScore;

	public int memberCount;

	public string countryCode;

	public int levelRequired;

	public string description;

	public int memberSize;

	public int totalHelp;

	public long createdTime;

	public Dictionary<string, TeamMemberModel> listMember;

	public TeamInfoModel()
	{
	}

	public TeamInfoModel(long teamId)
	{
	}

	public TeamInfoModel(int avatar, string name, string description, int levelRequired)
	{
	}

	public TeamInfoModel(ServerModel model)
	{
	}
}
