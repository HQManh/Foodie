using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using DG.Tweening;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class UIMapBuildingProgress : MonoBehaviour
{
	[Serializable]
	public class VisualConfig
	{
		public Sprite spriteChestClose;

		public Sprite spriteChestClaimable;

		public Sprite spriteChestOpened;

		public Color colorChestClose;

		public Color colorChestClaimable;

		public Color colorChestOpened;
	}

	[CompilerGenerated]
	private sealed class _003CIEPlayAnimClaim_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIMapBuildingProgress _003C_003E4__this;

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
		public _003CIEPlayAnimClaim_003Ed__38(int _003C_003E1__state)
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
	private Slider _sliderUpgradeProgress;

	[SerializeField]
	private TextMeshProUGUI _txtUpgradeProgress;

	[SerializeField]
	private string _txtUpgradeProgressFormat;

	[SerializeField]
	private GameObject[] _objsNotiClaimable;

	[SerializeField]
	private GameObject[] _objsNotiClaimed;

	[SerializeField]
	private Image _imgChest;

	[SerializeField]
	private VisualConfig _visualConfig;

	[SerializeField]
	private Button _btnClaimReward;

	[Header("Spine Chest")]
	[SerializeField]
	private SkeletonGraphic _skeletonChest;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false)]
	private string _spineAnimIdle;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false)]
	private string _spineAnimOpen;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false)]
	private string _spineAnimOpenedLoop;

	[SerializeField]
	private float _delayTriggerClaim;

	[SerializeField]
	private float _speedAnimOpen;

	public float durationAnim;

	private string _mapId;

	private PlayerMapLevelProgressDataAccess _dataAccess;

	private MapUpgradeConfig _upgradeConfig;

	private Sequence _seqAnim;

	private Coroutine _coroutineAnim;

	private readonly Dictionary<string, int> _previousProgressValueByMap = new Dictionary<string, int>();

	private readonly HashSet<string> _mapsWithPlayedTextTransition = new HashSet<string>();

	private bool _isFullyUpgraded;

	private bool _isPendingClaim;

	private Coroutine _corAnimClaim;

	private SceneMainUI _mainUI;

	public bool IsRewardPendingClaim => false;

	public bool IsFullyUpgraded => false;

	public event Action onStateChanged;

	private void Awake()
	{
	}

	public void SetUp(SceneMainUI mainUI, string mapId, PlayerMapLevelProgressDataAccess dataAccess, MapUpgradeConfig upgradeConfig)
	{
	}

	private void OnDestroy()
	{
	}

	public void TryClaimReward()
	{
	}

	[IteratorStateMachine(typeof(_003CIEPlayAnimClaim_003Ed__38))]
	private IEnumerator IEPlayAnimClaim()
	{
		return null;
	}

	private void TriggerClaim()
	{
	}

	private void OnClaimedFullUpgradeMapReward(string mapId)
	{
	}

	private void OnHomeBuildingItemBought(string mapId, string sectionId)
	{
	}

	private void UpdateVisualFromDataEvent()
	{
	}

	public void ResetVisual()
	{
	}

	public void UpdateVisualImmediate()
	{
	}

	public void UpdateVisual()
	{
	}

	private int GetTextTransitionStartValue()
	{
		return 0;
	}

	private void RememberProgressValue(int value)
	{
	}

	private string GetProgressText(int value, int max)
	{
		return null;
	}

	private (int, int, bool, bool) ComputeState()
	{
		return default((int, int, bool, bool));
	}

	private void UpdateChestState()
	{
	}

	private void OnDisable()
	{
	}
}
}
