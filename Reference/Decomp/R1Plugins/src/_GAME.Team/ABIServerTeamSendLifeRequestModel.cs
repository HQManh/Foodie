using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamSendLifeRequestModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public RequestModel()
		{
		}

		public RequestModel(string id)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int stt;
	}
}
