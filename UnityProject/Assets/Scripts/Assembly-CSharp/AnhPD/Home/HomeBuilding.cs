using CakeOrder;
using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CakeOrder.Home;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.Home
{
	public class HomeBuilding : HomeMapBuildingBase
	{
		[Serializable]
		public class PartBinding
		{
			public BuildingUpgradePartSO partSO;

			public int sectionIndex;

			public int partIndex;
		}

		[SerializeField]
		private HomeBuildingPart[] parts;

		[SerializeField]
		private HomeBuildingSection[] sections;

		[SerializeField]
		private Material appearMat;

		[SerializeField]
		private Material defaultMat;

		[SerializeField]
		private AudioClip sfxAppear;

		[SerializeField]
		private ParticleSystem particleAppear;

		[SerializeField]
		private float animSpeed = 2f;

		[SerializeField]
		private HomeMapNpcSpawnControl homeMapNpcSpawnControl;

		[SerializeField]
		private Transform[] _NPCSpawnPoints;

		private const float DelayShowBetweenPart = 0.025f;

		private bool _isShownFirstTime;

		[Tooltip("Maps upgrade parts onto this building sections/parts. Leave empty and the building just shows its shell - this prototype building predates the part-keyed model.")]
		[SerializeField]
		private PartBinding[] _partBindings;

		private readonly HashSet<string> _boughtPartIds = new HashSet<string>();

		private bool _isShowing;

		private List<Tween> _tweenPartAppears = new List<Tween>();

		protected override UniTask OnSetup()
		{
			// TODO(unrecovered): calls HomeMapNpcSpawnControl.SetUp and reads the base-class HomeMapBuildingBase state; neither type is in the stubs.
			return default;
		}

		public override void ApplyUpgradeState(int baseLevel, IReadOnlyList<string> boughtPartIds)
		{
			// TODO(unrecovered): writes the base-class base level field, which is not declared in any stub (HomeMapBuildingBase not in stubs).
		}

		public override void SetBaseLevel(int baseLevel, bool animate)
		{
			// TODO(unrecovered): writes the base-class base level field, which is not declared in any stub (HomeMapBuildingBase not in stubs).
		}

		public override void ShowPart(BuildingUpgradePartSO part, bool animate)
		{
			// TODO(unrecovered): reads BuildingUpgradePartSO id and calls AudioManagerCakeOrder/UnityEngine audio helpers; BuildingUpgradePartSO is not in the stubs.
		}

		private PartBinding FindBinding(string partId)
		{
			// TODO(unrecovered): compares each binding's BuildingUpgradePartSO id field; BuildingUpgradePartSO is not in the stubs, so the id member name is unknown.
			return null;
		}

		private bool ShowPartById(string partId)
		{
			PartBinding binding = FindBinding(partId);
			if (binding != null && sections != null)
			{
				int index = binding.sectionIndex;
				if (index >= 0 && index < sections.Length)
				{
					sections[index].ShowPart(binding.partIndex, appearMat, defaultMat);
					return true;
				}
			}
			return false;
		}

		public override void ShowImmediate()
		{
			_isShowing = true;
			// TODO(unrecovered): the remainder dispatches a virtual call in the HomeMapBuildingBase vtable (slot 0x1f8) that is not in the stubs.
		}

		public override void Show()
		{
			// TODO(unrecovered): calls HomeMapNpcSpawnControl.Show, which is not in the stubs (the argument's meaning is also unknown).
		}

		public override void HideImmediate()
		{
			_isShowing = false;
			// TODO(unrecovered): the remainder dispatches a virtual call in the HomeMapBuildingBase vtable (slot 0x208) that is not in the stubs.
		}

		public override void Hide()
		{
			_isShowing = false;
			if (_tweenPartAppears != null)
			{
				if (_tweenPartAppears.Count > 0)
				{
					foreach (Tween tween in _tweenPartAppears)
					{
						tween.Complete();
					}
					_tweenPartAppears.Clear();
				}
				gameObject.SetActive(false);
			}
		}

		protected override void SetBuildingTint(Color color)
		{
			// TODO(unrecovered): recursive walk over child transforms uses two unresolved type references (DAT_09185a58 / DAT_09185b10) that are not in the stubs.
		}

		public override Vector3 GetPartWorldPosition(BuildingUpgradePartSO part)
		{
			// TODO(unrecovered): resolves the part through FindBinding, which needs the BuildingUpgradePartSO id member (not in the stubs).
			return default;
		}
	}
}
