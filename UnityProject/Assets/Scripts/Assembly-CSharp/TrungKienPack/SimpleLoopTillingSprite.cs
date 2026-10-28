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

		// The ids are Shader.PropertyToID of string literals read from the static constructor (metadata).
		private static readonly int OffsetID = Shader.PropertyToID("_Offset");

		private static readonly int TilingID = Shader.PropertyToID("_Tiling");

		[SerializeField]
		private bool isScrolling = true;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		static SimpleLoopTillingSprite()
		{
			// literal names are guesses: the pseudocode only shows that the two IDs are created from two string literals
			OffsetID = Shader.PropertyToID("_Offset" /* literal recovered by guess */);
			TilingID = Shader.PropertyToID("_Tiling" /* literal recovered by guess */);
		}

		private void Awake()
		{
			spriteRenderer = GetComponent<SpriteRenderer>();
			propertyBlock = new MaterialPropertyBlock();
			Apply();
		}

		private void Update()
		{
			if (!isScrolling)
			{
				return;
			}
			if (timeProperty == null)
			{
				return;
			}
			Loop(timeProperty.GetDeltaTime());
		}

		public void Loop(float deltaTime)
		{
			float x = offset.x + scrollSpeed.x * deltaTime;
			float y = offset.y + scrollSpeed.y * deltaTime;
			offset = new Vector2(x, y);
			if (tiling.x <= Mathf.Abs(x))
			{
				offset.x = 0f;
			}
			if (tiling.y <= Mathf.Abs(y))
			{
				offset.y = 0f;
			}
			Apply();
		}

		private void Apply()
		{
			if (spriteRenderer == null)
			{
				return;
			}
			spriteRenderer.GetPropertyBlock(propertyBlock);
			if (propertyBlock == null)
			{
				return;
			}
			propertyBlock.SetVector(TilingID, tiling);
			propertyBlock.SetVector(OffsetID, offset);
			spriteRenderer.SetPropertyBlock(propertyBlock);
		}

		public void SetOffset(Vector2 value)
		{
			offset.x = value.x % tiling.x;
			offset.y = value.y % tiling.y;
			Apply();
		}

		public void SetTiling(Vector2 value)
		{
			tiling = value;
			Apply();
		}

		public void SetSpeed(Vector2 value)
		{
			scrollSpeed = value;
		}

		public void ResetLoop()
		{
			// TODO(unrecovered): the reset offset is read from an unnamed static Vector2 (DAT_0918cb68 + 0xb8); value not recoverable.
			Apply();
		}
	}
}
