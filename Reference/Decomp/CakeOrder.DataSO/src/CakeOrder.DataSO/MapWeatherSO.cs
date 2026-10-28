using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "MapWeatherSO", menuName = "ScriptableObjects/CakeOrder/MapWeatherSO", order = 1)]
public class MapWeatherSO : ScriptableObjectWithId
{
	[SerializeField]
	private Sprite _icon;

	[SerializeField]
	private WeatherEffect _effect;

	public WeatherEffect Effect => WeatherEffect.Normal;

	public Sprite Icon => null;
}
