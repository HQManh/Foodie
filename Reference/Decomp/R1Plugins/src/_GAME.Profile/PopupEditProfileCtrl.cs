using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.Profile;

public class PopupEditProfileCtrl : PopupSingleton<PopupEditProfileCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CApplyTabButtonState_003Ed__26 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupEditProfileCtrl _003C_003E4__this;

		private int _003Ctoken_003E5__2;

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
	private struct _003CInitListAvatarItem_003Ed__29 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupEditProfileCtrl _003C_003E4__this;

		private int _003Ci_003E5__2;

		private List<int>.Enumerator _003C_003E7__wrap2;

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
	private struct _003CScrollToTopAfterLateUpdate_003Ed__27 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupEditProfileCtrl _003C_003E4__this;

		public RectTransform listLayout;

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

	[Header("BASE_INFO")]
	public TMP_InputField inputName;

	public AvatarStatusUICtrl avatarStatus;

	public FrameStatusUICtrl frameStatus;

	public NameFxStatusUICtrl nameFxStatus;

	public Button btnSave;

	[Header("AVATAR")]
	public Button btnOpenTabAvatar;

	public Animator btnOpenTabAvatarAnim;

	public CanvasGroup tabAvatar;

	public List<AvatarItemUICtrl> listAvatarItem;

	public RectTransform listAvatarItemLayout;

	[Header("FRAME")]
	public Button btnOpenTabFrame;

	public Animator btnOpenTabFrameAnim;

	public CanvasGroup tabFrame;

	public List<FrameItemUICtrl> listFrameItem;

	public RectTransform listFrameItemLayout;

	[Header("NAME_FX")]
	public Button btnOpenTabNameFx;

	public Animator btnOpenTabNameFxAnim;

	public CanvasGroup tabNameFx;

	public List<NameFxItemUICtrl> listNameFxItem;

	public RectTransform listNameFxItemLayout;

	[Header("RUNTIME")]
	private int _tabActive;

	private List<Tweener> _tweenerActive;

	private ProfileDbModel.EditModel _editModel;

	private int _tabButtonStateToken;

	public override void Open()
	{
	}

	private void ApplyTabButtonVisuals()
	{
	}

	[AsyncStateMachine(typeof(_003CApplyTabButtonState_003Ed__26))]
	private void ApplyTabButtonState()
	{
	}

	[AsyncStateMachine(typeof(_003CScrollToTopAfterLateUpdate_003Ed__27))]
	private void ScrollToTopAfterLateUpdate(RectTransform listLayout)
	{
	}

	private void OnChangeNameInput(string _)
	{
	}

	[AsyncStateMachine(typeof(_003CInitListAvatarItem_003Ed__29))]
	private void InitListAvatarItem()
	{
	}

	public void ChangeAvatarSelected(int index)
	{
	}

	private void InitListFrameItem()
	{
	}

	public void ChangeFrameSelected(int index)
	{
	}

	private void InitListNameFxItem()
	{
	}

	public void ChangeNameFxSelected(int index)
	{
	}

	private void UpdateBtnSaveStatus()
	{
	}

	private void OpenTabAvatar()
	{
	}

	private void OpenTabFrame()
	{
	}

	private void OpenTabNameFx()
	{
	}

	private void SaveProfileEdit()
	{
	}
}
