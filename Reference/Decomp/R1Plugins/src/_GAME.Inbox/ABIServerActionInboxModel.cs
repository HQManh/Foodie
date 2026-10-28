using System;

namespace _GAME.Inbox;

[Serializable]
public class ABIServerActionInboxModel
{
	[Serializable]
	public class RequestModel
	{
		public string command;

		public int pjId;

		public string id;

		public string _id;

		public bool glb;

		public RequestModel()
		{
		}

		public RequestModel(string command, int pjId, string id, string _id, bool glb)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int status;
	}
}
