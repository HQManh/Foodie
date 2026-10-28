using System;

namespace _GAME.SaveGame;

[Serializable]
public class ABIServerLoadGameModel
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
		public int pl;

		public int aV;

		public long vrs;

		public string d;
	}
}
