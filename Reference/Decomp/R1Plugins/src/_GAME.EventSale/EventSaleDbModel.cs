using System;
using System.Collections.Generic;

namespace _GAME.EventSale;

[Serializable]
public class EventSaleDbModel
{
	[Serializable]
	public class SaveGameModel
	{
		public List<bool> h2026;

		public SaveGameModel()
		{
		}

		public SaveGameModel(EventSaleDbModel model)
		{
		}
	}

	public List<bool> halloween2026;

	public static EventSaleDbModel Load()
	{
		return null;
	}

	private void Save()
	{
	}

	public void AddSaveAction()
	{
	}

	public void FromSaveGameModel(SaveGameModel sModel)
	{
	}
}
