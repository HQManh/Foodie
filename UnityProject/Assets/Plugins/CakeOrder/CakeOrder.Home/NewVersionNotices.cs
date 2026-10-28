namespace CakeOrder.Home
{

public static class NewVersionNotices
{
	// The static constructor builds two notices; the classes were identified from the type globals it uses (UpgradeRebalanceNotice, then LevelCoinRefundNotice).
	public static readonly NewVersionNotice[] All = new NewVersionNotice[2]
	{
		new UpgradeRebalanceNotice(),
		new LevelCoinRefundNotice()
	};

	public static int LatestOrder => 0;
}
}
