using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "PlayerAvatarCatalogSO", menuName = "ScriptableObjects/CakeOrder/PlayerAvatarCatalogSO", order = 1)]
public class PlayerAvatarCatalogSO : ScriptableObject
{
	[Serializable]
	public class Entry
	{
		[Tooltip("Stable id written to the save file, e.g. 'ava_01'. Never renumber these - a player who saved 'ava_07' expects that same face back.")]
		public string avatarId;

		public Sprite sprite;

		[Tooltip("Locked until something unlocks it through PlayerProfileDataAccess.UnlockAvatar - meant for achievement rewards. A locked face is left out of the Edit Profile grid and is never handed out as the default.")]
		public bool requiresUnlock;
	}

	[Tooltip("Order here is the order shown in the Edit Profile grid.")]
	[SerializeField]
	private Entry[] _entries;

	private Dictionary<string, Sprite> _dict;

	public IReadOnlyList<Entry> Entries => null;

	public string DefaultAvatarId => null;

	public bool RequiresUnlock(string avatarId)
	{
		return false;
	}

	private void BuildDictionary()
	{
	}

	public bool Contains(string avatarId)
	{
		return false;
	}

	public bool TryGetSprite(string avatarId, out Sprite sprite)
	{
		sprite = null;
		return false;
	}

	public Sprite GetSpriteOrDefault(string avatarId)
	{
		return null;
	}
}
