namespace CakeOrder.InGame
{

public interface ISpawnControl
{
	void SpawnCustomer(CustomerSpawnData data);

	OrderPricingInput SimulatePricing(CustomerSpawnData data);
}
}
