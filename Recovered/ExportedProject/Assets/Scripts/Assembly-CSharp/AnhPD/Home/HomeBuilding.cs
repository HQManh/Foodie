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
		private float animSpeed;

		[SerializeField]
		private HomeMapNpcSpawnControl homeMapNpcSpawnControl;

		[SerializeField]
		private Transform[] _NPCSpawnPoints;

		private const float DelayShowBetweenPart = 0.025f;

		private bool _isShownFirstTime;

		[Tooltip("Maps upgrade parts onto this building sections/parts. Leave empty and the building just shows its shell - this prototype building predates the part-keyed model.")]
		[SerializeField]
		private PartBinding[] _partBindings;

		private readonly HashSet<string> _boughtPartIds;

		private bool _isShowing;

		private List<Tween> _tweenPartAppears;

		protected override UniTask OnSetup()
		{
			return default;
		}

		public override void ApplyUpgradeState(int baseLevel, IReadOnlyList<string> boughtPartIds)
		{
		}

		public override void SetBaseLevel(int baseLevel, bool animate)
		{
		}

		public override void ShowPart(BuildingUpgradePartSO part, bool animate)
		{
		}

		private PartBinding FindBinding(string partId)
		{
			return null;
		}

		private bool ShowPartById(string partId)
		{
			return false;
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
			return default;
		}
	}
}
