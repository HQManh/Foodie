using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EssentialSystemR1;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home.Map;

public class HomeLevelPathWorldMap : MonoBehaviour
{
	[Serializable]
	public class VisualConfig
	{
		public float initZoom;

		public float delayShowFocus;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadAndShowAllSection_003Ed__25 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeLevelPathWorldMap _003C_003E4__this;

		private int _003CnumMaps_003E5__2;

		private List<UniTask> _003CallTasks_003E5__3;

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

	private static readonly R1Logger LocalLogger;

	private HomeSelectionControl _selectionControl;

	[Header("Sections")]
	[SerializeField]
	private Transform _sectionContainer;

	private HomeLevelPathMapSection[] _mapSections;

	[SerializeField]
	private Camera _viewCamera;

	[SerializeField]
	private WorldMapCameraControl _cameraControl;

	[SerializeField]
	private HomeLevelPathMapSection.LevelOfDetailConfig _sectionLevelOfDetailConfig;

	[SerializeField]
	private VisualConfig _visualConfig;

	[SerializeField]
	private UIAnimShowHideControl _focusObj;

	private string _currentHighlightedMapId;

	private int _currentHighlightedLevelIndex;

	private bool _isActivatingCamera;

	public bool IsDoneSpawnAndSetupSections { get; private set; }

	public event Action<string, int> onSelectLevel
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public UniTask SetUp(HomeSelectionControl selectionControl)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void ShowImmediate()
	{
	}

	public void ActivateCamera()
	{
	}

	public void DeactivateCamera()
	{
	}

	public void HideImmediate()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadAndShowAllSection_003Ed__25))]
	private UniTask LoadAndShowAllSection()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnLevelNodesDoneLoaded(HomeLevelPathMapSection section)
	{
	}

	private void OnSelectSectionLevelNode(HomeLevelPathMapSection section, int lvIndex)
	{
	}

	private void ChangeHighlight(string mapId, int levelIndex, bool isUpdateImmediate = false)
	{
	}

	public void Focus(int mapIndex, int levelIndex)
	{
	}

	private void OnSelectedLevelChanged()
	{
	}

	private void OnSelectedMapChanged()
	{
	}
}
