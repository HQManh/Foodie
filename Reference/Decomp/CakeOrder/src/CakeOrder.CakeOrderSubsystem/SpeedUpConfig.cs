using System;

namespace CakeOrder.CakeOrderSubsystem;

[Serializable]
public class SpeedUpConfig
{
	public int speed;

	public int freeMinutes;

	public int activateMinutes;

	public int price;

	public int canUseAds;

	public float saveIntervalSeconds => 0f;

	public float InitialFreeSeconds => 0f;

	public float ReactivateSeconds => 0f;
}
