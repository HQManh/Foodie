using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

namespace _GAME.Utils;

public static class SaveFile
{
	private sealed class WritableMembersResolver : DefaultContractResolver
	{
		protected override JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization)
		{
			return null;
		}
	}

	public const string MarkerKey = "FoodiePop_R1SaveMarker";

	private const string Folder = "R1";

	private static readonly JsonSerializerSettings JsonSettings;

	private static string Dir => null;

	public static event Action OnDataCleared
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private static string DataPath<T>()
	{
		return null;
	}

	private static string LatestPath<T>()
	{
		return null;
	}

	private static string BackupPath<T>()
	{
		return null;
	}

	public static T Load<T>()
	{
		return default(T);
	}

	private static T LoadLatest<T>()
	{
		return default(T);
	}

	public static void Save<T>(object obj)
	{
	}

	public static T LoadBackup<T>()
	{
		return default(T);
	}

	public static void SaveBackup<T>(object obj)
	{
	}

	private static bool CheckClearedData()
	{
		return false;
	}

	private static void WriteReplace(string path, string content)
	{
	}

	private static string JoinString(params object[] objs)
	{
		return null;
	}

	private static string Encrypt(string input)
	{
		return null;
	}

	private static string Decrypt(string input)
	{
		return null;
	}
}
