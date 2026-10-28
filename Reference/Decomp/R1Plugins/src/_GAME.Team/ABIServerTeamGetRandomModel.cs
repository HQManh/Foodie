using System;
using System.Collections.Generic;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamGetRandomModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public int lv;

		public RequestModel()
		{
		}

		public RequestModel(int lv)
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
