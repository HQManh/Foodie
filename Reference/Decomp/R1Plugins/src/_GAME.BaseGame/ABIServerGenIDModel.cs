using System;

namespace _GAME.BaseGame;

[Serializable]
public class ABIServerGenIDModel
{
	[Serializable]
	public class RequestModel
	{
		public string cmd;

		public string id;

		public RequestModel(string id)
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
		public int nId;
	}
}
