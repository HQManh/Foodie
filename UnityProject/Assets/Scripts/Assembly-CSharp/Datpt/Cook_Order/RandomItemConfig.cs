using System;
using System.Collections.Generic;
using System.Linq;

namespace Datpt.Cook_Order
{
	[Serializable]
	public class RandomItemConfig
	{
		public Dictionary<EIngredienType, float> dicWeightRandomItem = new Dictionary<EIngredienType, float>();

		private const float defaultWeight = 10f;

		public void InitDicWeightItem(List<IngredientData> lstIngreData)
		{
			if (lstIngreData == null)
			{
				return;
			}
			foreach (IngredientData data in lstIngreData)
			{
				if (!dicWeightRandomItem.ContainsKey(data.type))
				{
					dicWeightRandomItem.Add(data.type, defaultWeight);
				}
			}
		}

		public void AddWeight(EIngredienType ingredienType, float percent)
		{
			// TODO(unrecovered): the weight update branches call unnamed Dictionary helpers FUN_06f375a0/FUN_06f3763c/FUN_06f37628 whose exact semantics (get vs. tryget vs. set) cannot be confirmed from the stubs.
		}

		public void ResetDefaultWeight(EIngredienType ingredienType)
		{
			if (dicWeightRandomItem.ContainsKey(ingredienType))
			{
				dicWeightRandomItem[ingredienType] = defaultWeight;
			}
		}

		public float GetTotalWeightOnDic()
		{
			return dicWeightRandomItem.Values.Sum();
		}

		public EIngredienType RandomItemInWeightDic()
		{
			// TODO(unrecovered): weighted random pick needs the unnamed helpers FUN_04e4e228 (random), FUN_04b087f8/FUN_071aef5c enumerator walk and AddWeight, none of which are confirmed by stubs.
			return EIngredienType.None;
		}
	}
}
