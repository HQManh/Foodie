using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class DifficultySprite : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer target;

		[SerializeField]
		private LevelSkinPart part;

		private Sprite _normal;

		private bool _normalCached;

		private void Awake()
		{
		}

		private void OnEnable()
		{
		}

		private void CacheNormal()
		{
		}

		public void Apply()
		{
		}

		public static void ApplyAllInScene()
		{
		}
	}
}
