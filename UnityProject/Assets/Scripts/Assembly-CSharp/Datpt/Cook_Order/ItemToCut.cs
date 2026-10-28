namespace Datpt.Cook_Order
{
	public class ItemToCut : IngredientItem, IItemToCut
	{
		public void OnKnifeInteract()
		{
			// TODO(unrecovered): the pseudocode punch-scales this transform with a DOTween tween and resets its local scale in a callback, using a scale config read from an unnamed singleton that is not in the stubs.
		}
	}
}
