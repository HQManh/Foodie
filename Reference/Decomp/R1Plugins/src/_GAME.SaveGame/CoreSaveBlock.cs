using System;
using System.Collections.Generic;
using CakeOrder.SaveProfile;
using LiveOpsR1;

namespace _GAME.SaveGame;

[Serializable]
public class CoreSaveBlock
{
	public const int SchemaVersion = 1;

	public int sv;

	public long t;

	public RawData pf;

	public RawData pg;

	public RawData lo;

	public Dictionary<string, int> pp;

	public Snapshot ToSnapshot()
	{
		return null;
	}
}
