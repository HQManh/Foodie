using CakeOrder.InGame;
using EssentialSystemR1;

namespace CakeOrder
{

public sealed class WinStreakControl : MonoSingleton<WinStreakControl>
{
	public const int MaxWinStreak = 3;

	public int CurrentWinStreak => 0;

	public int CalculateNext(int initialStreak, GameResultType result)
	{
		return 0;
	}

	public int RecordLevelResult(int initialStreak, GameResultType result)
	{
		return 0;
	}
}
}
