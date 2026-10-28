using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamEditModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public int a;

		public string cc;

		public string des;

		public int lv;

		public RequestModel()
		{
		}

		public RequestModel(string id, int a, string cc, string des, int lv)
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
