using System.Collections.Generic;
using UnityEngine;
using _GAME.GameItem;

namespace _GAME.GameUI;

public class RwBoxUICtrl : MonoBehaviour
{
	public Canvas objRwItemCanvas;

	public RectTransform objRwItemLayout;

	public List<RwItemUICtrl> listRwItemUI;

	private List<RwItemModel> _listRwItemData;

	private bool _uiUpdated;

	public List<RwItemModel> ListRwItemData => null;

	private void Awake()
	{
	}

	public void SetData(List<RwItemModel> listRwItem)
	{
	}

	private void Update()
	{
	}

	public void ShowReward()
	{
	}

	private Canvas GetSortingCanvas()
	{
		return null;
	}

	public void ForceHideReward()
	{
	}
}
