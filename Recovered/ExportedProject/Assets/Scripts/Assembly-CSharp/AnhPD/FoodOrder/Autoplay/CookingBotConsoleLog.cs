using CookingGraph;
using UnityEngine;

namespace AnhPD.FoodOrder.Autoplay
{
	public sealed class CookingBotConsoleLog : ICookingBotVerboseLogListener
	{
		private readonly Object _context;

		public CookingBotConsoleLog(Object context)
		{
		}

		public void OnCookingBotVerboseLog(CookingBotVerboseLog entry)
		{
		}
	}
}
