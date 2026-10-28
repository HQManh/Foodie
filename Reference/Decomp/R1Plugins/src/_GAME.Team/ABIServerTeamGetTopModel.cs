using System;
using System.Collections.Generic;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamGetTopModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string cc;

		public RequestModel()
		{
		}

		public RequestModel(string cc)
		{
		}

		public string ToJson()
		{
			return null;
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
		public long rk;

		public List<TeamInfoModel.ServerModel> arr;
	}
}
