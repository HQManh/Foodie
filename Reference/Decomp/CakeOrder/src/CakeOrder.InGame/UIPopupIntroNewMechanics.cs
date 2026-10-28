using CakeOrder.BaseUI;
using UnityEngine;

namespace CakeOrder.InGame;

public class UIPopupIntroNewMechanics : UICakePopup
{
	[SerializeField]
	private SfxAndHapticTrigger _sfxShow;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public override void HideByBackButton()
	{
	}
}
