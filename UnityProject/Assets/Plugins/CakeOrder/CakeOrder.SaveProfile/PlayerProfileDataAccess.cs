using System;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.SaveProfile
{

public class PlayerProfileDataAccess : MonoSingleton<PlayerProfileDataAccess>
{
	[SerializeField]
	private PlayerProfileDataManager _baseDataManager;

	[Tooltip("Where avatar ids come from and what they draw as. Without it the profile still holds an id, it just cannot be shown.")]
	[SerializeField]
	private PlayerAvatarCatalogSO _avatarCatalog;

	private PlayerProfileDataManager.SaveDataPack _dataPack;

	private const string KeyDataPack = "profile";

	private const string KeyName = "name";

	private const string KeyAvatarId = "avatarId";

	private const string KeyNameEdited = "nameEdited";

	private const string KeyUnlockedAvatars = "unlockedAvatars";

	private const char UnlockedAvatarSeparator = ',';

	public PlayerProfileDataManager DataManager => null;

	public PlayerAvatarCatalogSO AvatarCatalog => null;

	public bool IsHaveData => false;

	public string PlayerName => null;

	public string AvatarId => null;

	public bool IsNameEdited => false;

	public Sprite AvatarSprite => null;

	public event Action onProfileChanged;

	public event Action<string> onAvatarUnlocked;

	protected override void Awake()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void OnDataLoaded()
	{
	}

	private void EnsureDefaults()
	{
	}

	public bool SetProfile(string name, string avatarId)
	{
		return false;
	}

	public bool IsAvatarUnlocked(string avatarId)
	{
		return false;
	}

	public bool UnlockAvatar(string avatarId)
	{
		return false;
	}

	private string[] GetUnlockedAvatarIds()
	{
		return null;
	}

	private string GetString(string key)
	{
		return null;
	}

	private void SetString(string key, string value)
	{
	}

	private void SetInt(string key, int value)
	{
	}
}
}
