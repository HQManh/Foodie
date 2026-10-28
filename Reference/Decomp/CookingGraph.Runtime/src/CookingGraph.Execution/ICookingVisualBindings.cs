namespace CookingGraph.Execution;

public interface ICookingVisualBindings
{
	int GridCellCapacity { get; }

	int ServingDishCapacity { get; }

	bool HasEndpoint(CookingEndpoint endpoint);

	bool HasIngredient(int denseIngredientIndex);
}
