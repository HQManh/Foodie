using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class OrderPreview : MonoBehaviour
	{
		[SerializeField]
		private List<OrderPreviewItem> items;

		[Header("Punch")]
		[SerializeField]
		private Transform punchTarget;

		[SerializeField]
		private float punchScaleY;

		[SerializeField]
		private float punchDuration;

		[SerializeField]
		private int punchVibrato;

		[SerializeField]
		[Range(0f, 1f)]
		private float punchElasticity;

		private readonly List<Sprite> _icons;

		private readonly List<int> _counts;

		private int _shownSig;

		private Tween _punch;

		private Vector3 _punchBase;

		private Transform PunchTarget => null;

		public void Show(IReadOnlyList<OrderSpec> orders)
		{
		}

		public void Hide()
		{
		}

		private void OnDisable()
		{
		}

		private void Punch()
		{
		}

		private void StopPunch()
		{
		}

		private int Signature()
		{
			return 0;
		}

		private void EnsureItems(int count)
		{
		}

		private void Group(IReadOnlyList<OrderSpec> orders)
		{
		}
	}
}
