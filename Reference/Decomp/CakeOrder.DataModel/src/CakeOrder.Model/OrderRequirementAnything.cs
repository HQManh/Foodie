using System;

namespace CakeOrder.Model;

[Serializable]
public class OrderRequirementAnything : IOrderRequirement
{
	public CustomerOrderRequirementType RequirementType => CustomerOrderRequirementType.Precise;

	public bool IsMatchRequirement(DishData dishData)
	{
		return false;
	}
}
