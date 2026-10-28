using System;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

namespace UniRx
{
	public class WWWErrorException : Exception
	{
		public string RawErrorMessage { get; private set; }

		public bool HasResponse { get; private set; }

		public string Text { get; private set; }

		public HttpStatusCode StatusCode { get; private set; }

		public Dictionary<string, string> ResponseHeaders { get; private set; }

		public WWW WWW { get; private set; }

		public WWWErrorException(WWW www, string text)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
