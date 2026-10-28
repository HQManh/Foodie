using System;
using System.Collections.Generic;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;

namespace CakeOrder.Home.Journey;

public class UIJourneyLevelSelectPopup : UICakePopup
{
	[SerializeField]
	private TMP_Text _txtTitle;

	[SerializeField]
	private Transform _itemContainer;

	[Tooltip("Inactive template living under the item container; cloned once per level.")]
	[SerializeField]
	private UIJourneyLevelSelectItem _templateItem;

	private readonly List<UIJourneyLevelSelectItem> _items;

	private Func<string, int, bool> _onPickLevel;

	private string _mapId;

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	public void SetUp(JourneyLevelMap.MapRange range, string displayName, Func<string, int, bool> onPickLevel)
	{
	}

	private void BuildItems(JourneyLevelMap.MapRange range)
	{
	}

	private void OnClickItem(UIJourneyLevelSelectItem item)
	{
	}
}
