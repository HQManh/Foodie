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

		[AsyncStateMachine(typeof(_003CShowEffectsAsync_003Ed__8))]
		public UniTask ShowEffectsAsync(InGameSingleBackground.SharedData sharedData, Transform container, Color initialTint, CancellationToken token)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(UniTask);
		}

		public void HideEffects()
		{
		}

		public void HideEffectsImmediate()
		{
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

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__16))]
	public UniTask SetUp(WeatherEffect initWeatherEffect)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}

	[AsyncStateMachine(typeof(_003CChangeWeather_003Ed__18))]
	public UniTask ChangeWeather(WeatherEffect weatherEffect)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void ChangeTintColorAll(Color tint)
	{
	}

	public void ChangeTintColorBg(Color tint)
	{
	}

	public void ChangeTintColorTool(Color tint)
	{
	}
}
}
