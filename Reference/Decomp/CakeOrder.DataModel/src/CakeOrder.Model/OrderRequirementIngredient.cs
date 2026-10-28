using System;

namespace CakeOrder.Model;

[Serializable]
public class OrderRequirementIngredient : IOrderRequirement
{
	public CustomerOrderRequirementType RequirementType => CustomerOrderRequirementType.Precise;

	public string[] RequiredIngredient { get; private set; }

	public string[] RejectIngredient { get; private set; }

	public OrderRequirementIngredient(string[] required, string[] reject = null)
	{
	}

	public bool IsMatchRequirement(DishData dishData)
	{
		return false;
	}
}
