using System;
using CakeOrder.SaveProfile;
using MessagePack;
using PlatformServiceR1;

namespace CakeOrder
{

public class CookUnifiedCloudSaveData : UnifiedSaveDataAbstract
{
	[Key(0)]
	public DateTime timeCreated;

	[Key(1)]
	public PlayerProfileDataManager.RawData profile;

	[Key(2)]
	public PlayerMapLevelProgressDataManager.RawData level;

	public override DateTime GetTimeCreated()
	{
		return default(DateTime);
	}

	public override void SetTimeCreated(DateTime value)
	{
	}

	public override byte[] ToBytes()
	{
		return null;
	}
}
}
