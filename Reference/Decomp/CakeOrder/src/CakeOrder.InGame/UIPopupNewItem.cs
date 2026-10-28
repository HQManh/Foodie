using System.Collections.Generic;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame;

public class UIPopupNewItem : UICakePopup
{
	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private TextMeshProUGUI _txtTitle;

	[SerializeField]
	private TextMeshProUGUI _txtDescription;

	[SerializeField]
	private TextMeshProUGUI _txtRewardAmount;

	[SerializeField]
	private SfxAndHapticTrigger _sfxShow;

	private List<IRewardItemInfo> _itemInfos;

	private List<int> _amounts;

	private int _currentIndex;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public override void HideByBackButton()
	{
	}

	public void SetData(IRewardItemInfo itemInfos, int amounts)
	{
	}

	public void SetData(List<IRewardItemInfo> itemInfos, List<int> amounts)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnClickClose()
	{
	}

	private void ShowNextItem()
	{
	}
}
