namespace CakeOrder.DataSO;

public interface IItemCurrencyHoldingSource
{
	public delegate void OnAmountChangedDelegate(int oldAmount, int newAmount);

	string ItemId { get; }

	int Amount { get; }

	event OnAmountChangedDelegate onAmountChanged;
}
