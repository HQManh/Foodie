using System;
using System.Collections.Generic;

namespace Datpt.Cook_Order
{
	[Serializable]
	public struct CreamOnOrderConfig
	{
		public EIngredienType creamType;

		public List<EIngredienType> lstDecorType;

		public Stack<EIngredienType> GetStackIngreType()
		{
			return null;
		}

		public List<EIngredienType> GetListIngreType()
		{
			return null;
		}
	}
}
