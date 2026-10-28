using System.Collections.Generic;
using CakeOrder.BaseUI;
using CakeOrder.SaveProfile;
using UnityEngine;

namespace CakeOrder.Home
{

public class UIListToolRecipeCard : UIElementWithAnim
{
	[SerializeField]
	private RectTransform _itemContainer;

	[SerializeField]
	private UIItemToolRecipeCard _prefabItem;

	private const float DELAY_BETWEEN_SHOW_ITEM = 0.05f;

	private PlayerMapLevelProgressDataAccess _dataAccess;

	private readonly List<UIItemToolRecipeCard> _items = new List<UIItemToolRecipeCard>();

	private bool _isShownItemsFirstTime;

	public string MapId { get; private set; }

	public RectTransform ItemContainer => null;

	public void SetUp(PlayerMapLevelProgressDataAccess dataAccess, string mapId, MapToolConfig toolConfig)
	{
	}

	private void SpawnItem(MapToolRecipeEntry entry)
	{
	}

	public void RefreshItems()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	public UIItemToolRecipeCard GetItemByIndex(int index)
	{
		return null;
	}
}
}
