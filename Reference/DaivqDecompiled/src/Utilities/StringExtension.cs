using System;
using UnityEngine;

namespace Utilities;

public static class StringExtension
{
	public ref struct StringSplitEnumerator
	{
		private ReadOnlySpan<char> _str;

		private readonly char _separator;

		public StringSplitEntry Current { get; private set; }

		public StringSplitEnumerator(ReadOnlySpan<char> str, char separator)
		{
			//IL_0003: Unknown result type (might be due to invalid IL or missing references)
			//IL_0009: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			_str = default(ReadOnlySpan<char>);
			_separator = '\0';
			Current = default(StringSplitEntry);
		}

		public StringSplitEnumerator GetEnumerator()
		{
			return default(StringSplitEnumerator);
		}

		public bool MoveNext()
		{
			return false;
		}
	}

	public readonly ref struct StringSplitEntry
	{
		public ReadOnlySpan<char> Str { get; }

		public StringSplitEntry(ReadOnlySpan<char> line)
		{
			//IL_0003: Unknown result type (might be due to invalid IL or missing references)
			//IL_0009: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			Str = default(ReadOnlySpan<char>);
		}

		public static implicit operator ReadOnlySpan<char>(StringSplitEntry entry)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(ReadOnlySpan<char>);
		}

		public bool TryParseInt(out int result)
		{
			result = default(int);
			return false;
		}

		public bool TryParseLong(out long result)
		{
			result = default(long);
			return false;
		}

		public bool TryParseFloat(out float result)
		{
			result = default(float);
			return false;
		}

		public bool TryParseEnum<T>(out T value, bool ignoreCase = true) where T : struct, Enum
		{
			value = default(T);
			return false;
		}
	}

	public ref struct StringSplitEnumeratorFixedCharCount
	{
		private ReadOnlySpan<char> _str;

		private readonly int _chunkSize;

		public StringSplitEntryFixedCharCount Current { get; private set; }

		public StringSplitEnumeratorFixedCharCount(ReadOnlySpan<char> str, int chunkSize)
		{
			//IL_0003: Unknown result type (might be due to invalid IL or missing references)
			//IL_0009: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			_str = default(ReadOnlySpan<char>);
			_chunkSize = 0;
			Current = default(StringSplitEntryFixedCharCount);
		}

		public StringSplitEnumeratorFixedCharCount GetEnumerator()
		{
			return default(StringSplitEnumeratorFixedCharCount);
		}

		public bool MoveNext()
		{
			return false;
		}
	}

	public readonly ref struct StringSplitEntryFixedCharCount
	{
		public ReadOnlySpan<char> Str { get; }

		public StringSplitEntryFixedCharCount(ReadOnlySpan<char> line)
		{
			//IL_0003: Unknown result type (might be due to invalid IL or missing references)
			//IL_0009: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			Str = default(ReadOnlySpan<char>);
		}

		public static implicit operator ReadOnlySpan<char>(StringSplitEntryFixedCharCount entry)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(ReadOnlySpan<char>);
		}

		public bool TryParseInt(out int result)
		{
			result = default(int);
			return false;
		}

		public bool TryParseLong(out long result)
		{
			result = default(long);
			return false;
		}

		public bool TryParseFloat(out float result)
		{
			result = default(float);
			return false;
		}

		public bool TryParseEnum<T>(out T value, bool ignoreCase = true) where T : struct, Enum
		{
			value = default(T);
			return false;
		}
	}

	private static string[] RomanLetters;

	private static int[] RomanNumbers;

	public static string IntToRoman(int num)
	{
		return null;
	}

	public static string SecondToTimeMMSS(float second)
	{
		return null;
	}

	public static string TimeSpanToString(TimeSpan time)
	{
		return null;
	}

	public static string NumberToKMBFormat(long num, SystemLanguage systemLanguage = 10)
	{
		return null;
	}

	public static StringSplitEnumerator SplitNonAlloc(this string str, char separator)
	{
		return default(StringSplitEnumerator);
	}

	public static StringSplitEnumerator SplitNonAlloc(this StringSplitEntry entry, char separator)
	{
		return default(StringSplitEnumerator);
	}

	public static StringSplitEnumerator SplitNonAlloc(this ReadOnlySpan<char> str, char separator)
	{
		return default(StringSplitEnumerator);
	}

	public static StringSplitEnumeratorFixedCharCount SplitNonAlloc(this string str, int chunkSize)
	{
		return default(StringSplitEnumeratorFixedCharCount);
	}

	public static StringSplitEnumeratorFixedCharCount SplitNonAlloc(this ReadOnlySpan<char> str, int chunkSize)
	{
		return default(StringSplitEnumeratorFixedCharCount);
	}
}
