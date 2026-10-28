namespace _GAME.GameUI;

public class SingletonFI<T> : UIIconFeature where T : UIIconFeature
{
	private static T _instance;

	public static T Ins => null;

	protected virtual void Awake()
	{
	}

	protected virtual void OnDestroy()
	{
	}
}
