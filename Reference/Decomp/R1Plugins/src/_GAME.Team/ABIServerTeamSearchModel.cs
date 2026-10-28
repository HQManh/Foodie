using System;
using System.Collections.Generic;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamSearchModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string n;

		public RequestModel()
		{
		}

		public RequestModel(string n)
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
		public List<TeamInfoModel.ServerModel> arr;
	}
}
