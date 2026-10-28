using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.StageRace;

public class StageRacePlayerUICtrl : MonoBehaviour
{
	public int index;

	public Slider sliderPoint;

	public GameObject objRacing;

	public TextMeshProUGUI txtPoint;

	public GameObject roadFinished;

	public AvatarStatusUICtrl ueAvatar;

	public FrameStatusUICtrl ueFrame;

	public NameFxStatusUICtrl ueName;

	public RwBoxUICtrl winReward;

	public void UpdatePlayerPoint()
	{
	}

	public bool ShowEffectChangePoint()
	{
		return false;
	}
}
