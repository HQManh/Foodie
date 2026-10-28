using System;
using System.Collections.Generic;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamGetInfoModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public long cId;

		public RequestModel()
		{
		}

		public RequestModel(string id, long cId)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int stt;

		public ResponseDataModel d;
	}

	[Serializable]
	public class ResponseDataModel
	{
		public int rk;

		public TeamInfoModel.ServerModel cl;

		public List<TeamMemberModel.ServerModel> mb;
	}
}
