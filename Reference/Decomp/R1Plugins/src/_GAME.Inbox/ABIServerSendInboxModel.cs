using System;
using System.Collections.Generic;

namespace _GAME.Inbox;

[Serializable]
public class ABIServerSendInboxModel
{
	[Serializable]
	public class RequestModel
	{
		public string command;

		public int pjId;

		public string id;

		public string name;

		public int ava;

		public string tId;

		public string title;

		public string content;

		public List<int> itsT;

		public List<int> itsA;

		public string lkA;

		public RequestModel()
		{
		}

		public RequestModel(string command, int pjId, string id, string name, int ava, string tId, string title, string content, List<int> itsT = null, List<int> itsA = null, string lkA = "")
		{
		}
	}

	[Serializable]
	public class ResponseModel
	{
		public int status;
	}
}
