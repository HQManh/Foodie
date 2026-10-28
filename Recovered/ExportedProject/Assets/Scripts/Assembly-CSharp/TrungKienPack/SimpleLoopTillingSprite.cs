using UnityEngine;

namespace TrungKienPack
{
	public class SimpleLoopTillingSprite : MonoBehaviour
	{
		[Header("Scroll Speed")]
		[SerializeField]
		private Vector2 scrollSpeed;

		[Header("Tiling")]
		[SerializeField]
		private Vector2 tiling;

		private SpriteRenderer spriteRenderer;

		private MaterialPropertyBlock propertyBlock;

		private Vector2 offset;

		private static readonly int OffsetID;

		private static readonly int TilingID;

		[SerializeField]
		private bool isScrolling;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		private void Awake()
		{
		}

		private void Update()
		{
		}

		public void Loop(float deltaTime)
		{
		}

		private void Apply()
		{
		}

		public void SetOffset(Vector2 value)
		{
		}

		public void SetTiling(Vector2 value)
		{
		}

		public void SetSpeed(Vector2 value)
		{
		}

		public void ResetLoop()
		{
		}
	}
}
