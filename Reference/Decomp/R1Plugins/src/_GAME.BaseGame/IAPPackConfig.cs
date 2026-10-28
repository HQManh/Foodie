using System;
using System.Collections.Generic;
using _GAME.GameItem;

namespace _GAME.BaseGame;

[Serializable]
public class IAPPackConfig
{
	public IAPSku sku;

	public float priceUsd;

	public string saleTag;

	public List<RwItemModel> listRwItem;

	[NonSerialized]
	public string LocalizedPriceString;

	[NonSerialized]
	public bool IsGrantedByCookOrder;

	public List<RwItemModel> listR1RwItem;
}
