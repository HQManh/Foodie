using System;
using System.IO;
using System.IO.Compression;
using System.Text;

namespace AnhPD.FoodOrder
{
	public static class DebugReportCodec
	{
		private const string Prefix = "PL1:";

		public static string Encode(string report)
		{
			byte[] bytes = Encoding.UTF8.GetBytes(report ?? string.Empty);
			using (MemoryStream memoryStream = new MemoryStream())
			{
				using (DeflateStream deflateStream = new DeflateStream(memoryStream, CompressionMode.Compress, true))
				{
					deflateStream.Write(bytes, 0, bytes.Length);
				}
				return "PL1:" + Convert.ToBase64String(memoryStream.ToArray());
			}
		}

		public static bool TryDecode(string code, out string report)
		{
			report = code ?? string.Empty;
			string text = report.Trim();
			if (text.StartsWith("PL1:", StringComparison.Ordinal))
			{
				try
				{
					string s = StripWhitespace(text.Substring("PL1:".Length));
					byte[] buffer = Convert.FromBase64String(s);
					using (MemoryStream stream = new MemoryStream(buffer))
					{
						using (DeflateStream stream2 = new DeflateStream(stream, CompressionMode.Decompress))
						{
							using (StreamReader streamReader = new StreamReader(stream2, Encoding.UTF8))
							{
								report = streamReader.ReadToEnd();
							}
						}
					}
				}
				catch (Exception)
				{
					return false;
				}
			}
			return true;
		}

		private static string StripWhitespace(string s)
		{
			StringBuilder stringBuilder = new StringBuilder(s.Length);
			for (int i = 0; i < s.Length; i++)
			{
				char c = s[i];
				if (!char.IsWhiteSpace(c))
				{
					stringBuilder.Append(c);
				}
			}
			return stringBuilder.ToString();
		}
	}
}
