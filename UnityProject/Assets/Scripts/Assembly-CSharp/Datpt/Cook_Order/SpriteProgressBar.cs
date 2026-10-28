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

		// The ids are Shader.PropertyToID of string literals read from the static constructor (metadata).
		private static readonly int FillID = Shader.PropertyToID("_Fill");

		private static readonly int VerticalID = Shader.PropertyToID("_IsVertical");

		private static readonly int ReverseID = Shader.PropertyToID("_Reverse");

		private static readonly int ColorID = Shader.PropertyToID("_Color");

		private SpriteRenderer rend;

		private MaterialPropertyBlock block;

		private float lastProgress;

		private bool lastVertical;

		private bool lastReverse;

		private Tween twTest;

		private void Awake()
		{
			rend = GetComponent<SpriteRenderer>();
			block = new MaterialPropertyBlock();
			ApplyValues();
		}

		private void Update()
		{
			// TODO(unrecovered): change detection compares |progress| against an epsilon taken from the static float at DAT_09187e98->0xb8 (owning class not in stubs); the epsilon source is unknown.
		}

		private void ApplyValues()
		{
			progress = Mathf.Clamp01(progress);
			if (rend != null)
			{
				rend.GetPropertyBlock(block);
				block.SetFloat(FillID, progress);
				block.SetFloat(VerticalID, vertical ? 1f : 0f);
				block.SetFloat(ReverseID, reverse ? 1f : 0f);
				float c = progress;
				block.SetColor(ColorID, new Color(1f - c, c, 0f, 1f));
				rend.SetPropertyBlock(block);
				lastProgress = progress;
				lastVertical = vertical;
				lastReverse = reverse;
			}
		}

		public void SetProgress(float value)
		{
			progress = value;
		}

		public void SetDirection(bool vertical, bool reverse)
		{
			this.vertical = vertical;
			this.reverse = reverse;
		}
	}
}
