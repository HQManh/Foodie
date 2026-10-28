namespace CakeOrder.InGame;

public interface IOrderPriceProvider
{
	int GetOrderPrice(string encodedRecipe);
}
