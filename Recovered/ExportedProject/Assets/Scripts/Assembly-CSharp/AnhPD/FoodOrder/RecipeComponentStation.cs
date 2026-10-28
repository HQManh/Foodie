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

		protected override bool HasSourceSO => false;

		public float GetCookDuration(string resultId)
		{
			return 0f;
		}

		protected override void CreateSourceSO()
		{
		}

		public override void Sync()
		{
		}
	}
}
