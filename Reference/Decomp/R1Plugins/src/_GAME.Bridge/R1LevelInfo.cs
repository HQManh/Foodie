using CakeOrder;

namespace _GAME.Bridge;

public sealed class R1LevelInfo
{
	public string MapId { get; }

	public int MapIndex { get; }

	public int LevelIndex { get; }

	public bool IsNormalMode { get; }

	public bool IsReplay { get; }

	public int Stt { get; }

	public int Stars { get; internal set; }

	public bool IsEnded { get; internal set; }

	public bool IsFirstTry => false;

	internal CakeLevelInitData Source { get; }

	public R1LevelDifficulty Difficulty => R1LevelDifficulty.Normal;

	internal R1LevelInfo(CakeLevelInitData source, int levelsCompleted)
	{
	}

	public override string ToString()
	{
		return null;
	}
}
