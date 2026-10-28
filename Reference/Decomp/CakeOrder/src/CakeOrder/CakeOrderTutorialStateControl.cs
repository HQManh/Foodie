using EssentialSystemR1;

namespace CakeOrder;

public class CakeOrderTutorialStateControl : MonoSingleton<CakeOrderTutorialStateControl>
{
	public enum TutType
	{
		FirstLevel,
		Shipper,
		Boss,
		PickUpBooster,
		None
	}

	private static string GetKeyShownTut(TutType type)
	{
		return null;
	}

	public static bool IsShownTut(TutType type)
	{
		return false;
	}

	public static void SetDoneTut(TutType type)
	{
	}

	public static void SetDoneTut(params TutType[] types)
	{
	}

	private void ResetTut(TutType type)
	{
	}
}
