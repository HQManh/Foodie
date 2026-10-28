using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.Home;
using UnityEngine;

namespace CakeOrder
{

public class CheatManagerCakeOrder : MonoBehaviour
{
	public enum CheatMode
	{
		Final,
		CheatTester
	}

	[CompilerGenerated]
	private sealed class _003CIESpawnDebugConsole_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CheatManagerCakeOrder _003C_003E4__this;

		private ResourceRequest _003CopLoadPrefab_003E5__2;

		private AsyncInstantiateOperation<GameObject> _003CopInstantiate_003E5__3;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIESpawnDebugConsole_003Ed__45(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[SerializeField]
	private string gobDebugConsoleLoadPath;

	private GameObject _gobDebugConsole;

	[SerializeField]
	private CheatMode initCheatMode;

	[SerializeField]
	private bool hideCheatOnInitOnBuildTest;

	[Header("Editor only")]
	[SerializeField]
	private NewVersionCheatConfig _newVersionCheat;

	public static CheatManagerCakeOrder instance;

	private static CheatMode _staticCheatMode;

	private static bool _isCheatFromStart;

	public static bool IsServeFxEnabled;

	private static bool _isUIToggledOn;

	public NewVersionCheatConfig NewVersionCheat => null;

	public bool UseDebugAppsflyerOnInit => false;

	public static bool IsUseAdvancedLog => false;

	public static bool IsHaveHideUI => false;

	public static bool IsShowDebug => false;

	public static bool IsShowCheatButtons => false;

	public static bool SimulateInAppPurchase => false;

	public static bool IsCheatFromStart => false;

	public static CheatMode StaticCheatMode => CheatMode.Final;

	public bool IsWholeDishServing { get; set; }

	public bool IsUpgradeGateIgnored { get; set; }

	public static bool IsUIToggledOn => false;

	public static event Action<bool> onToggleUI;

	private void Awake()
	{
	}

	public static void SetCheatMode(CheatMode mode)
	{
	}

	private void ShowDebugConsole()
	{
	}

	[IteratorStateMachine(typeof(_003CIESpawnDebugConsole_003Ed__45))]
	private IEnumerator IESpawnDebugConsole()
	{
		return null;
	}

	public void ToggleDebug()
	{
	}

	public static void ToggleUI(bool isShow)
	{
	}
}
}
