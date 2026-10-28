using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamGetInfoSummaryModel
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

		public RequestModel(string id, long cId = 0L)
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
	}
}
