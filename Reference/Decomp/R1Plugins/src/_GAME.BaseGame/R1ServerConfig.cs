using UnityEngine;

namespace _GAME.BaseGame;

[CreateAssetMenu(fileName = "R1ServerConfig", menuName = "R1Plugins/R1ServerConfig")]
public class R1ServerConfig : ScriptableObject
{
	public enum ModeRule
	{
		Auto,
		ForceTest,
		ForceProduct
	}

	[Header("MODE (Auto: Editor + Development Build = Test, release = Product)")]
	public ModeRule modeRule;

	[Header("GAME SERVER FoodiePop: GenServerID (rdn/gn/rn), Team, SaveGame (sg/lg)")]
	public string gameServerUrlTest;

	public string gameServerUrlProduct;

	[Tooltip("Not used yet: waiting for the backend to confirm s1 and s2 share one database.")]
	public string gameServerUrlProductBackup;

	[Header("PROFILE SERVER (ABI shared): Profile, Rank, Inbox")]
	public string profileServerUrlTest;

	public string profileServerUrlProduct;

	public int projectProfileId;

	public int projectInboxId;

	[Header("LOCAL KEYS")]
	[Tooltip("Pick once before release: changing it later unlinks every installed device from its server ID.")]
	public string playerPrefsPrefix;

	private static R1ServerConfig _current;

	public static R1ServerConfig Current => null;

	public ServerMode Mode => ServerMode.Test;

	public string GameServerUrl => null;

	public string ProfileServerUrl => null;

	public string KeyServerId => null;

	public string KeySocialAuthId => null;

	public string KeyServerIdHistory => null;

	public static void SetCurrent(R1ServerConfig config)
	{
	}
}
