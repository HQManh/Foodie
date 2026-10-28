using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.Shop;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace CakeOrder.Home;

public class UIHomeTabPageShop : UIHomeTabPage
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__6 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageShop _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<UICookOrderShop>.Awaiter _003C_003Eu__2;

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
	private struct _003CSpawnShop_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<UICookOrderShop> _003C_003Et__builder;

		public UIHomeTabPageShop _003C_003E4__this;

		private TaskAwaiter<GameObject> _003C_003Eu__1;

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

	[Header("Shop")]
	[Tooltip("UICook-Shop.prefab, loaded through Addressables and spawned under this page on set-up - the same asset the in-level popup uses. Left empty the tab still slides, it is just blank.")]
	[SerializeField]
	private AssetReferenceGameObject _assetShop;

	[Tooltip("Where the spawned shop goes. Empty means this page's root; the shop is put last so it draws over everything else on the page.")]
	[SerializeField]
	private RectTransform _shopContainer;

	[SerializeField]
	private GameObject[] _placeholders;

	[Tooltip("Where the shop's close button goes, as a step in on-screen tab order. Home sits one to the right of Shop.")]
	[SerializeField]
	private int _closeGoesToTabOffset;

	private UICookOrderShop _shop;

	private AsyncOperationHandle<GameObject> _opLoadShop;

	private bool _isFocusGoldPacksPending;

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__6))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CSpawnShop_003Ed__7))]
	private UniTask<UICookOrderShop> SpawnShop()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<UICookOrderShop>);
	}

	private void OnDestroy()
	{
	}

	private void OnShopCloseRequested()
	{
	}

	public void FocusGoldPacks()
	{
	}

	private void RunPendingFocus()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElementImmediate()
	{
	}
}
