using System;

namespace CakeOrder.InGame;

public class LevelSaveMeControl
{
	private const int BlockIdOutOfServeSlots = 1003;

	private const int BlockIdCustomerOutOfTime = 1004;

	private const int BlockIdBeltDeadlock = 1005;

	private readonly LevelPlayLoadAndSetupControl _owner;

	private bool offerPending;

	private LevelBaseCakeOrderAbstract LevelBase => null;

	private CakeLevelRuntimeData RuntimeData => null;

	private CakeLevelInitData InitData => null;

	private BoosterAndSaveMeRemoteConfig Config => null;

	public LevelSaveMeControl(LevelPlayLoadAndSetupControl owner)
	{
	}

	public void HandleBeltDeadlock()
	{
	}

	public void HandleOutOfServeSlot()
	{
	}

	public bool HandleCustomerOutOfTime()
	{
		return false;
	}

	private void Lose()
	{
	}

	private int CountHardCurrencySaveMeInLevel()
	{
		return 0;
	}

	private static string KeyNumFreeShown(SaveMeType saveMeType)
	{
		return null;
	}

	private static bool Refuse(SaveMeType saveMeType, string reason)
	{
		return false;
	}

	private bool ShowSaveMe(SaveMeType saveMeType, int saveMeBlockId, Action handleOnSuccess)
	{
		return false;
	}
}
