using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home
{

public class UIListCustomerInMap : UIElementWithAnim
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadCharactersAsync_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public UIListCustomerInMap _003C_003E4__this;

		private List<UIItemCustomerInMap>.Enumerator _003C_003E7__wrap1;

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
	private RectTransform _itemContainer;

	[SerializeField]
	private UIItemCustomerInMap _prefabItem;

	private const float DELAY_BETWEEN_SHOW_ITEM = 0.05f;

	private readonly List<UIItemCustomerInMap> _items = new List<UIItemCustomerInMap>();

	private bool _isShownItemsFirstTime;

	public string MapId { get; private set; }

	public RectTransform ItemContainer => null;

	public void SetUp(string mapId, CakeMapSO mapSO)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadCharactersAsync_003Ed__12))]
	private UniTaskVoid LoadCharactersAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	public UIItemCustomerInMap GetItemByIndex(int index)
	{
		return null;
	}
}
}
