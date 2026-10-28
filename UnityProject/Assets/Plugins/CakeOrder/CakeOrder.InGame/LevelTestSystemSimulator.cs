using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.InGame
{

public class LevelTestSystemSimulator : MonoBehaviour
{
	[Header("Basic Info")]
	public int overrideLevelIndex;

	public CookOrderLevelPlayMode playMode;

	public bool showTutorial;

	[Header("Level Setting")]
	public bool overrideWeather;

	public WeatherEffect weatherEffect;

	public bool overrideRestaurantParams;

	public RestaurantParams restaurantParams;

	public StackGameplayConfig.StackConfig stackConfig;

	public InGameHeartRemoteConfig.HeartConfig heartConfig;

	public ServeSlotConfig.SlotConfig serveSlotConfig;

	public string customerData;

	public string gridData;

	public string ingredientQueueData;
}
}
