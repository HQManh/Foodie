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
using UnityEngine.Localization.Tables;

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

	private const string CommonTable = "UI_Common";

	public static bool IsReady => LocalizationSettings.HasSettings && LocalizationSettings.InitializationOperation.IsDone;

	public static Locale SelectedLocale => LocalizationSettings.HasSettings ? LocalizationSettings.SelectedLocale : null;

	public static Locale SourceLocale
	{
		get
		{
			if (!LocalizationSettings.HasSettings)
			{
				return null;
			}
			foreach (Locale locale in LocalizationSettings.AvailableLocales.Locales)
			{
				if (locale != null && locale.Identifier.Code == SourceLocaleCode)
				{
					return locale;
				}
			}
			return null;
		}
	}

	public static event Action LocaleChanged;

	// Looks a key up in the active map's table, then in the common one; a missing entry shows the key rather than nothing.
	public static string Tr(string key)
	{
		string value = string.IsNullOrEmpty(_activeMapTable) ? null : Resolve(_activeMapTable, key);
		return !string.IsNullOrEmpty(value) ? value : Get(CommonTable, key, key);
	}

	public static string Tr(string key, string table)
	{
		return Get(table, key, key);
	}

	public static string TrFormat(string key, params object[] args)
	{
		return Format(CommonTable, key, args);
	}

	public static string TrFormatIn(string table, string key, params object[] args)
	{
		return Format(table, key, args);
	}

	// The translation of key in the selected language (falling back to the source language), or the given fallback, or the key itself.
	public static string Get(string table, string key, string fallback = null)
	{
		string value = Resolve(table, key);
		if (!string.IsNullOrEmpty(value))
		{
			return value;
		}
		return fallback ?? key;
	}

	private static string Resolve(string table, string key)
	{
		if (string.IsNullOrEmpty(table) || string.IsNullOrEmpty(key) || !LocalizationSettings.HasSettings)
		{
			return null;
		}
		Locale selected = SelectedLocale;
		string value = GetEntryValue(table, key, selected);
		if (!string.IsNullOrEmpty(value))
		{
			return value;
		}
		Locale source = SourceLocale;
		return source != null && source != selected ? GetEntryValue(table, key, source) : null;
	}

	private static string GetEntryValue(string table, string key, Locale locale)
	{
		if (locale == null)
		{
			return null;
		}
		try
		{
			StringTable stringTable = LocalizationSettings.StringDatabase.GetTable(table, locale);
			StringTableEntry entry = stringTable != null ? stringTable.GetEntry(key) : null;
			return entry != null ? entry.LocalizedValue : null;
		}
		catch (Exception)
		{
			return null;
		}
	}

	private static string Pseudo(PseudoLocale pseudo, string value)
	{
		return value;
	}

	private static string Format(string table, string key, object[] args)
	{
		string text = Get(table, key, key);
		if (args == null || args.Length == 0)
		{
			return text;
		}
		try
		{
			return string.Format(text, args);
		}
		catch (FormatException)
		{
			return text;
		}
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
		_activeMapTable = mapId;
	}

	[AsyncStateMachine(typeof(_003COnSelectedLocaleChanged_003Ed__23))]
	private static void OnSelectedLocaleChanged(Locale locale)
	{
	}

	public static List<Locale> GetSelectableLocales(bool includePseudo)
	{
		List<Locale> result = new List<Locale>();
		if (!LocalizationSettings.HasSettings)
		{
			return result;
		}
		foreach (Locale locale in LocalizationSettings.AvailableLocales.Locales)
		{
			if (locale != null && (includePseudo || !(locale is PseudoLocale)))
			{
				result.Add(locale);
			}
		}
		result.Sort((a, b) => OrderOf(a).CompareTo(OrderOf(b)));
		return result;
	}

	// The source language first, the others in their project order.
	private static int OrderOf(Locale locale)
	{
		return locale != null && locale.Identifier.Code == SourceLocaleCode ? -1 : 0;
	}

	public static void SetLocale(Locale locale)
	{
		if (locale == null || !LocalizationSettings.HasSettings || LocalizationSettings.SelectedLocale == locale)
		{
			return;
		}
		LocalizationSettings.SelectedLocale = locale;
		LocaleChanged?.Invoke();
	}

	public static string GetDisplayName(Locale locale)
	{
		if (locale == null)
		{
			return null;
		}
		if (NativeNames.TryGetValue(locale.Identifier.Code, out string native))
		{
			return native;
		}
		try
		{
			return locale.Identifier.CultureInfo != null ? locale.Identifier.CultureInfo.NativeName : locale.LocaleName;
		}
		catch (Exception)
		{
			return locale.LocaleName;
		}
	}
}
}
