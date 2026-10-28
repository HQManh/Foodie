using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SandwichStackDisplay : SandwichDisplayBase
	{
		[SerializeField]
		private SandwichStackLayer[] fillings;

		[SerializeField]
		private SpriteRenderer top;

		[SerializeField]
		private SpriteRenderer bottom;

		[SerializeField]
		private float topOffset;

		[SerializeField]
		private float rootOffset;

		private SandwichStackLayer[] _orderedFillings;

		[Header("Assemble anim")]
		[SerializeField]
		private float squashAmount;

		[SerializeField]
		private float squashDuration;

		[SerializeField]
		private float popDuration;

		[SerializeField]
		private float spreadGap;

		[SerializeField]
		private float fallDuration;

		[SerializeField]
		private float fallStagger;

		private readonly List<(Transform tf, float restY)> _layers;

		private Vector3 _baseScale;

		private bool _baseScaleCaptured;

		private Sequence _anim;

		public int FillingLayerCount { get; private set; }

		private SandwichStackLayer[] OrderedFillings => null;

		public override float AssembleDuration => 0f;

		public override bool CanShow(SandwichPiece piece)
		{
			return false;
		}

		public override void Display(PieceSet pieces)
		{
		}

		private void Awake()
		{
		}

		private void CaptureBaseScale()
		{
		}

		public override void PlayAssembleAnim()
		{
		}

		private void KillAnim()
		{
		}

		private void TestFillings(int count = 8)
		{
		}

		public override bool TryGetBounds(out Bounds bounds)
		{
			bounds = default;
			return false;
		}

		private static void Encapsulate(ref Bounds? combined, SpriteRenderer render)
		{
		}
	}
}
