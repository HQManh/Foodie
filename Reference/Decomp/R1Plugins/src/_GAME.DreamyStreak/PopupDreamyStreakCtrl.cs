using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.DreamyStreak;

public class PopupDreamyStreakCtrl : PopupSingleton<PopupDreamyStreakCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CMoveViewToCurLevel_003Ed__20 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public PopupDreamyStreakCtrl _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnOpened_003Ed__18 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupDreamyStreakCtrl _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayAnimSpine_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupDreamyStreakCtrl _003C_003E4__this;

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

	public TextMeshProUGUI txtTime;

	public List<Transform> listObjStreakPoint;

	public List<TextMeshProUGUI> listTxtStreakPoint;

	public Transform objCurStreakPoint;

	public List<TextMeshProUGUI> txtCurStreakPoint;

	public TextMeshProUGUI txtProgress;

	public Slider sliderProgress;

	public RwItemUICtrl rwItemUI;

	public List<DreamyStreakLevelUICtrl> listLevelUI;

	public RectTransform listLevelUILayoutContent;

	public RectTransform listLevelUILayoutViewport;

	[Header("EXTENSION")]
	public SkeletonGraphic animSpine;

	[Header("CHEAT")]
	public PopupDreamyStreakCheat menuCheat;

	private int _callbackTickId;

	public override void Open()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void UpdateUITime()
	{
	}

	public void UpdateUIData(bool firstUpdate = false)
	{
	}

	[AsyncStateMachine(typeof(_003COnOpened_003Ed__18))]
	private void OnOpened()
	{
	}

	[AsyncStateMachine(typeof(_003CPlayAnimSpine_003Ed__19))]
	private void PlayAnimSpine()
	{
	}

	[AsyncStateMachine(typeof(_003CMoveViewToCurLevel_003Ed__20))]
	private UniTask MoveViewToCurLevel()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void OpenPopupInfo()
	{
	}

	public override void Close()
	{
	}
}
