using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.UI;

public class UIFameProgress : UICurrencyCounter
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetReward_003Ed__5 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIFameProgress _003C_003E4__this;

		public string mapId;

		public FameRewardData fameRewardData;

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
	private Slider _slider;

	[SerializeField]
	private UIAnimShowHideControl _animShowHideText;

	[SerializeField]
	private UIFameRewardPreview _rewardPreview;

	private string _mapId;

	private FameRewardData _fameRewardData;

	[AsyncStateMachine(typeof(_003CSetReward_003Ed__5))]
	public UniTask SetReward(string mapId, FameRewardData fameRewardData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public override void UpdateAmount(int value, Action onDoneAnim = null)
	{
	}

	public override void UpdateAmountImmediate(int value)
	{
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}
}
