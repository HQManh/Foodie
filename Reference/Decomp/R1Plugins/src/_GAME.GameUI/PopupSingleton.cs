namespace _GAME.GameUI;

public class PopupSingleton<T> : PopupBaseCtrl where T : PopupBaseCtrl
{
	private static T _instance;

	public static T Ins => null;

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected virtual void OnDestroy()
	{
	}
}
