using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RecipeComponentStation : RecipeComponent
	{
		public CakeToolSO toolSO;

		public CookingStation station;

		[Header("Cook time")]
		[Tooltip("Nguyên liệu không có dòng riêng ở dưới thì dùng số này.")]
		public float defaultDuration;

		[HideInInspector]
		public List<StationCookTime> cookTimes;

		protected override bool HasSourceSO => toolSO != null;

		public float GetCookDuration(string resultId)
		{
			if (cookTimes != null && !string.IsNullOrEmpty(resultId))
			{
				foreach (StationCookTime cookTime in cookTimes)
				{
					if (cookTime != null && cookTime.resultId == resultId)
					{
						return cookTime.duration;
					}
				}
			}
			return defaultDuration;
		}

		protected override void CreateSourceSO()
		{
			CakeToolSO asset = CreateSourceAsset<CakeToolSO>();
			if (asset == null)
			{
				return;
			}
			toolSO = asset;
			Sync();
		}

		public override void Sync()
		{
			base.Sync();
			if (!string.IsNullOrWhiteSpace(id))
			{
				if (station == null)
				{
					return;
				}
				station.SetId(id);
				return;
			}
			string name = (toolSO != null) ? toolSO.name : "null"; /* literal recovered by guess */
			Debug.LogError("Recipe station has no id: " + name /* literal recovered by guess */, toolSO);
		}
	}
}
