using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.InGame;

public class UIPopupCakeConfirmUseBooster : UIPopupBoosterSaveMeBase
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadAnimAsync_003Ed__6 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public AssetReference assetAnim;

		public UIPopupCakeConfirmUseBooster _003C_003E4__this;

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

	private Dictionary<AssetReference, AsyncOperationHandle<GameObject>> _loadingAssetAnim;

	[SerializeField]
	private Image _iconBooster;

	[SerializeField]
	private RectTransform _containerAnim;

	[SerializeField]
	private CanvasGroup _canvasGroupAnim;

	private AssetReference _currentAssetAnim;

	public void SetBoosterInfo(CakeCurrencySO boosterSO, AssetReference assetAnim)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadAnimAsync_003Ed__6))]
	private void LoadAnimAsync(AssetReference assetAnim)
	{
	}

	protected override void OnShownPackBought(string shopId)
	{
	}

	private void OnDestroy()
	{
	}
}
