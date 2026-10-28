using CakeOrder.DataSO;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerWeatherDisplay : MonoBehaviour
	{
		[SerializeField]
		private WeatherDisplayConfig[] configs;

		private ParticleSystem _vfx;

		private GameObject _icon;

		public void ApplyEffect(WeatherEffect weather)
		{
		}

		private void StopEffect()
		{
		}
	}
}
