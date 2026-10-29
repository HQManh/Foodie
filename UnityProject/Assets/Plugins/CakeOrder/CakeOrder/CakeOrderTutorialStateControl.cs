using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder
{

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
		// the shipped PlayerPrefs key literals are not in the pseudocode; these names are placeholders
		switch (type)
		{
		case TutType.FirstLevel:
			return "tut_first_level_shown";
		case TutType.Shipper:
			return "tut_shipper_shown";
		case TutType.Boss:
			return "tut_boss_shown";
		case TutType.PickUpBooster:
			return "tut_pickup_booster_shown";
		default:
			throw new System.NotImplementedException();
		}
	}

	public static bool IsShownTut(TutType type)
	{
		if (!IsExistInstance)
		{
			return true;
		}
		return PlayerPrefs.GetInt(GetKeyShownTut(type), 0) == 1;
	}

	public static void SetDoneTut(TutType type)
	{
		if (IsExistInstance)
		{
			string key = GetKeyShownTut(type);
			if (PlayerPrefs.GetInt(key, 0) != 1)
			{
				PlayerPrefs.SetInt(key, 1);
				PlayerPrefs.Save();
			}
		}
	}

	public static void SetDoneTut(params TutType[] types)
	{
		if (!IsExistInstance)
		{
			return;
		}
		for (int i = 0; i < types.Length; i++)
		{
			string key = GetKeyShownTut(types[i]);
			if (PlayerPrefs.GetInt(key, 0) == 1)
			{
				return;
			}
			PlayerPrefs.SetInt(key, 1);
		}
		PlayerPrefs.Save();
	}

	private void ResetTut(TutType type)
	{
		PlayerPrefs.SetInt(GetKeyShownTut(type), 0);
		PlayerPrefs.Save();
	}
}
}
