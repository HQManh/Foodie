using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.UI;

public class UIPopupToolUpgraded : UICakePopup
{
	private const string LocTitle = "title_tool_upgraded";

	private const string LocNowFaster = "tool_now_faster";

	private const string LocNowMaxSpeed = "tool_now_max_speed";

	[SerializeField]
	private TextMeshProUGUI _textTitle;

	[SerializeField]
	private TextMeshProUGUI _textDesc;

	[Tooltip("The upgrade part's thumbnail, shown in the center.")]
	[SerializeField]
	private Image _imgThumb;

	[Tooltip("Pops the thumbnail in when the popup opens. Optional.")]
	[SerializeField]
	private UIAnimShowHideControl _thumbAnim;

	[SerializeField]
	private SfxAndHapticTrigger _sfxOnOpen;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public override void HideByBackButton()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	public void SetData(string toolTitle, Sprite thumb, bool isMaxSpeed)
	{
	}
}
