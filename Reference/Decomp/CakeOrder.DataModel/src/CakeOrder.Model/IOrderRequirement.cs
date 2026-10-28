namespace CakeOrder.Model;

public interface IOrderRequirement
{
	CustomerOrderRequirementType RequirementType { get; }

	bool IsMatchRequirement(DishData dishData);
}
