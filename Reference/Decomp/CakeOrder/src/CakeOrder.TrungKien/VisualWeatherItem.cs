using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CakeOrder.Home;
using UnityEngine;

namespace CakeOrder.TrungKien;

public class VisualWeatherItem : MonoBehaviour
{
	[Serializable]
	public class WeatherDependPart
	{
		public WeatherEffect weatherType;

		public List<GameObject> parts;

		public Color color;
	}

	[SerializeField]
	private HomeMapBuildingBase homeMapBuildindControl;

	[SerializeField]
	private SpriteRenderer[] listBaseVisual;

	[SerializeField]
	private WeatherDependPart[] weatherObj;

	private HashSet<GameObject> hsActive;

	private void Awake()
	{
	}

	private void ChangeVisualWeatherDependHome()
	{
	}

	private void ChangeVisualWeather(WeatherEffect weather)
	{
	}
}
