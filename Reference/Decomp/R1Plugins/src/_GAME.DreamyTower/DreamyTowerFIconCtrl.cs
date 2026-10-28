using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.DreamyTower;

public class DreamyTowerFIconCtrl : SingletonFI<DreamyTowerFIconCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayAnimChangePoint_003Ed__13 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public DreamyTowerFIconCtrl _003C_003E4__this;

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

	public GameObject objFeature;

	public TextMeshProUGUI txtTime;

	public Animator animAddPoint;

	public Button btnFeature;

	private bool _onAnimChangePoint;

	private int _callbackTickId;

	public static Vector3 IconPos => default(Vector3);

	public override void OnSetUp(Action newCallback)
	{
	}

	protected override void OnDestroy()
	{
	}

	public override void OnUpdateData()
	{
	}

	public override void OnUpdateTime()
	{
	}

	public static float CheckShowAnimChangePoint()
	{
		return 0f;
	}

	[AsyncStateMachine(typeof(_003CPlayAnimChangePoint_003Ed__13))]
	private void PlayAnimChangePoint()
	{
	}

	private void OpenPopupFeature()
	{
	}
}
