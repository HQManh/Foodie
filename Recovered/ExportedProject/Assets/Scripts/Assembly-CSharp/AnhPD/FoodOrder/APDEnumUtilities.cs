using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class APDEnumUtilities : MonoBehaviour
	{
		private static readonly System.Random Rng;

		public static T GetRandomEnumValueExclude<T>(List<T> excludeList = null) where T : Enum
		{
			return default;
		}

		public static T GetRandomEnumValueExcludeInList<T>(List<T> values, List<T> excludeList = null) where T : Enum
		{
			return default;
		}

		public static T GetRandomEnumValue<T>(List<T> values = null) where T : Enum
		{
			return default;
		}

		public static List<T> GetEnumValuesExcluding<T>(List<T> excludeList = null) where T : Enum
		{
			return null;
		}
	}
}
