namespace CakeOrder.Model;

public class OrderRequirementPrice : IOrderRequirement
{
	public int MinPrice { get; private set; }

	public int MaxPrice { get; private set; }

	public CustomerOrderRequirementType RequirementType => CustomerOrderRequirementType.Precise;

	public OrderRequirementPrice(int minPrice, int maxPrice)
	{
	}

	public bool IsMatchRequirement(DishData dishData)
	{
		return false;
	}
}
