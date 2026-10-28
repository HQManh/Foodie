using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home
{

public class HomeSelectionControl : MonoBehaviour
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__42 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeSelectionControl _003C_003E4__this;

		public string initSelectedMapId;

		public int initSelectedLevelIndex;

		public int focusedLevelIndex;

		public string focusedMapId;

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

	[Header("Sections")]
	private SingleHomeMapDataCache[] _mapSectionLoadData;

	private CancellationTokenSource _thisCancellationTokenOnDestroy;

	public string SelectedMapId { get; private set; }

	public int SelectedMapIndex { get; private set; }

	public int SelectedLevelIndex { get; private set; }

	public SingleHomeMapDataCache SelectedMapData { get; private set; }

	public BoolModifierWithRegisteredSource ChangeMapBlocker { get; private set; }

	public BoolModifierWithRegisteredSource ChangeLevelBlocker { get; private set; }

	public int NumMaps => 0;

	public string FocusedMapId { get; private set; }

	public int FocusedLevelIndex { get; private set; }

	public bool IsFirstMap => false;

	public bool IsLastMap => false;

	public event Action onSelectedMapChanged;

	public event Action onSelectedLevelChanged;

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__42))]
	public UniTask SetUp(string initSelectedMapId, int initSelectedLevelIndex, string focusedMapId, int focusedLevelIndex)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void ChangeNextMap(float delay = 0f)
	{
	}

	public void ChangePreviousMap(float delay = 0f)
	{
	}

	public void ChangeMap(int mapIndex, float delay = 0f)
	{
	}

	public void ChangeMap(string mapId, float delay = 0f)
	{
	}

	public void ChangeMapAndLevel(string mapId, int levelIndex, float delay = 0f)
	{
	}

	public void ChangeLevel(int levelIndex, float delay = 0f)
	{
	}

	public void ChangeToLastPlayableLevelOfMap()
	{
	}

	public void ChangeNextLevel()
	{
	}

	public void ChangePrevLevel()
	{
	}

	private void ProcessChangeMap()
	{
	}

	public SingleHomeMapDataCache GetMapSectionLoadData(int mapIndex)
	{
		return null;
	}

	public SingleHomeMapDataCache GetMapSectionLoadData(string mapId)
	{
		return null;
	}

	public bool CanShowMap(int mapIndex)
	{
		return false;
	}

	public bool CanPlayMap(int mapIndex)
	{
		return false;
	}

	public int GetMapDisplayIndex(int mapIndex)
	{
		return 0;
	}

	private int FindVisibleMapIndex(int startIndex, int direction)
	{
		return 0;
	}

	private void OnDestroy()
	{
	}
}
}
