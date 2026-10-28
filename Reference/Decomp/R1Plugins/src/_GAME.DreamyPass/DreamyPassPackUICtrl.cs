using System.Collections.Generic;
using UnityEngine;
using _GAME.BaseGame;
using _GAME.Profile;
using _GAME.Shop;

namespace _GAME.DreamyPass;

public class DreamyPassPackUICtrl : ShopPackUICtrl
{
	public List<GameObject> rwItemDrop;

	public AvatarStatusUICtrl avatarDeco;

	public NameFxStatusUICtrl nameDeco;

	public override void Setup(IAPSku newSku = IAPSku.none)
	{
	}

	protected override void OnPurchaseSuccess()
	{
	}
}
