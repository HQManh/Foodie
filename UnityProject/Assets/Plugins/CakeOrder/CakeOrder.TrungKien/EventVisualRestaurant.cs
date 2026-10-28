using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.TrungKien
{

public class EventVisualRestaurant : MonoBehaviour
{
	[Serializable]
	public class WeatherDependPart
	{
		public EEventType weatherType;

		public List<GameObject> parts;
	}

	[SerializeField]
	private WeatherDependPart[] weatherObj;

	private HashSet<GameObject> hsActive = new HashSet<GameObject>();

	[SerializeField]
	private EEventType currentEvent;

	private void Awake()
	{
	}

	private void Start()
	{
	}

	public static EEventType SkinToEvent(string skinId)
	{
		return EEventType.None;
	}

	public void ChangeEventVisual(EEventType type)
	{
	}

	private void ChangeVisualHome(EEventType weather)
	{
	}
}
}
