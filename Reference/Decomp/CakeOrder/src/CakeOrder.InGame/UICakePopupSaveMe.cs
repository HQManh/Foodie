using UnityEngine;

namespace CakeOrder.InGame;

public class UICakePopupSaveMe : UIPopupBoosterSaveMeBase
{
	[SerializeField]
	private bool _enableHoldToView;

	[SerializeField]
	private SaveMeType _saveMeType;

	protected override bool EnableHoldToView => false;

	protected override string HardCurrencySpendSource => null;

	protected override void OnShownPackBought(string shopId)
	{
	}
}
