using System;
using System.Diagnostics;
using System.Net.Http;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;

namespace CookingGraph;

public sealed class CookingLevelGeneratorClient : IDisposable
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCommandAsync_003Ed__13 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<JObject> _003C_003Et__builder;

		public string method;

		public JObject parameters;

		public CookingLevelGeneratorClient _003C_003E4__this;

		public CancellationToken cancellation;

		private StringContent _003Ccontent_003E5__2;

		private HttpResponseMessage _003Cresponse_003E5__3;

		private ConfiguredTaskAwaitable<HttpResponseMessage>.ConfiguredTaskAwaiter _003C_003Eu__1;

		private ConfiguredTaskAwaitable<string>.ConfiguredTaskAwaiter _003C_003Eu__2;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private readonly HttpClient client;

	private readonly Uri endpoint;

	public Func<double?> FlightTravelSeconds { get; set; }

	public static Func<double?> DefaultFlightTravelSeconds { get; set; }

	public double? ResolveFlightTravelSeconds()
	{
		return null;
	}

	public static double? ResolveFlightTravelSeconds(Func<double?> provider)
	{
		return null;
	}

	public CookingLevelGeneratorClient(string endpoint = "http://127.0.0.1:47831/generator")
	{
	}

	[AsyncStateMachine(typeof(_003CCommandAsync_003Ed__13))]
	public Task<JObject> CommandAsync(string method, JObject parameters, CancellationToken cancellation = default(CancellationToken))
	{
		return null;
	}

	public Task<JObject> CreateAsync(CookingGraphAsset graph, int seed = 1, string strategy = "queue-first", CancellationToken cancellation = default(CancellationToken))
	{
		return null;
	}

	public Task<JObject> RecoverAsync(string sessionId, CancellationToken cancellation = default(CancellationToken))
	{
		return null;
	}

	public Task<JObject> ConfigureAsync(JObject session, JObject patch, CancellationToken cancellation = default(CancellationToken))
	{
		return null;
	}

	public Task<JObject> RunAsync(JObject session, string phase, CancellationToken cancellation = default(CancellationToken))
	{
		return null;
	}

	public Task<JObject> FinalizeAsync(JObject session, CancellationToken cancellation = default(CancellationToken))
	{
		return null;
	}

	public static JObject RequireVerifiedLevel(JObject session)
	{
		return null;
	}

	private static JObject Revision(JObject session)
	{
		return null;
	}

	public void Dispose()
	{
	}
}
