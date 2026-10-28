using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamSendChatModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public string t;

		public RequestModel()
		{
		}

		public RequestModel(string id, string t)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int stt;
	}
}
