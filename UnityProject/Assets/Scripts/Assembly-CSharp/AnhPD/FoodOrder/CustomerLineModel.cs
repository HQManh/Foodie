using System.Collections.Generic;
using CakeOrder.DataSO;

namespace AnhPD.FoodOrder
{
	public class CustomerLineModel
	{
		public LineState State { get; private set; }

		public WeatherEffect Weather { get; private set; }

		public OrderModel Order { get; private set; }

		public bool IsUseTimer { get; private set; }

		public CustomerLineModel(bool isUseTimer)
		{
			Order = new OrderModel();
			IsUseTimer = isUseTimer;
		}

		public void SetUseTimer(bool useTimer)
		{
			IsUseTimer = useTimer;
		}

		public void SetState(LineState state)
		{
			State = state;
		}

		public void InitOrder(List<OrderSpec> list, WeatherEffect weather)
		{
			Weather = weather;
			Order.Init(list);
		}

		public void ForceSetWeather(WeatherEffect weather)
		{
			Weather = weather;
		}
	}
}
