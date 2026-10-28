using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class SimpleBBQOrder : Order
	{
		[SerializeField]
		protected int itemRandomOnOrderConfig = 2;

		[SerializeField]
		protected List<SkewerOnOrder> lstSkewerOnOrder;

		[SerializeField]
		protected List<EIngredienType> lstItemOnOrderConfigs;

		[SerializeField]
		protected List<ItemOnOrderConfig> lstSubOrder;

		protected List<EIngredienType> lstIngreTarget = new List<EIngredienType>();

		protected List<EIngredienType> lstSubOrderItem = new List<EIngredienType>();

		protected List<GameObject> lstItemOnOrderObj = new List<GameObject>();

		protected List<SkewerOnOrder> lstCurrentSkewerOnOrder = new List<SkewerOnOrder>();

		[CompilerGenerated]
		private Action<List<EIngredienType>> m_OnOrderShowed;

		public List<EIngredienType> LstIngreTarget => lstIngreTarget;

		private LevelSimpleBBQ levelSimpleBBQ => LevelControlCookOrder.Ins as LevelSimpleBBQ;

		public event Action<List<EIngredienType>> OnOrderShowed
		{
			[CompilerGenerated]
			add
			{
				Action<List<EIngredienType>> action = m_OnOrderShowed;
				Action<List<EIngredienType>> action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnOrderShowed, (Action<List<EIngredienType>>)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action<List<EIngredienType>> action = m_OnOrderShowed;
				Action<List<EIngredienType>> action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnOrderShowed, (Action<List<EIngredienType>>)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		public override void Init()
		{
			base.Init();
			// TODO(unrecovered): the delayed callback (0.25s, scaled) runs a lambda (DisplayClass15_0.<Init>b__0) that is not recovered in full; the callback body is not in the stubs.
		}

		public List<ItemOnOrderConfig> GetRandomSubOrder(int minCount, int maxCount)
		{
			int count = UnityEngine.Random.Range(minCount, maxCount + 1);
			List<ItemOnOrderConfig> shuffled = new List<ItemOnOrderConfig>(lstSubOrder);
			int size = shuffled.Count;
			for (int i = 0; i < size; i++)
			{
				int j = UnityEngine.Random.Range(i, size);
				ItemOnOrderConfig tmp = shuffled[j];
				shuffled[j] = shuffled[i];
				shuffled[i] = tmp;
			}
			if (size <= count)
			{
				count = size;
			}
			return shuffled.GetRange(0, count);
		}

		public override void HideOrder(Action onComplete = null)
		{
			base.HideOrder(onComplete);
			// TODO(unrecovered): an unnamed no-argument virtual slot (0x328) is called on this after the base hide; the slot target is not identified in the stubs.
		}

		public override void ResetOrder()
		{
			// TODO(unrecovered): rebuilds the skewer and sub-order lists from lstSkewerOnOrder/lstSubOrder through IL2CPP enumerators and tween callbacks; the helper set is not in the stubs.
		}

		public bool CheckOrder(PlateSkew plateSkew)
		{
			// TODO(unrecovered): compares plates through the ComparePlates and sub-order helpers, with closures over several lists; the helper callees are not fully recovered.
			return false;
		}

		public bool ComparePlates(PlateSkew plate)
		{
			// TODO(unrecovered): plate comparison uses several IL2CPP lambdas (DisplayClass <>c.<ComparePlates>b__20_0..5) that are not recovered.
			return false;
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the take path uses DOTween callbacks and interface slots on the moving item and LevelSimpleBBQ helpers; not recoverable from the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the fast-path type check uses a class (DAT_091891a0) that is not identified in the stubs; the base fallback is ItemIdleBase.CheckCanTake.
			return false;
		}
	}
}
