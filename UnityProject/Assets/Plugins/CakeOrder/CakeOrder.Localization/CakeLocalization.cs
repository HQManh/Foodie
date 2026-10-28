using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine.Localization;
using UnityEngine.Localization.Pseudo;
using UnityEngine.Localization.Settings;

namespace CakeOrder.Localization
{

public static class CakeLocalization
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CInitializeAsync_003Ed__18 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private UnityEngine.Awaitable<LocalizationSettings>.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSelectedLocaleChanged_003Ed__23 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public Locale locale;

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
	private struct _003CPreloadAsync_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public string[] tables;

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

	public const string SourceLocaleCode = "en-GB";

	private static bool _subscribed;

	private static readonly Regex Placeholder;

	private static readonly Regex ProtectedPlaceholder;

	private static string _activeMapTable;

	private static readonly string[] DisplayOrder;

	private static readonly Dictionary<string, string> NativeNames = new Dictionary<string, string>();

	public static bool IsReady => false;

	public static Locale SelectedLocale => null;

	public static Locale SourceLocale => null;

	public static event Action LocaleChanged;

	public static string Tr(string key)
	{
		return null;
	}

	public static string Tr(string key, string table)
	{
		return null;
	}

	public static string TrFormat(string key, params object[] args)
	{
		return null;
	}

	public static string TrFormatIn(string table, string key, params object[] args)
	{
		return null;
	}

	public static string Get(string table, string key, string fallback = null)
	{
		return null;
	}

	private static string Resolve(string table, string key)
	{
		return null;
	}

	private static string GetEntryValue(string table, string key, Locale locale)
	{
		return null;
	}

	private static string Pseudo(PseudoLocale pseudo, string value)
	{
		return null;
	}

	private static string Format(string table, string key, object[] args)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CInitializeAsync_003Ed__18))]
	public static UniTask InitializeAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CPreloadAsync_003Ed__19))]
	public static UniTask PreloadAsync(params string[] tables)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public static void Release(string table)
	{
	}

	public static void SetActiveMap(string mapId)
	{
	}

	[AsyncStateMachine(typeof(_003COnSelectedLocaleChanged_003Ed__23))]
	private static void OnSelectedLocaleChanged(Locale locale)
	{
	}

	public static List<Locale> GetSelectableLocales(bool includePseudo)
	{
		return null;
	}

	private static int OrderOf(Locale locale)
	{
		return 0;
	}

	public static void SetLocale(Locale locale)
	{
	}

	public static string GetDisplayName(Locale locale)
	{
		return null;
	}
}
}
