using UniRx.Diagnostics;

namespace UniRx.Examples
{
	public class Sample11_Logger
	{
		private static readonly Logger logger = new Logger("Sample11_Logger"); // logger name recovered by guess

		public void ApplicationInitialize()
		{
			ObservableLogger.Listener.LogToUnityDebug();
			ObservableLogger.Listener
				.Where(x => x.LogType == UnityEngine.LogType.Exception)
				.Subscribe(x => { });
		}

		public void Run()
		{
			// TODO(unrecovered): two virtual Logger calls (vtable +0x178 and +0x198, string arguments) cannot be mapped to specific Logger members from the stubs; the message texts are not recoverable.
			logger.Exception(new System.Exception("Sample11 exception"), null); // message recovered by guess
		}
	}
}
