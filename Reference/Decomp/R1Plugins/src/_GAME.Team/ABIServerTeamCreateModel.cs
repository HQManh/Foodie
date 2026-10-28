using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamCreateModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public string uN;

		public string i;

		public string n;

		public int a;

		public string cc;

		public string des;

		public int lv;

		public long sc;

		public RequestModel()
		{
		}

		public RequestModel(string id, string uN, string i, string n, int a, string cc, string des, int lv, long sc)
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
		public TeamInfoModel.ServerModel cl;
	}
}
