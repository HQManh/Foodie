using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace _GAME.GameUI;

public static class PopupController
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CWaitToCloseAll_003Ed__9 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__2;

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

	private static readonly List<PopupBaseCtrl> ListPopupPrefab;

	private static readonly Dictionary<PopupBaseCtrl, PopupBaseCtrl> PrefabOfInstance;

	public static PopupLoadingCtrl LoadingPrefab { get; set; }

	public static void AddPrefab(List<PopupBaseCtrl> prefabs)
	{
	}

	public static T CreateInstance<T>() where T : PopupBaseCtrl
	{
		return null;
	}

	public static bool HasPopupActive()
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CWaitToCloseAll_003Ed__9))]
	public static UniTask WaitToCloseAll()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public static void CloseAll()
	{
	}

	public static void OpenPopupLoading(bool showImmediate = true)
	{
	}

	public static void ClosePopupLoading()
	{
	}

	internal static void Show(PopupBaseCtrl instance)
	{
	}

	private static T ShowPrefab<T>(T prefab) where T : PopupBaseCtrl
	{
		return null;
	}

	private static void BringToTop(PopupBaseCtrl popup)
	{
	}

	private static PopupBaseCtrl FindInstance(PopupBaseCtrl prefab)
	{
		return null;
	}

	private static List<PopupBaseCtrl> OpenInstances()
	{
		return null;
	}

	private static void RemoveDestroyed()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}
}
