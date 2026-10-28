using System;

namespace _GAME.SaveGame;

[Serializable]
public class SaveGameModel
{
	public const int SchemaVersion = 1;

	public int sv;

	public string own;

	public long t;

	public int pl;

	public int aV;

	public SaveGameSummary sum;

	public CoreSaveBlock core;

	public R1SaveBlock r1;

	public SaveGameStats.Block st;
}
