using System;

namespace _GAME.Inbox;

[Serializable]
public class ABIServerCountNewInboxModel
{
	[Serializable]
	public class RequestModel
	{
		public string command;

		public int pjId;

		public string id;

		public RequestModel()
		{
		}

		public RequestModel(string command, int pjId, string id)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int status;

		public ResponseDataModel data;
	}

	[Serializable]
	public class ResponseDataModel
	{
		public int count;
	}
}
