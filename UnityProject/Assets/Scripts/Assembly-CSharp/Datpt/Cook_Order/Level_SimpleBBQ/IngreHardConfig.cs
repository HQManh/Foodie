using System;
using System.Collections.Generic;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	[Serializable]
	public class IngreHardConfig
	{
		public List<EIngredienType> lstIngreTypeOnSkew1 = new List<EIngredienType>();

		public List<EIngredienType> lstIngreTypeOnSkew2 = new List<EIngredienType>();

		public List<EIngredienType> lstDecorOnPlate = new List<EIngredienType>();

		private Stack<EIngredienType> stackAllIngreOnOrder = new Stack<EIngredienType>();

		public List<List<EIngredienType>> GetAllIngreTypeOnSkew()
		{
			List<List<EIngredienType>> result = new List<List<EIngredienType>>();
			result.Add(lstIngreTypeOnSkew1);
			result.Add(lstIngreTypeOnSkew2);
			return result;
		}

		public Stack<EIngredienType> GetStackAllIngreOnOrder()
		{
			foreach (EIngredienType ingreType in lstIngreTypeOnSkew1)
			{
				stackAllIngreOnOrder.Push(ingreType);
			}
			foreach (EIngredienType ingreType2 in lstIngreTypeOnSkew2)
			{
				stackAllIngreOnOrder.Push(ingreType2);
			}
			foreach (EIngredienType ingreType3 in lstDecorOnPlate)
			{
				stackAllIngreOnOrder.Push(ingreType3);
			}
			return stackAllIngreOnOrder;
		}
	}
}
