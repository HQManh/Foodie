using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace CakeOrder.Home
{

public class HomeBuildingFadeScale : HomeMapBuildingBase
{
	private struct ConfettiShot
	{
		public float time;

		public Vector3 position;

		public float scale;
	}

	[CompilerGenerated]
	private sealed class _003CConfettiRoutine_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public List<ConfettiShot> shots;

		public HomeBuildingFadeScale _003C_003E4__this;

		private List<ConfettiShot>.Enumerator _003C_003E7__wrap1;

		private ConfettiShot _003Cshot_003E5__3;

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
		public _003CConfettiRoutine_003Ed__37(int _003C_003E1__state)
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

		private void _003C_003Em__Finally1()
		{
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[Tooltip("One entry per base level, in order: element N is shown once the player owns N+1 parts of UpgradeType.Base (element 0 = the free first base). Levels past the end keep the last shell.")]
	[SerializeField]
	private HomeBuildingFadeScaleBaseVariant[] baseVariants;

	[Tooltip("Shown instead of any base variant while the map is still locked. Leave empty to always show the variant.")]
	[SerializeField]
	private GameObject lockedShell;

	[Tooltip("When the shell changes, owned parts on the new shell appear one by one, this many seconds apart.")]
	[SerializeField]
	private float delayBetweenItemsOnBaseChange;

	[SerializeField]
	private AudioClip sfxAppear;

	[SerializeField]
	private ParticleSystem particleAppear;

	[SerializeField]
	private HomeMapNpcSpawnControl homeMapNpcSpawnControl;

	[SerializeField]
	private Transform[] npcSpawnPoints;

	private readonly HashSet<string> _boughtPartIds = new HashSet<string>();

	private HomeBuildingFadeScaleBaseVariant _activeVariant;

	private bool _isShowing;

	private bool _isPartAnimationEnabled;

	[Header("Full-upgrade confetti")]
	[SerializeField]
	private Vector2Int confettiShotsPerSpot;

	[SerializeField]
	[Range(0.1f, 1f)]
	private float confettiMidpointScale;

	[SerializeField]
	private float confettiWindow;

	private Coroutine _confettiRoutine;

	private bool IsLocked => false;

	public void SetPartAnimationEnabled(bool enabled)
	{
	}

	protected override UniTask OnSetup()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public override void ApplyUpgradeState(int baseLevel, IReadOnlyList<string> boughtPartIds)
	{
	}

	public override void SetBaseLevel(int baseLevel, bool animate)
	{
	}

	private void SwitchToBaseVariant(int baseLevel, bool animateShell)
	{
	}

	private void OnMapUnlocked(string mapId)
	{
	}

	protected override void OnDestroy()
	{
	}

	private HomeBuildingFadeScaleBaseVariant GetVariant(int baseLevel)
	{
		return null;
	}

	public override void ShowPart(BuildingUpgradePartSO part, bool animate)
	{
	}

	public override void ShowImmediate()
	{
	}

	public override void Show()
	{
	}

	public override void HideImmediate()
	{
	}

	public override void Hide()
	{
	}

	protected override void SetBuildingTint(Color color)
	{
	}

	public override Vector3 GetPartWorldPosition(BuildingUpgradePartSO part)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public override Transform GetPartDestinationTransform(BuildingUpgradePartSO part)
	{
		return null;
	}

	public override void PlayFullUpgradeConfetti(float duration)
	{
	}

	private List<Vector3> CollectBoughtPartSpots()
	{
		return null;
	}

	private List<ConfettiShot> BuildConfettiShots(List<Vector3> spots, float duration)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CConfettiRoutine_003Ed__37))]
	private IEnumerator ConfettiRoutine(List<ConfettiShot> shots)
	{
		return null;
	}
}
}
