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
				return boolValue;
			}
			set
			{
				boolValue = value;
				if (boolTrigger != null)
				{
					boolTrigger.OnNext(value);
					return;
				}
				throw new NullReferenceException();
			}
		}

		public BooleanNotifier(bool initialValue = false)
		{
			boolTrigger = new Subject<bool>();
			Value = initialValue;
		}

		public void TurnOn()
		{
			if (boolValue)
			{
				return;
			}
			Value = true;
		}

		public void TurnOff()
		{
			if (boolValue)
			{
				Value = false;
			}
		}

		public void SwitchValue()
		{
			Value = !boolValue;
		}

		public IDisposable Subscribe(IObserver<bool> observer)
		{
			if (boolTrigger == null)
			{
				throw new NullReferenceException();
			}
			return boolTrigger.Subscribe(observer);
		}
	}
}
