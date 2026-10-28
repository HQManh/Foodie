using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	[RequireComponent(typeof(SpriteRenderer))]
	public class SpriteProgressBar : MonoBehaviour
	{
		[Range(0f, 1f)]
		[SerializeField]
		private float progress;

		[SerializeField]
		private bool vertical;

		[SerializeField]
		private bool reverse;

		private static readonly int FillID;

		private static readonly int VerticalID;

		private static readonly int ReverseID;

		private static readonly int ColorID;

		private SpriteRenderer rend;

		private MaterialPropertyBlock block;

		private float lastProgress;

		private bool lastVertical;

		private bool lastReverse;

		private Tween twTest;

		private void Awake()
		{
		}

		private void Update()
		{
		}

		private void ApplyValues()
		{
		}

		public void SetProgress(float value)
		{
		}

		public void SetDirection(bool vertical, bool reverse)
		{
		}
	}
}
