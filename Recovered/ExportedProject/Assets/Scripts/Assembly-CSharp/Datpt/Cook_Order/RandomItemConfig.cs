using System;
using System.Collections.Generic;

namespace Datpt.Cook_Order
{
	[Serializable]
	public class RandomItemConfig
	{
		public Dictionary<EIngredienType, float> dicWeightRandomItem;

		private const float defaultWeight = 10f;

		public void InitDicWeightItem(List<IngredientData> lstIngreData)
		{
		}

		public void AddWeight(EIngredienType ingredienType, float percent)
		{
		}

		public void ResetDefaultWeight(EIngredienType ingredienType)
		{
		}

		public float GetTotalWeightOnDic()
		{
			return 0f;
		}

		public EIngredienType RandomItemInWeightDic()
		{
			return EIngredienType.None;
		}
	}
}
