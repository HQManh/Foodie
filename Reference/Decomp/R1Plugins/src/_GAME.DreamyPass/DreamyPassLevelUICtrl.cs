using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.DreamyPass;

public class DreamyPassLevelUICtrl : MonoBehaviour
{
	public GameObject objItem;

	public Slider splitUp;

	public Slider splitDown;

	[Header("FreeRw")]
	public RwItemUICtrl rwItemFree;

	public RwBoxUICtrl rwBoxFree;

	public Button btnClaimFree;

	public GameObject tickClaimedFree;

	[Header("PassRw")]
	public RwItemUICtrl rwItemPass;

	public RwBoxUICtrl rwBoxPass;

	public Button btnClaimPass;

	public GameObject tickClaimedPass;

	public GameObject lockActivatePass;

	[Header("Point")]
	public TextMeshProUGUI txtPoint;

	public List<GameObject> tagActive;

	public List<GameObject> tagInactive;

	[Header("RUNTIME")]
	public DreamyPassLevelCfModel config;

	private List<Tweener> _tweenerActive;

	public void Init(int level)
	{
	}

	public void UpdateUIData()
	{
	}

	public void CloseRwTooltip()
	{
	}

	public void ShowRowActive(bool show)
	{
	}

	public void ClaimFreeReward()
	{
	}

	public void ClaimPassReward()
	{
	}
}
