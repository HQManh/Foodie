using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;

namespace CakeOrder.Localization
{

public static class ComplexScriptText
{
	private enum Mode
	{
		None,
		Arabic,
		Devanagari,
		Thai
	}

	private sealed class ArabicPreprocessor : ITextPreprocessor
	{
		public string PreprocessText(string text)
		{
			return null;
		}
	}

	private sealed class DevanagariPreprocessor : ITextPreprocessor
	{
		public DevanagariGlyphTable Table;

		public string PreprocessText(string text)
		{
			return null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CApplyAsync_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Locale locale;

		private Mode _003Cmode_003E5__2;

		private UnityEngine.Awaitable<DevanagariGlyphTable>.Awaiter _003C_003Eu__1;

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
	private struct _003CFlushNextFrame_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

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

	private static readonly ArabicPreprocessor Arabic;

	private static readonly DevanagariPreprocessor Devanagari;

	private static Mode _mode;

	private static AsyncOperationHandle<DevanagariGlyphTable> _tableHandle;

	private static readonly HashSet<TMP_Text> Registered = new HashSet<TMP_Text>();

	private static readonly Dictionary<TMP_Text, HorizontalAlignmentOptions> OriginalAlignment = new Dictionary<TMP_Text, HorizontalAlignmentOptions>();

	private static readonly List<TMP_Text> Pending = new List<TMP_Text>();

	private static bool _flushScheduled;

	private static bool _hooked;

	public static bool IsRightToLeft => false;

	[AsyncStateMachine(typeof(_003CApplyAsync_003Ed__14))]
	public static UniTask ApplyAsync(Locale locale)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private static void Hook(bool on)
	{
	}

	private static void OnTextChanged(Object obj)
	{
	}

	[AsyncStateMachine(typeof(_003CFlushNextFrame_003Ed__17))]
	private static UniTaskVoid FlushNextFrame()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private static void OnSceneUnloaded(Scene _)
	{
	}

	private static void Register(TMP_Text t, bool refresh)
	{
	}

	private static void EnableMarkFeatures(TMP_Text t)
	{
	}

	private static void UnregisterAll()
	{
	}
}
}
