using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameItem;
using _GAME.GameUI;
using _GAME.Profile;

namespace _GAME.DreamyPass;

public class PopupDreamyPassFirstOpenCtrl : PopupSingleton<PopupDreamyPassFirstOpenCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnStartStep3_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupDreamyPassFirstOpenCtrl _003C_003E4__this;

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

	[Header("Step_1")]
	public GameObject step1Welcome;

	public RwItemUICtrl step1RwItem;

	public Button step1BtnNext;

	private RwItemModel step1RwConfig;

	[Header("Step_2")]
	public GameObject step2Info;

	public Slider step2SliderPoint;

	public TextMeshProUGUI step2TxtPoint;

	public TextMeshProUGUI step2TxtLevel;

	public Button step2BtnNext;

	[Header("Step_3")]
	public GameObject step3Activate;

	public AvatarStatusUICtrl avaDeco;

	public NameFxStatusUICtrl nameDeco;

	public Button step3BtnNext;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	private void OnStartStep1()
	{
	}

	private void Step1NextStep()
	{
	}

	private void OnStartStep2()
	{
	}

	private void Step2NextStep()
	{
	}

	[AsyncStateMachine(typeof(_003COnStartStep3_003Ed__19))]
	private void OnStartStep3()
	{
	}

	private void Step3NextStep()
	{
	}
}
