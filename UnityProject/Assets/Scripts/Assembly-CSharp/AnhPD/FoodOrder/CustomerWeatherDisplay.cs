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
			if ((int)weather == 0)
			{
				StopEffect();
				return;
			}
			WeatherDisplayConfig weatherDisplayConfig = ((configs != null && (int)weather < configs.Length) ? configs[(int)weather] : null);
			if (weatherDisplayConfig == null)
			{
				UnityEngine.Debug.LogWarning(string.Format("[{0}] No weather config for {1}", base.name, (int)weather) + string.Format(" (configs: {0})", (configs != null) ? configs.Length : 0), this);
				StopEffect();
				return;
			}
			if ((bool)weatherDisplayConfig.vfx)
			{
				_vfx = weatherDisplayConfig.vfx;
				_vfx.Play();
			}
			if ((bool)weatherDisplayConfig.icon)
			{
				_icon = weatherDisplayConfig.icon;
				_icon.SetActive(true);
			}
		}

		private void StopEffect()
		{
			if ((bool)_vfx)
			{
				_vfx.Stop();
				_vfx.Clear();
			}
			if ((bool)_icon)
			{
				_icon.SetActive(false);
			}
		}
	}
}
