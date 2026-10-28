using System;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.SaveProfile;
using UnityEngine;

namespace CakeOrder.Home;

public class UIListToolUpgrade : UIElementWithAnim
{
	[SerializeField]
	private RectTransform _itemContainer;

	[SerializeField]
	private UIItemToolUpgrade _prefabItemTool;

	private PlayerMapLevelProgressDataAccess _dataAccess;

	private UIItemToolUpgrade[] _items;

	private UIItemToolUpgrade _selectedItem;

	private bool _isShownItemsFirstTime;

	private const float DELAY_BETWEEN_SHOW_ITEM = 0.05f;

	private SceneMainUI _sceneMainUI;

	public string MapId { get; private set; }

	public RectTransform ItemContainer => null;

	public event Action<string, string> onSelectedItemChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public void SetUp(SceneMainUI sceneMainUI, PlayerMapLevelProgressDataAccess dataAccess, string mapId, MapToolConfig toolConfig)
	{
	}

	private void OnItemSelected(UIItemToolUpgrade item)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	public UIItemToolUpgrade GetItemById(string toolId)
	{
		return null;
	}

	public UIItemToolUpgrade GetItemByIndex(int index)
	{
		return null;
	}
}
