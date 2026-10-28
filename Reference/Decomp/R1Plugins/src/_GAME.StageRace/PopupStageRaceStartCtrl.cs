using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.StageRace;

public class PopupStageRaceStartCtrl : PopupSingleton<PopupStageRaceStartCtrl>
{
	public TextMeshProUGUI txtTime;

	public List<TextMeshProUGUI> listTextStage;

	public List<GameObject> listStageObjActive;

	public TextMeshProUGUI txtDesc;

	public Button btnInfo;

	public Button btnStart;

	public Button btnContinue;

	public RwBoxUICtrl winReward;

	public GameObject handTutFirstOpen;

	private int _callbackTickId;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	private void CheckFirstOpen()
	{
	}

	private void OnUpdateTime()
	{
	}

	private void OpenPopupInfo()
	{
	}

	private void StartRace()
	{
	}

	public override void Close()
	{
	}

	protected override void OnDestroy()
	{
	}
}
