using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using CakeOrder.DataSO;
using CakeOrder.Home.Map;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EssentialSystemR1;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace CakeOrder.Home;

[Serializable]
public class SingleHomeMapDataCache
{
	public class SharedSOLoader<T> where T : ScriptableObject
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteLoadAsync_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

			public SharedSOLoader<T> _003C_003E4__this;

			public CancellationToken token;

			private UnityEngine.Awaitable<T>.Awaiter _003C_003Eu__1;

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
		private struct _003CLoadAsync_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

			public SharedSOLoader<T> _003C_003E4__this;

			private UnityEngine.Awaitable<T>.Awaiter _003C_003Eu__1;

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

		private readonly string _address;

		private AsyncOperationHandle<T> _handle;

		private UniTask<T> _initTask;

		private T _asset;

		private int _refCount;

		private bool _isLoading;

		private CancellationTokenSource _cancellationTokenSource;

		public T Asset => default(T);

		public SharedSOLoader(string address, CancellationTokenSource cancellationTokenSource)
		{
		}

		[AsyncStateMachine(typeof(SharedSOLoader<>._003CLoadAsync_003Ed__10))]
		public UniTask<T> LoadAsync()
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(UniTask<T>);
		}

		[AsyncStateMachine(typeof(SharedSOLoader<>._003CExecuteLoadAsync_003Ed__11))]
		private UniTask<T> ExecuteLoadAsync(CancellationToken token)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(UniTask<T>);
		}

		public void Unload()
		{
		}
	}

	public class SharedPrefabLoader<T> where T : MonoBehaviour, IMapDataConfig
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteLoadAndSetupAsync_003Ed__16 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

			public SharedPrefabLoader<T> _003C_003E4__this;

			public CancellationToken token;

			private T _003C_instance_003E5__2;

			private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__1;

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

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CLoadAsync_003Ed__15 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

			public SharedPrefabLoader<T> _003C_003E4__this;

			private TaskAwaiter<T> _003C_003Eu__1;

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

		private MapDataAssetCategory.AssetType _assetType;

		private string _address;

		private string _mapId;

		private Transform _container;

		private Transform _overrideContainer;

		private CancellationTokenSource _cancellationTokenSource;

		private AsyncOperationHandle<GameObject> _handle;

		private Task<T> _initTask;

		private T _instance;

		private int _refCount;

		private bool _isLoading;

		public T Instance => default(T);

		public SharedPrefabLoader(MapDataAssetCategory.AssetType assetType, string mapId, Transform container, CancellationTokenSource cancellationTokenSource)
		{
		}

		public void OverrideContainer(Transform transform)
		{
		}

		[AsyncStateMachine(typeof(SharedPrefabLoader<>._003CLoadAsync_003Ed__15))]
		public UniTask<T> LoadAsync()
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(UniTask<T>);
		}

		[AsyncStateMachine(typeof(SharedPrefabLoader<>._003CExecuteLoadAndSetupAsync_003Ed__16))]
		private Task<T> ExecuteLoadAndSetupAsync(CancellationToken token)
		{
			return null;
		}

		public void Unload()
		{
		}
	}

	protected static readonly R1Logger LocalLogger;

	private SharedPrefabLoader<MapLevelMetadataConfig> _levelPathLoader;

	private SharedPrefabLoader<MapUpgradeConfig> _upgradeConfigLoader;

	private SharedPrefabLoader<MapToolConfig> _toolConfigLoader;

	private SharedPrefabLoader<MapCookingProcessConfig> _ingredientConfigLoader;

	private SharedPrefabLoader<HomeMapBuildingBase> _homeMapBuildingLoader;

	private SharedPrefabLoader<HomeLevelPathMapSection> _mapPathLoader;

	public int MapIndex { get; private set; }

	public string MapId { get; private set; }

	public CakeMapSO MapSO { get; private set; }

	public SharedPrefabLoader<MapLevelMetadataConfig> LevelPathLoader => null;

	public SharedPrefabLoader<MapUpgradeConfig> UpgradeConfigLoader => null;

	public SharedPrefabLoader<MapToolConfig> ToolConfigLoader => null;

	public SharedPrefabLoader<MapCookingProcessConfig> IngredientConfigLoader => null;

	public SharedPrefabLoader<HomeMapBuildingBase> HomeMapBuildingLoader => null;

	public SharedPrefabLoader<HomeLevelPathMapSection> HomeMapPathLoader => null;

	public SingleHomeMapDataCache(string mapId, int mapIndex, Transform container, CancellationTokenSource cancellationTokenSource)
	{
	}

	public void UnloadAll()
	{
	}
}
