using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.Profile;

[CreateAssetMenu(fileName = "SOProfileConfig", menuName = "BaseGame/SOProfileConfig", order = 200)]
public class SOProfileConfig : SingletonSO<SOProfileConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public static int NameLenMin;

	public static int NameLenMax;

	public List<int> listAvatarStt;

	public List<GameObject> listAvatar;

	public List<AvatarUnlockRule> listAvatarUnlock;

	public List<int> listFrameStt;

	public List<GameObject> listFrame;

	public List<int> listNameFxStt;

	public List<NameFxCtrl> listNameFx;

	public static List<int> ListAvatarStt => null;

	public static List<GameObject> ListAvatar => null;

	public static List<int> ListFrameStt => null;

	public static List<GameObject> ListFrame => null;

	public static List<int> ListNameFxStt => null;

	public static List<NameFxCtrl> ListNameFx => null;

	public static AvatarUnlockRule GetAvatarUnlockRule(int index)
	{
		return null;
	}

	public void Load(SOProfileConfig newInstance)
	{
	}

	public static GameObject GetAvatar(int index)
	{
		return null;
	}

	public static GameObject GetFrame(int index)
	{
		return null;
	}

	public static bool HasFrame(int index)
	{
		return false;
	}

	public static NameFxCtrl GetNameFx(int index)
	{
		return null;
	}

	public static int GetLevelReqOfFrame(int index)
	{
		return 0;
	}
}
