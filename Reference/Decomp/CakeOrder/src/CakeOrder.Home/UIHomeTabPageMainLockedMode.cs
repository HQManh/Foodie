using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;

namespace CakeOrder.Home;

public class UIHomeTabPageMainLockedMode : UIHomeTabPageMainSubModeBase
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainLockedMode _003C_003E4__this;

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

	[Header("Buy")]
	[SerializeField]
	private UIButtonHUD _btnBuyRestaurant;

	[SerializeField]
	private UIElementWithAnim _sectionOpenRestaurant;

	[SerializeField]
	private UIElementWithAnim _sectionLocked;

	[SerializeField]
	private TextMeshProUGUI _txtLocked;

	private const string LocLockedPassDay = "map_locked_pass_day";

	private float _lastTimeClickSuccess;

	internal TextMeshProUGUI LockedText => null;

	public event Action onUnlockedByPlayer
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__12))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElementImmediate()
	{
	}

	private bool IsCurrentMapUnlockable()
	{
		return false;
	}

	private void OnClickBuyRestaurant(UIButtonHUD button)
	{
	}

	private void UpdateAndShowElementsImmediate()
	{
	}

	private void UpdateAndShowElements()
	{
	}

	private void UpdateAndShowElements(float delay)
	{
	}
}
