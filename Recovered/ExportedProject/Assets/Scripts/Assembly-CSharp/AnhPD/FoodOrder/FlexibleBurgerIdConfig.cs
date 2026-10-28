using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(menuName = "AnhPD/FlexibleBurger ID Config", fileName = "FlexibleBurgerIdConfig")]
	public class FlexibleBurgerIdConfig : ScriptableObject
	{
		[Serializable]
		public struct Entry
		{
			public FlexibleBurger.FillingType type;

			public Sprite icon;
		}

		public Entry[] entries;
	}
}
