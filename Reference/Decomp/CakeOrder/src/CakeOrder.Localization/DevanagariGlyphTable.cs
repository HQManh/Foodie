using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.Localization;

public class DevanagariGlyphTable : ScriptableObject
{
	public const string Address = "LocFont/hi-shapes";

	public const int GlyphCodeBase = 57344;

	[SerializeField]
	private string[] _words;

	[SerializeField]
	private string[] _glyphs;

	private Dictionary<string, string> _map;

	public int Count => 0;

	public void Set(string[] words, string[] glyphs)
	{
	}

	public static bool IsDevanagari(char c)
	{
		return false;
	}

	public static bool ContainsDevanagari(string s)
	{
		return false;
	}

	public string Shape(string text)
	{
		return null;
	}

	public static string ReorderFallback(string word)
	{
		return null;
	}
}
