using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class LevelSimpleBBQ : LevelControlCookOrder
	{
		[SerializeField]
		private List<IngreHardConfig> lstSkewIngreHardConfigs;

		private Dictionary<int, Stack<EIngredienType>> dicStackAllIngreOnOrder;

		public static LevelSimpleBBQ LevelSimpleBBQIns => null;

		public List<IngreHardConfig> LstSkewIngreHardConfigs => null;

		protected override void Start()
		{
		}

		public override void UpdateAllIngreTarget(EIngredienType type, int value = 1)
		{
		}

		public override void UpdateDicIngreSpawned(EIngredienType type, int value = 1)
		{
		}

		public override void UpdateCurrentIngredientTypeAndCountOnOrder(EIngredienType type, int value = 1)
		{
		}

		public override void UpdateCurrentIngredientTypeOnScreen(EIngredienType type, int value = 1)
		{
		}

		public override void AddRateItemInWeightDic(EIngredienType type)
		{
		}

		public override void RandomeNewIngredient()
		{
		}
	}
}
