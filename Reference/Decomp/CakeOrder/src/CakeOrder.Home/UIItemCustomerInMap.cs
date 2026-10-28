using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.Home;

public class UIItemCustomerInMap : UIElementWithAnim
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadCharacterAsync_003Ed__15 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIItemCustomerInMap _003C_003E4__this;

		private string _003Caddress_003E5__2;

		private AsyncOperationHandle<GameObject> _003Chandle_003E5__3;

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

	public const string CHARACTER_ADDRESS_PREFIX = "Character-";

	[Header("Visual")]
	[SerializeField]
	private Image _background;

	[SerializeField]
	private TextMeshProUGUI _txtName;

	[SerializeField]
	private Transform _characterRoot;

	[SerializeField]
	private GameObject _placeholder;

	private AsyncOperationHandle<GameObject> _handle;

	private bool _isHandleValid;

	public CakeCharacterSO CharacterSO { get; private set; }

	public string CustomerId => null;

	public static string GetCharacterAddress(string customerId)
	{
		return null;
	}

	public void SetUp(CakeCharacterSO character)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadCharacterAsync_003Ed__15))]
	public UniTask LoadCharacterAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}
}
