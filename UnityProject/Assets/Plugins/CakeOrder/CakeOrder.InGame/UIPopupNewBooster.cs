using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.InGame
{

public class UIPopupNewBooster : UICakePopup
{
	private enum Stage
	{
		Info,
		WaitingAnim,
		Anim
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadAnimAsync_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public AssetReference assetAnim;

		public UIPopupNewBooster _003C_003E4__this;

		private AsyncOperationHandle<GameObject> _003Chandle_003E5__2;

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

	private const float FadeDuration = 0.35f;

	[SerializeField]
	private RectTransform _containerAnim;

	[SerializeField]
	private CanvasGroup _canvasGroupAnim;

	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private TextMeshProUGUI _txtTitle;

	[SerializeField]
	private TextMeshProUGUI _txtDescription;

	[SerializeField]
	private TextMeshProUGUI _txtRewardAmount;

	[SerializeField]
	private TextMeshProUGUI _txtButton;

	private const string LocButtonClaim = "btn_claim";

	private const string LocButtonOk = "btn_ok";

	[SerializeField]
	private SfxAndHapticTrigger _sfxShow;

	private CakeCurrencySO _boosterSO;

	private int _amount;

	private Stage _stage;

	private AssetReference _currentAssetAnim;

	private readonly Dictionary<AssetReference, AsyncOperationHandle<GameObject>> _animHandles = new Dictionary<AssetReference, AsyncOperationHandle<GameObject>>();

	private bool _isDestroyed;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	public override void HideByBackButton()
	{
	}

	public void SetData(CakeCurrencySO boosterSO, int amount, AssetReference assetAnim)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadAnimAsync_003Ed__22))]
	private void LoadAnimAsync(AssetReference assetAnim)
	{
	}

	private void TryShowAnim()
	{
	}

	private void HideAnimImmediate()
	{
	}

	private void SetIconAlphaImmediate(float alpha)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected override void OnClickClose()
	{
	}

	private void OnDestroy()
	{
	}
}
}
