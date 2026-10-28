namespace Datpt.Cook_Order
{
	public class SalerMachine : ItemIdleBase
	{
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
