using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamChangeScoreModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public string n;

		public long sc;

		public string i;

		public RequestModel()
		{
		}

		public RequestModel(string id, string n, long sc, string i)
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
		public string msg;
	}
}
