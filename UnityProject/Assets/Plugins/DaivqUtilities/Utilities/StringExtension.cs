using System;
using UnityEngine;

namespace Utilities
{

public static class StringExtension
{
	public ref struct StringSplitEnumerator
	{
		private ReadOnlySpan<char> _str;

		private readonly char _separator;

		public StringSplitEntry Current { get; private set; }

		public StringSplitEnumerator(ReadOnlySpan<char> str, char separator)
		{
			_str = str;
			_separator = separator;
			Current = default(StringSplitEntry);
		}

		public StringSplitEnumerator GetEnumerator()
		{
			return this;
		}

		public bool MoveNext()
		{
			if (_str.Length == 0)
			{
				return false;
			}
			int index = _str.IndexOf(_separator);
			if (index < 0)
			{
				Current = new StringSplitEntry(_str);
				_str = default(ReadOnlySpan<char>);
				return true;
			}
			Current = new StringSplitEntry(_str.Slice(0, index));
			_str = _str.Slice(index + 1);
			return true;
		}
	}

	public readonly ref struct StringSplitEntry
	{
		public ReadOnlySpan<char> Str { get; }

		public StringSplitEntry(ReadOnlySpan<char> line)
		{
			Str = line;
		}

		public static implicit operator ReadOnlySpan<char>(StringSplitEntry entry)
		{
			return entry.Str;
		}

		public bool TryParseInt(out int result)
		{
			return int.TryParse(Str, System.Globalization.NumberStyles.Integer, System.Globalization.CultureInfo.InvariantCulture, out result);
		}

		public bool TryParseLong(out long result)
		{
			return long.TryParse(Str, System.Globalization.NumberStyles.Integer, System.Globalization.CultureInfo.InvariantCulture, out result);
		}

		public bool TryParseFloat(out float result)
		{
			return float.TryParse(Str, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out result);
		}

		public bool TryParseEnum<T>(out T value, bool ignoreCase = true) where T : struct, Enum
		{
			return Enum.TryParse(Str.ToString(), ignoreCase, out value);
		}
	}

	public ref struct StringSplitEnumeratorFixedCharCount
	{
		private ReadOnlySpan<char> _str;

		private readonly int _chunkSize;

		public StringSplitEntryFixedCharCount Current { get; private set; }

		public StringSplitEnumeratorFixedCharCount(ReadOnlySpan<char> str, int chunkSize)
		{
			_str = str;
			_chunkSize = chunkSize;
			Current = default(StringSplitEntryFixedCharCount);
		}

		public StringSplitEnumeratorFixedCharCount GetEnumerator()
		{
			return this;
		}

		public bool MoveNext()
		{
			if (_str.Length == 0 || _chunkSize <= 0)
			{
				return false;
			}
			int take = Math.Min(_chunkSize, _str.Length);
			Current = new StringSplitEntryFixedCharCount(_str.Slice(0, take));
			_str = _str.Slice(take);
			return true;
		}
	}

	public readonly ref struct StringSplitEntryFixedCharCount
	{
		public ReadOnlySpan<char> Str { get; }

		public StringSplitEntryFixedCharCount(ReadOnlySpan<char> line)
		{
			Str = line;
		}

		public static implicit operator ReadOnlySpan<char>(StringSplitEntryFixedCharCount entry)
		{
			return entry.Str;
		}

		public bool TryParseInt(out int result)
		{
			return int.TryParse(Str, System.Globalization.NumberStyles.Integer, System.Globalization.CultureInfo.InvariantCulture, out result);
		}

		public bool TryParseLong(out long result)
		{
			return long.TryParse(Str, System.Globalization.NumberStyles.Integer, System.Globalization.CultureInfo.InvariantCulture, out result);
		}

		public bool TryParseFloat(out float result)
		{
			return float.TryParse(Str, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out result);
		}

		public bool TryParseEnum<T>(out T value, bool ignoreCase = true) where T : struct, Enum
		{
			return Enum.TryParse(Str.ToString(), ignoreCase, out value);
		}
	}

	private static string[] RomanLetters = new string[13] { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	private static int[] RomanNumbers = new int[13] { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

	public static string IntToRoman(int num)
	{
		if (num <= 0)
		{
			return num.ToString();
		}
		System.Text.StringBuilder sb = new System.Text.StringBuilder();
		for (int i = 0; i < RomanNumbers.Length; i++)
		{
			while (num >= RomanNumbers[i])
			{
				sb.Append(RomanLetters[i]);
				num -= RomanNumbers[i];
			}
		}
		return sb.ToString();
	}

	public static string SecondToTimeMMSS(float second)
	{
		int total = Mathf.Max(0, Mathf.CeilToInt(second));
		return string.Format("{0:00}:{1:00}", total / 60, total % 60);
	}

	public static string TimeSpanToString(TimeSpan time)
	{
		if (time.TotalDays >= 1.0)
		{
			return string.Format("{0}d {1:00}h", (int)time.TotalDays, time.Hours);
		}
		if (time.TotalHours >= 1.0)
		{
			return string.Format("{0:00}:{1:00}:{2:00}", (int)time.TotalHours, time.Minutes, time.Seconds);
		}
		return string.Format("{0:00}:{1:00}", time.Minutes, time.Seconds);
	}

	public static string NumberToKMBFormat(long num, SystemLanguage systemLanguage = (SystemLanguage)10)
	{
		double abs = Math.Abs((double)num);
		string sign = num < 0 ? "-" : string.Empty;
		if (abs >= 1000000000.0)
		{
			return sign + (abs / 1000000000.0).ToString("0.##") + "B";
		}
		if (abs >= 1000000.0)
		{
			return sign + (abs / 1000000.0).ToString("0.##") + "M";
		}
		if (abs >= 1000.0)
		{
			return sign + (abs / 1000.0).ToString("0.##") + "K";
		}
		return num.ToString();
	}

	public static StringSplitEnumerator SplitNonAlloc(this string str, char separator)
	{
		return new StringSplitEnumerator(str.AsSpan(), separator);
	}

	public static StringSplitEnumerator SplitNonAlloc(this StringSplitEntry entry, char separator)
	{
		return new StringSplitEnumerator(entry.Str, separator);
	}

	public static StringSplitEnumerator SplitNonAlloc(this ReadOnlySpan<char> str, char separator)
	{
		return new StringSplitEnumerator(str, separator);
	}

	public static StringSplitEnumeratorFixedCharCount SplitNonAlloc(this string str, int chunkSize)
	{
		return new StringSplitEnumeratorFixedCharCount(str.AsSpan(), chunkSize);
	}

	public static StringSplitEnumeratorFixedCharCount SplitNonAlloc(this ReadOnlySpan<char> str, int chunkSize)
	{
		return new StringSplitEnumeratorFixedCharCount(str, chunkSize);
	}
}
}
