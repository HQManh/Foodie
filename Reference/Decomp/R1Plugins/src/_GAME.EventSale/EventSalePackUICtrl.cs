using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.BaseGame;
using _GAME.GameUI;

namespace _GAME.EventSale;

public class EventSalePackUICtrl : MonoBehaviour
{
	public List<RwItemUICtrl> listRwItemUI;

	public GameObject tickBuyed;

	public Button btnBuyPack;

	public TextMeshProUGUI txtPrice;

	private int _packIndex;

	private EventSalePackCfModel _evPackConfig;

	private IAPPackConfig _iapPackConfig;

	private int _callbackDataId;

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void Setup(int packIndex)
	{
	}

	private void UpdateStatus()
	{
	}

	private void BuyPack()
	{
	}
}
