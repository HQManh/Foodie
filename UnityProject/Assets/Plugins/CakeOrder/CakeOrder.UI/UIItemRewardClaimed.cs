using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.Home;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class UIItemRewardClaimed : UIElementWithAnim
{
	[Serializable]
	public class VisualConfig
	{
		public UIItemPetAssistant.VisualConfig petVisualConfig;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadContent_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIItemRewardClaimed _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<Sprite>.Awaiter _003C_003Eu__2;

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
	private TextMeshProUGUI _textName;

	[SerializeField]
	private TextMeshProUGUI _textAmount;

	[SerializeField]
	private Image _imageIcon;

	[SerializeField]
	private GameObject _sectionNormalItem;

	[SerializeField]
	private UIItemPetAssistant _sectionPet;

	private VisualConfig _visualConfig;

	private AsyncOperationHandle<Sprite> _opLoadIcon;

	private Tween _tweenIcon;

	public IRewardItemInfo ItemInfo { get; private set; }

	public int Amount { get; private set; }

	public Sprite IconOverride { get; private set; }

	public void SetUp(VisualConfig visualConfig, IRewardItemInfo itemInfo, int amount, Sprite iconOverride = null)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadContent_003Ed__22))]
	public UniTask LoadContent()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}
}
}
