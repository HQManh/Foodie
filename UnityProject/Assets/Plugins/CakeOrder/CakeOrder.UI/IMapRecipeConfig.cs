using CakeOrder.DataSO;

namespace CakeOrder.UI
{

public interface IMapRecipeConfig
{
	SimpleItemWithIconIdSO GetToolIcon(string toolId);

	SimpleItemWithIconIdSO GetIngredientIcon(string ingredientId);
}
}
