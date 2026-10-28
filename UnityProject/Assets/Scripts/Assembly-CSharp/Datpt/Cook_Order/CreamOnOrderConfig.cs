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
			Stack<EIngredienType> stack = new Stack<EIngredienType>();
			stack.Push(creamType);
			stack.Push((EIngredienType)4);
			stack.Push((EIngredienType)5);
			if (lstDecorType != null)
			{
				foreach (EIngredienType decor in lstDecorType)
				{
					stack.Push(decor);
				}
			}

			return stack;
		}

		public List<EIngredienType> GetListIngreType()
		{
			List<EIngredienType> list = new List<EIngredienType>();
			list.Add(creamType);
			list.Add((EIngredienType)4);
			list.Add((EIngredienType)5);
			if (lstDecorType != null)
			{
				foreach (EIngredienType decor in lstDecorType)
				{
					list.Add(decor);
				}
			}

			return list;
		}
	}
}
