using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.StageRace;

[CreateAssetMenu(fileName = "SOStageRaceConfig", menuName = "EventLoop/SOStageRaceConfig", order = 100)]
public class SOStageRaceConfig : SingletonSO<SOStageRaceConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public const int LevelUnlock = 26;

	public const int ExistTime = 604800;

	public List<StageRaceStageCfModel> listStage;

	public List<string> listFakeName;

	public static List<StageRaceStageCfModel> ListStage => null;

	public static List<string> ListFakeName => null;

	public static int NumbStage => 0;

	public void Load(SOStageRaceConfig newInstance)
	{
	}

	public static StageRaceStageCfModel GetStageConfig(int stage)
	{
		return null;
	}
}
