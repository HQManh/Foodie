using System;
using System.Collections.Generic;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamFetchChatModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public int sk;

		public int lm;

		public RequestModel()
		{
		}

		public RequestModel(string id, int sk = 0, int lm = 20)
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
		public List<TeamChatModel.ServerModel> arr;
	}
}
