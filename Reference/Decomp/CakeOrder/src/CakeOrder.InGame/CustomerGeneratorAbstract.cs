using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using CakeOrder.Model;
using UnityEngine;

namespace CakeOrder.InGame;

public abstract class CustomerGeneratorAbstract : MonoBehaviour
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__6 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public CustomerGeneratorAbstract _003C_003E4__this;

		public CakeLevelInitData data;

		private TaskAwaiter _003C_003Eu__1;

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

	protected CakeLevelInitData _levelData { get; private set; }

	public abstract bool IsCanGenerate { get; }

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__6))]
	public Task SetUp(CakeLevelInitData data)
	{
		return null;
	}

	protected abstract Task OnSetUp();

	public abstract CustomerDataGeneral GenerateCustomer();
}
