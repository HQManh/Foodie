using System;

namespace _GAME.Profile;

[Serializable]
public class ABIServerPushProfileModel
{
	[Serializable]
	public class RequestModel
	{
		public string command;

		public int pjId;

		public string id;

		public string name;

		public string cc;

		public int ava;

		public int sc;

		public string info;

		public RequestModel(int pjId, string id, string name, string cc, int ava, int sc, string info)
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int status;
	}
}
