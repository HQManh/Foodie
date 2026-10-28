namespace CookingGraph;

public readonly struct CookingPlateMove
{
	public double Time { get; }

	public int FromCustomer { get; }

	public int FromDish { get; }

	public int ToCustomer { get; }

	public int ToDish { get; }

	internal CookingPlateMove(double time, int fromCustomer, int fromDish, int toCustomer, int toDish)
	{
		Time = 0.0;
		FromCustomer = 0;
		FromDish = 0;
		ToCustomer = 0;
		ToDish = 0;
	}
}
