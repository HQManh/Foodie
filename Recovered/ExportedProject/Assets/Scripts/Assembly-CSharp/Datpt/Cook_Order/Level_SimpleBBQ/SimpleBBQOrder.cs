using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class SimpleBBQOrder : Order
	{
		[SerializeField]
		protected int itemRandomOnOrderConfig;

		[SerializeField]
		protected List<SkewerOnOrder> lstSkewerOnOrder;

		[SerializeField]
		protected List<EIngredienType> lstItemOnOrderConfigs;

		[SerializeField]
		protected List<ItemOnOrderConfig> lstSubOrder;

		protected List<EIngredienType> lstIngreTarget;

		protected List<EIngredienType> lstSubOrderItem;

		protected List<GameObject> lstItemOnOrderObj;

		protected List<SkewerOnOrder> lstCurrentSkewerOnOrder;

		[CompilerGenerated]
		private Action<List<EIngredienType>> m_OnOrderShowed;

		public List<EIngredienType> LstIngreTarget => null;

		private LevelSimpleBBQ levelSimpleBBQ => null;

		public event Action<List<EIngredienType>> OnOrderShowed
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public override void Init()
		{
		}

		public List<ItemOnOrderConfig> GetRandomSubOrder(int minCount, int maxCount)
		{
			return null;
		}

		public override void HideOrder(Action onComplete = null)
		{
		}

		public override void ResetOrder()
		{
		}

		public bool CheckOrder(PlateSkew plateSkew)
		{
			return false;
		}

		public bool ComparePlates(PlateSkew plate)
		{
			return false;
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}
	}
}
