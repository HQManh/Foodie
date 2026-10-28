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
			WWW = www;
			RawErrorMessage = www.error;
			ResponseHeaders = www.responseHeaders;
			Text = text;
			HasResponse = false;

			if (RawErrorMessage != null)
			{
				string[] parts = RawErrorMessage.Split(new char[] { ' ', ':' });
				if (parts.Length == 0) throw new IndexOutOfRangeException();
				if (int.TryParse(parts[0], out int statusCode))
				{
					HasResponse = true;
					StatusCode = (HttpStatusCode)statusCode;
				}
			}
		}

		public override string ToString()
		{
			if (string.IsNullOrEmpty(Text))
			{
				return RawErrorMessage; // TODO(unrecovered): pseudocode for the IsNullOrEmpty(Text) early exit is a bare `return;` with no value, so the returned string is not recovered; RawErrorMessage is an unverified assumption.
			}
			return string.Concat(RawErrorMessage, ": " /* literal recovered by guess */, Text);
		}
	}
}
