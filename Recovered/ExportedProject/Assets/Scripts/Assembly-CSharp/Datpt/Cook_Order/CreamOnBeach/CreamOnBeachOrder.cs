using System;
using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class CreamOnBeachOrder : Order
	{
		[SerializeField]
		private List<ItemOnCreamOrder> lstItemOnOrder;

		[SerializeField]
		private List<EIngredienType> lstCreamType;

		[SerializeField]
		private List<EIngredienType> lstDecorType;

		[SerializeField]
		private EIngredienType coneBaseIngreType;

		[SerializeField]
		private EIngredienType creamBaseIngreType;

		private HashSet<EIngredienType> hstIngreOnOrder;

		private EIngredienType mainCreamType;

		private LevelCreamOnBeach levelCreamOnBeach => null;

		public override void Init()
		{
		}

		private void RandomItemOnOrder()
		{
		}

		private void GetItemFromHardConfig()
		{
		}

		private void ShowMainCreamType(EIngredienType creamType)
		{
		}

		public override void HideOrder(Action onComplete = null)
		{
		}

		public override void ResetOrder()
		{
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}

		private bool CheckOrder(HashSet<EIngredienType> hstIngreTypeTake)
		{
			return false;
		}
	}
}
