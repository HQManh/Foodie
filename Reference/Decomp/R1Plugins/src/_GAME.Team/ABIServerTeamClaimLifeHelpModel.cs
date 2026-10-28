using System;

namespace _GAME.Team;

[Serializable]
public class ABIServerTeamClaimLifeHelpModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public string rId;

		public RequestModel()
		{
		}

		public RequestModel(string id, string rId)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int stt;
	}
}
