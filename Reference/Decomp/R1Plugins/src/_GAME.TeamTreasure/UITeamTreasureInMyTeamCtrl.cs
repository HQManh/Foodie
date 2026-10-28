using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.TeamTreasure;

public class UITeamTreasureInMyTeamCtrl : SingletonX<UITeamTreasureInMyTeamCtrl>
{
	public TextMeshProUGUI txtTime;

	public Slider sliderPoint;

	public TextMeshProUGUI txtPoint;

	public List<TeamTreasureRewardStepUICtrl> listRwStep;

	public static void Init()
	{
	}
}
