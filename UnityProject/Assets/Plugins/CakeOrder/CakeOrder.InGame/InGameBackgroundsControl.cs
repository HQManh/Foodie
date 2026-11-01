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

namespace CakeOrder.InGame
{

public class InGameBackgroundsControl : MonoBehaviour
{
	[Serializable]
	public class BackgroundConfigByWeather
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CShowEffectsAsync_003Ed__8 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public BackgroundConfigByWeather _003C_003E4__this;

			public Transform container;

			public CancellationToken token;

			public InGameSingleBackground.SharedData sharedData;

			public Color initialTint;

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

		public WeatherEffect weatherType;

		public Gradient gradient;

		public AssetReference assetBackgroundControl;

		public Color tintSharedBgr;

		public Color tintTool;

		[NonSerialized]
		public AsyncOperationHandle<GameObject> opLoad;

		[NonSerialized]
		public InGameSingleBackground spawnedBackgroundControl;

		[NonSerialized]
		public bool isShowing;

		// Rebuilt: loads the weather prefab through Addressables (once), parents it under the container and fades it in.
		public async UniTask ShowEffectsAsync(InGameSingleBackground.SharedData sharedData, Transform container, Color initialTint, CancellationToken token)
		{
			if (spawnedBackgroundControl == null)
			{
				if (assetBackgroundControl == null || !assetBackgroundControl.RuntimeKeyIsValid()) return;
				opLoad = assetBackgroundControl.LoadAssetAsync<GameObject>();
				await opLoad.Task;
				if (token.IsCancellationRequested || opLoad.Result == null) return;
				GameObject instance = UnityEngine.Object.Instantiate(opLoad.Result, container);
				spawnedBackgroundControl = instance.GetComponent<InGameSingleBackground>();
				if (spawnedBackgroundControl == null) return;
				spawnedBackgroundControl.Initialize(sharedData, initialTint);
			}
			isShowing = true;
			spawnedBackgroundControl.ChangeTintColor(initialTint, 0f, 0f);
			spawnedBackgroundControl.Show();
		}

		public void HideEffects()
		{
			isShowing = false;
			if (spawnedBackgroundControl != null) spawnedBackgroundControl.Hide();
		}

		public void HideEffectsImmediate()
		{
			isShowing = false;
			if (spawnedBackgroundControl != null) spawnedBackgroundControl.HideImmediate();
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CChangeWeather_003Ed__18 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public InGameBackgroundsControl _003C_003E4__this;

		public WeatherEffect weatherEffect;

		private BackgroundConfigByWeather _003Ctarget_003E5__2;

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
	private struct _003CSetUp_003Ed__16 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public InGameBackgroundsControl _003C_003E4__this;

		public WeatherEffect initWeatherEffect;

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

	[SerializeField]
	private UIGradientTransition _gradientBackground;

	[SerializeField]
	private BackgroundConfigByWeather[] _configByWeathers;

	[SerializeField]
	private InGameSingleBackground _sharedBackground;

	[SerializeField]
	private InGameSingleBackground _toolSprites;

	[SerializeField]
	private InGameSingleBackground.SharedData _sharedData;

	private Color _currentWeatherTintSharedBgr;

	private Color _currentWeatherTintTool;

	private CancellationTokenSource _weatherLoadCts;

	private Color _currentTintBg;

	private Color _currentTintTool;

	public WeatherEffect CurrentWeather { get; private set; }

	public void SetUp()
	{
	}

	// Rebuilt: the background of the level's weather is shown under the background container; weather changes cross-fade to another prefab.
	private BackgroundConfigByWeather ConfigFor(WeatherEffect weather)
	{
		if (_configByWeathers == null) return null;
		foreach (BackgroundConfigByWeather c in _configByWeathers)
		{
			if (c != null && c.weatherType == weather) return c;
		}
		return _configByWeathers.Length > 0 ? _configByWeathers[0] : null;
	}

	private Transform BackgroundParent()
	{
		return _sharedData != null && _sharedData.backgroundContainer != null ? _sharedData.backgroundContainer : transform;
	}

	public async UniTask SetUp(WeatherEffect initWeatherEffect)
	{
		CurrentWeather = initWeatherEffect;
		_weatherLoadCts?.Cancel();
		_weatherLoadCts = new CancellationTokenSource();
		_currentTintBg = Color.white;
		_currentTintTool = Color.white;
		BackgroundConfigByWeather config = ConfigFor(initWeatherEffect);
		if (config == null) return;
		_currentWeatherTintSharedBgr = config.tintSharedBgr;
		_currentWeatherTintTool = config.tintTool;
		await config.ShowEffectsAsync(_sharedData, BackgroundParent(), config.tintSharedBgr * _currentTintBg, _weatherLoadCts.Token);
		ApplySharedTints(0f);
	}

	private void ApplySharedTints(float duration)
	{
		if (_sharedBackground != null) _sharedBackground.ChangeTintColor(_currentWeatherTintSharedBgr * _currentTintBg, 0f, duration);
		if (_toolSprites != null) _toolSprites.ChangeTintColor(_currentWeatherTintTool * _currentTintTool, 0f, duration);
	}

	private void OnDestroy()
	{
		_weatherLoadCts?.Cancel();
		_weatherLoadCts?.Dispose();
		if (_configByWeathers == null) return;
		foreach (BackgroundConfigByWeather c in _configByWeathers)
		{
			if (c != null && c.opLoad.IsValid()) Addressables.Release(c.opLoad);
		}
	}

	public async UniTask ChangeWeather(WeatherEffect weatherEffect)
	{
		if (weatherEffect == CurrentWeather) return;
		BackgroundConfigByWeather next = ConfigFor(weatherEffect);
		BackgroundConfigByWeather previous = ConfigFor(CurrentWeather);
		CurrentWeather = weatherEffect;
		if (next == null) return;
		_weatherLoadCts?.Cancel();
		_weatherLoadCts = new CancellationTokenSource();
		if (previous != null && previous != next) previous.HideEffects();
		_currentWeatherTintSharedBgr = next.tintSharedBgr;
		_currentWeatherTintTool = next.tintTool;
		await next.ShowEffectsAsync(_sharedData, BackgroundParent(), next.tintSharedBgr * _currentTintBg, _weatherLoadCts.Token);
		ApplySharedTints(0.5f);
	}

	private void ApplyBackgroundTint(float duration)
	{
		BackgroundConfigByWeather config = ConfigFor(CurrentWeather);
		if (config != null && config.spawnedBackgroundControl != null)
		{
			config.spawnedBackgroundControl.ChangeTintColor(config.tintSharedBgr * _currentTintBg, 0f, duration);
		}
		if (_sharedBackground != null) _sharedBackground.ChangeTintColor(_currentWeatherTintSharedBgr * _currentTintBg, 0f, duration);
	}

	public void ChangeTintColorAll(Color tint)
	{
		_currentTintBg = tint;
		_currentTintTool = tint;
		ApplyBackgroundTint(-1f);
		if (_toolSprites != null) _toolSprites.ChangeTintColor(_currentWeatherTintTool * _currentTintTool, 0f, -1f);
	}

	public void ChangeTintColorBg(Color tint)
	{
		_currentTintBg = tint;
		ApplyBackgroundTint(-1f);
	}

	public void ChangeTintColorTool(Color tint)
	{
		_currentTintTool = tint;
		if (_toolSprites != null) _toolSprites.ChangeTintColor(_currentWeatherTintTool * _currentTintTool, 0f, -1f);
	}
}
}
