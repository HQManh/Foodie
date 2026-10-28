using System;

namespace UniRx
{
	public class BooleanNotifier : IObservable<bool>
	{
		private readonly Subject<bool> boolTrigger;

		private bool boolValue;

		public bool Value
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public BooleanNotifier(bool initialValue = false)
		{
		}

		public void TurnOn()
		{
		}

		public void TurnOff()
		{
		}

		public void SwitchValue()
		{
		}

		public IDisposable Subscribe(IObserver<bool> observer)
		{
			return null;
		}
	}
}
