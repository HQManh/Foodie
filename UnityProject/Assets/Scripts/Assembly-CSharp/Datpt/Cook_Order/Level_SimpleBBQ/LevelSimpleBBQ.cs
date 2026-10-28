using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class LevelSimpleBBQ : LevelControlCookOrder
	{
		[SerializeField]
		private List<IngreHardConfig> lstSkewIngreHardConfigs;

		private Dictionary<int, Stack<EIngredienType>> dicStackAllIngreOnOrder = new Dictionary<int, Stack<EIngredienType>>();

		public static LevelSimpleBBQ LevelSimpleBBQIns => LevelControlCookOrder.Ins as LevelSimpleBBQ;

		public List<IngreHardConfig> LstSkewIngreHardConfigs => lstSkewIngreHardConfigs;

		protected override void Start()
		{
			LevelConfigStart();
			if (!IsHaveListItemHardConfig)
			{
				return;
			}
			// TODO(unrecovered): builds dicStackAllIngreOnOrder from lstSkewIngreHardConfigs through IL2CPP enumerators and calls an unnamed virtual slot (0x328) per ingredient; the slot target and the list helpers are not in the stubs.
		}

		public override void UpdateAllIngreTarget(EIngredienType type, int value = 1)
		{
			if ((int)type == 7)
			{
				return;
			}
			base.UpdateAllIngreTarget(type, value);
		}

		public override void UpdateDicIngreSpawned(EIngredienType type, int value = 1)
		{
			if ((int)type == 7)
			{
				return;
			}
			base.UpdateDicIngreSpawned(type, value);
		}

		public override void UpdateCurrentIngredientTypeAndCountOnOrder(EIngredienType type, int value = 1)
		{
			if ((int)type == 7)
			{
				return;
			}
			base.UpdateCurrentIngredientTypeAndCountOnOrder(type, value);
		}

		public override void UpdateCurrentIngredientTypeOnScreen(EIngredienType type, int value = 1)
		{
			if ((int)type == 7)
			{
				return;
			}
			base.UpdateCurrentIngredientTypeOnScreen(type, value);
		}

		public override void AddRateItemInWeightDic(EIngredienType type)
		{
			if ((int)type == 7)
			{
				return;
			}
			base.AddRateItemInWeightDic(type);
		}

		public override void RandomeNewIngredient()
		{
			// TODO(unrecovered): the non-target branch calls an unnamed virtual slot (0x308) and the target branch walks lstSkewIngreHardConfigs and dicStackAllIngreOnOrder through IL2CPP enumerators and an unnamed Stack/List helper set; not recoverable from the stubs.
		}
	}
}
