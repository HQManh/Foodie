using CakeOrder.BaseUI;

namespace _GAME.GameUI;

public class PopupLoadingCtrl : PopupSingleton<PopupLoadingCtrl>
{
	public override PopupSize Size => (PopupSize)0;

	protected override bool PlayOpenCloseSfx => false;

	public override void HideByBackButton()
	{
	}
}
