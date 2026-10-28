using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utilities;

namespace CakeOrder.Home;

public class HomeMapGlobalBackgroundControl : MonoBehaviour
{
	[Serializable]
	public class BackgroundConfigByWeather
	{
		public WeatherEffect weatherType;

		public Gradient gradient;

		public AssetReference assetEffectBack;

		public AssetReference assetEffectFront;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadWeatherVisualsAsync_003Ed__18 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeMapGlobalBackgroundControl _003C_003E4__this;

		public BackgroundConfigByWeather bgrConfig;

		public CancellationToken token;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__10 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeMapGlobalBackgroundControl _003C_003E4__this;

		public HomeSelectionControl mapDataLoadController;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSpawnEffectAsync_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public AssetReference assetRef;

		public Transform container;

		public Action<AsyncOperationHandle<GameObject>> saveHandle;

		public CancellationToken token;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSyncWeatherAsync_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeMapGlobalBackgroundControl _003C_003E4__this;

		private CancellationToken _003Ctoken_003E5__2;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__2;

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

	[SerializeField]
	private UIGradientTransition _gradientBackground;

	[SerializeField]
	private RectTransform _effectContainerBack;

	[SerializeField]
	private RectTransform _effectContainerFront;

	[SerializeField]
	private BackgroundConfigByWeather[] _configByWeathers;

	private WeatherEffect _currentWeather;

	private HomeSelectionControl _mapDataLoadController;

	private AsyncOperationHandle<GameObject> _opLoadEffectBack;

	private AsyncOperationHandle<GameObject> _opLoadEffectFront;

	private CancellationTokenSource _weatherLoadCts;

	public WeatherEffect CurrentWeather => (WeatherEffect)0;

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__10))]
	public UniTask SetUp(HomeSelectionControl mapDataLoadController)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}

	private BackgroundConfigByWeather GetConfigByWeather(WeatherEffect weather)
	{
		return null;
	}

	public bool TryGetWeatherGradient(WeatherEffect weather, out Gradient gradient)
	{
		gradient = null;
		return false;
	}

	private void OnSelectedMapOrLevelChanged()
	{
	}

	[AsyncStateMachine(typeof(_003CSyncWeatherAsync_003Ed__17))]
	private UniTask SyncWeatherAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadWeatherVisualsAsync_003Ed__18))]
	private UniTask LoadWeatherVisualsAsync(BackgroundConfigByWeather bgrConfig, CancellationToken token)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSpawnEffectAsync_003Ed__19))]
	private UniTask SpawnEffectAsync(AssetReference assetRef, Transform container, Action<AsyncOperationHandle<GameObject>> saveHandle, CancellationToken token)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void CancelOngoingLoads()
	{
	}

	private void CleanupOldEffects()
	{
	}

	public void ShowImmediate()
	{
	}

	public void HideImmediate()
	{
	}
}
