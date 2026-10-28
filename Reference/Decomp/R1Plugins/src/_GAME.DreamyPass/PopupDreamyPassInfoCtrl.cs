using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.DreamyPass;

public class PopupDreamyPassInfoCtrl : PopupSingleton<PopupDreamyPassInfoCtrl>
{
	public AvatarStatusUICtrl avaDeco;

	public NameFxStatusUICtrl nameDeco;

	public List<GameObject> listObjInfo;

	public override void Open()
	{
	}
}
