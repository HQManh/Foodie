using System;

namespace CakeOrder.Model;

[Serializable]
public class OrderRequirementTags : IOrderRequirement
{
	public CustomerOrderRequirementType RequirementType => CustomerOrderRequirementType.Precise;

	public string[] RequiredTags { get; private set; }

	public string[] RejectTags { get; private set; }

	public OrderRequirementTags(string[] required, string[] reject = null)
	{
	}

	public bool IsMatchRequirement(DishData dishData)
	{
		return false;
	}
}
