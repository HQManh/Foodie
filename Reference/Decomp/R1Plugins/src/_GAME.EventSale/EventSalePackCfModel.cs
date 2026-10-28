using System;
using _GAME.BaseGame;

namespace _GAME.EventSale;

[Serializable]
public class EventSalePackCfModel
{
	public int packIndex;

	public IAPSku packSku;

	public EventSalePackCfModel Copy(EventSalePackCfModel copy = null)
	{
		return null;
	}
}
