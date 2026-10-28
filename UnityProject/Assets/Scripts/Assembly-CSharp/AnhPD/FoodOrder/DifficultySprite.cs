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
			if (!target)
			{
				target = GetComponent<SpriteRenderer>();
			}
			CacheNormal();
		}

		private void OnEnable()
		{
			Apply();
		}

		private void CacheNormal()
		{
			if (!_normalCached && (bool)target)
			{
				_normal = target.sprite;
				_normalCached = true;
			}
		}

		public void Apply()
		{
			if (!target)
			{
				return;
			}
			CacheNormal();
			Sprite sprite = null;
			if ((bool)MessyController.Ins)
			{
				LevelInfo info = MessyController.Ins.Info;
				sprite = ((info == null) ? null : info.SkinSpriteFor(part));
			}
			if (!sprite)
			{
				sprite = _normal;
			}
			target.sprite = sprite;
		}

		public static void ApplyAllInScene()
		{
			DifficultySprite[] array = Object.FindObjectsOfType<DifficultySprite>(true);
			for (int i = 0; i < array.Length; i++)
			{
				array[i].Apply();
			}
		}
	}
}
