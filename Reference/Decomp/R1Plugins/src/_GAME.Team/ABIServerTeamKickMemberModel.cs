using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamKickMemberModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public string tId;

		public RequestModel()
		{
		}

		public RequestModel(string id, string tId)
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
