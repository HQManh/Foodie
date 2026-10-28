using System.Collections.Generic;
using UnityEngine;
using _GAME.GameItem;

namespace _GAME.GameUI;

public class RwListUICtrl : MonoBehaviour
{
	public List<RwItemUICtrl> listRwItemUI;

	public RectTransform listRwItemUILayout;

	public void SetData(List<RwItemModel> listRwItem)
	{
	}

	public List<RwItemUICtrl> GetRewardActive()
	{
		return null;
	}
}
