using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

namespace CakeOrder.UI;

public class UIPopupRestaurantUpgradeReward : UIPopupListRewardClaimed
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetData_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public UIPopupRestaurantUpgradeReward _003C_003E4__this;

		public RestaurantUpgradeResultData data;

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
	private TextMeshProUGUI _txtLevelInfo;

	[SerializeField]
	private TextMeshProUGUI _txtPriceBoost;

	private const string LocLevelUp = "level_up_from_to";

	[SerializeField]
	private string _textStatProfitChangeFormat;

	[AsyncStateMachine(typeof(_003CSetData_003Ed__4))]
	public Task SetData(RestaurantUpgradeResultData data)
	{
		return null;
	}
}
