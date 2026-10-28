using System;

namespace CakeOrder.PopupMinigame;

[Serializable]
public class UIPopupMinigameConfig
{
	public const int MAX_VIEW_SIZE_DEFAULT = 2048;

	public CookOrderPopupMinigameControllerAbstract.ViewSetting viewConfig;
}
