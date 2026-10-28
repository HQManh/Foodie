using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace _GAME.Bridge;

public static class R1UserTextSupport
{
	private sealed class ScriptFont
	{
		public string Name;

		public uint[] Probes;

		public string[] FileKeywords;

		public bool Cjk;

		public string GameFontAddress;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass12_0
	{
		public ScriptFont script;

		internal bool _003CSetupFontsAsync_003Eb__0(string file)
		{
			return false;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadGameFontAsync_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<TMP_FontAsset> _003C_003Et__builder;

		public string address;

		private AsyncOperationHandle<TMP_FontAsset> _003Chandle_003E5__2;

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
	private struct _003CSetupFontsAsync_003Ed__12 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		private _003C_003Ec__DisplayClass12_0 _003C_003E8__1;

		private string[] _003CdeviceFonts_003E5__2;

		private List<string> _003CusedFiles_003E5__3;

		private StringBuilder _003Csummary_003E5__4;

		private ScriptFont[] _003C_003E7__wrap4;

		private int _003C_003E7__wrap5;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<TMP_FontAsset>.Awaiter _003C_003Eu__2;

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

	private static readonly ScriptFont[] Scripts;

	private const string MobileSdfShader = "TextMeshPro/Mobile/Distance Field";

	private const int ProbePointSize = 48;

	private static readonly string[] SkippedFileWords;

	private static readonly string[] FontFileExtensions;

	private static readonly List<TMP_FontAsset> Added;

	private static readonly List<TMP_FontAsset> Created;

	private static readonly List<AsyncOperationHandle<TMP_FontAsset>> GameFontHandles;

	private static bool _active;

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}

	public static void Init()
	{
	}

	[AsyncStateMachine(typeof(_003CSetupFontsAsync_003Ed__12))]
	private static UniTaskVoid SetupFontsAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private static void AddToGlobalFallback(TMP_FontAsset font)
	{
	}

	private static string[] ListDeviceFonts()
	{
		return null;
	}

	private static string PickDeviceFont(string[] deviceFonts, ScriptFont script)
	{
		return null;
	}

	private static bool HasGlyphs(string path, uint[] probes)
	{
		return false;
	}

	private static bool HasFontExtension(string file)
	{
		return false;
	}

	private static bool HasSkippedWord(string file)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CLoadGameFontAsync_003Ed__19))]
	private static UniTask<TMP_FontAsset> LoadGameFontAsync(string address)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<TMP_FontAsset>);
	}

	private static void Shutdown()
	{
	}

	public static string ForDisplay(string text)
	{
		return null;
	}

	private static string LineForDisplay(string line)
	{
		return null;
	}

	private static bool FirstStrongIsArabic(string s)
	{
		return false;
	}

	private static string ReverseArabicRuns(string s)
	{
		return null;
	}

	private static bool IsArabic(char c)
	{
		return false;
	}

	private static bool IsArabicMark(char c)
	{
		return false;
	}
}
