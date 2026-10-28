using System;
using System.Collections.Generic;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	[Serializable]
	public class IngreHardConfig
	{
		public List<EIngredienType> lstIngreTypeOnSkew1;

		public List<EIngredienType> lstIngreTypeOnSkew2;

		public List<EIngredienType> lstDecorOnPlate;

		private Stack<EIngredienType> stackAllIngreOnOrder;

		public List<List<EIngredienType>> GetAllIngreTypeOnSkew()
		{
			return null;
		}

		public Stack<EIngredienType> GetStackAllIngreOnOrder()
		{
			return null;
		}
	}
}
