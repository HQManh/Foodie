using System.Collections.Generic;
using System.Reflection;
using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.InGame
{

// Replacement for the lookups of CakeOrderDatabaseSO and the Id property of ScriptableObjectWithId. The game's managed DLLs are
// metadata-only shells (IL2CPP build), so those members do nothing; these rebuild them from the decompiled code and read the serialized
// fields directly.
public static class DatabaseApi
{
	private const BindingFlags AnyField = BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic;

	private static readonly FieldInfo IdField = typeof(ScriptableObjectWithId).GetField("_id", AnyField);

	private static readonly FieldInfo MapsField = typeof(CakeOrderDatabaseSO).GetField("_mapSOs", AnyField);

	private static readonly FieldInfo CharactersField = typeof(CakeOrderDatabaseSO).GetField("_characterSOs", AnyField);

	public static CakeOrderDatabaseSO Find()
	{
		CakeOrderDatabaseSO instance = CakeOrderDatabaseSO.Instance;
		if (instance != null)
		{
			return instance;
		}
		CakeOrderDatabaseSO[] loaded = Resources.FindObjectsOfTypeAll<CakeOrderDatabaseSO>();
		return loaded.Length > 0 ? loaded[0] : null;
	}

	public static string IdOf(ScriptableObjectWithId so)
	{
		return so != null && IdField != null ? IdField.GetValue(so) as string : null;
	}

	private static CakeMapSO[] Maps(CakeOrderDatabaseSO db)
	{
		return db != null && MapsField != null ? MapsField.GetValue(db) as CakeMapSO[] : null;
	}

	private static CakeCharacterSO[] Characters(CakeOrderDatabaseSO db)
	{
		return db != null && CharactersField != null ? CharactersField.GetValue(db) as CakeCharacterSO[] : null;
	}

	public static int NumMaps(CakeOrderDatabaseSO db)
	{
		CakeMapSO[] maps = Maps(db);
		return maps != null ? maps.Length : 0;
	}

	public static string GetMapId(CakeOrderDatabaseSO db, int index)
	{
		CakeMapSO[] maps = Maps(db);
		return maps != null && index >= 0 && index < maps.Length ? IdOf(maps[index]) : null;
	}

	public static CakeMapSO GetMapSO(CakeOrderDatabaseSO db, int index)
	{
		CakeMapSO[] maps = Maps(db);
		return maps != null && index >= 0 && index < maps.Length ? maps[index] : null;
	}

	public static int GetMapIndexById(CakeOrderDatabaseSO db, string mapId)
	{
		CakeMapSO[] maps = Maps(db);
		if (maps == null)
		{
			return -1;
		}
		for (int i = 0; i < maps.Length; i++)
		{
			if (maps[i] != null && IdOf(maps[i]) == mapId)
			{
				return i;
			}
		}
		return -1;
	}

	public static CakeMapSO GetMapSO(CakeOrderDatabaseSO db, string mapId)
	{
		int index = GetMapIndexById(db, mapId);
		return index >= 0 ? Maps(db)[index] : null;
	}

	public static List<string> GetAllCharacterIds(CakeOrderDatabaseSO db)
	{
		List<string> ids = new List<string>();
		CakeCharacterSO[] characters = Characters(db);
		if (characters == null)
		{
			return ids;
		}
		foreach (CakeCharacterSO character in characters)
		{
			string id = IdOf(character);
			if (character != null && !string.IsNullOrWhiteSpace(id))
			{
				ids.Add(id);
			}
		}
		return ids;
	}

	public static CakeCharacterSO GetCharacterSOById(CakeOrderDatabaseSO db, string id)
	{
		CakeCharacterSO[] characters = Characters(db);
		if (characters == null)
		{
			return null;
		}
		foreach (CakeCharacterSO character in characters)
		{
			if (character != null && IdOf(character) == id)
			{
				return character;
			}
		}
		return null;
	}

	// Splits the playable characters into those of the given map ("own"), of earlier maps ("past") and of later maps ("future").
	public static void GetRandomCustomerTiers(CakeOrderDatabaseSO db, string mapId, List<CakeCharacterSO> own, List<CakeCharacterSO> past, List<CakeCharacterSO> future)
	{
		own.Clear();
		past.Clear();
		future.Clear();
		CakeCharacterSO[] characters = Characters(db);
		if (characters == null)
		{
			return;
		}
		int mapIndex = GetMapIndexById(db, mapId);
		foreach (CakeCharacterSO character in characters)
		{
			if (character == null || (int)character.characterType != 0 || character.map == null || character.assetCharacterAnimControl == null || !character.assetCharacterAnimControl.RuntimeKeyIsValid())
			{
				continue;
			}
			string characterMapId = IdOf(character.map);
			if (characterMapId == mapId)
			{
				own.Add(character);
			}
			else if (mapIndex >= 0)
			{
				int characterMapIndex = GetMapIndexById(db, characterMapId);
				if (characterMapIndex >= 0)
				{
					(mapIndex <= characterMapIndex ? future : past).Add(character);
				}
			}
		}
	}
}
}
