using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.DreamyPass;

[Serializable]
public class PopupDreamyPassListLevel
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CMoveListToCurLevel_003Ed__28 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public PopupDreamyPassListLevel _003C_003E4__this;

		private int _003CtargetLv_003E5__2;

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

	public List<Button> btnActivate;

	public DreamyPassLevelUICtrl rowLevel0;

	public DreamyPassLevelUICtrl rowTemplate;

	public RectTransform listLevelUILayoutContent;

	public RectTransform listLevelUILayoutViewport;

	public Transform posTopHide;

	public Transform posBotHide;

	private const float RowHeight = 325f;

	private const float PadTop = 335f;

	private const float PadBottom = 1261.5f;

	private const float ParkX = 20000f;

	private PopupDreamyPassCtrl _parent;

	private Tweener _tweenerMove;

	private int _cbData;

	private readonly Stack<DreamyPassLevelUICtrl> _pool;

	private readonly Dictionary<int, DreamyPassLevelUICtrl> _bound;

	private int _activeFrom;

	private int _activeTo;

	private int _rowActiveIndex;

	private static int RowCount => 0;

	private static float RowCenterY(int index)
	{
		return 0f;
	}

	public void Init(PopupDreamyPassCtrl parent)
	{
	}

	public void Dispose()
	{
	}

	private void UpdateUIData()
	{
	}

	private void OpenPopupActivate()
	{
	}

	public void MoveListToFirstLevel()
	{
	}

	private static int TargetLevel()
	{
		return 0;
	}

	[AsyncStateMachine(typeof(_003CMoveListToCurLevel_003Ed__28))]
	public UniTask MoveListToCurLevel()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void UpdateItemActiveByPos()
	{
	}

	private void UpdateWindow()
	{
	}

	private void Bind(int index)
	{
	}

	private void Unbind(int index)
	{
	}

	private DreamyPassLevelUICtrl Take(int index)
	{
		return null;
	}

	private void Park(DreamyPassLevelUICtrl row)
	{
	}

	private DreamyPassLevelUICtrl CreateRow()
	{
		return null;
	}

	private static void NormalizeRow(DreamyPassLevelUICtrl row)
	{
	}
}
