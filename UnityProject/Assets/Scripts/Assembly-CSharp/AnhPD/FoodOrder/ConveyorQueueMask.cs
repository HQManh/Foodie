using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorQueueMask
	{
		private SpriteMask _mask;

		private Sprite _sprite;

		public void Apply(Transform space, bool active, Rect rect)
		{
			if (active && space != null)
			{
				EnsureMask(space);
				if (_mask == null)
				{
					return;
				}
				_mask.gameObject.SetActive(value: true);
				Transform tf = _mask.transform;
				tf.localPosition = new Vector3(rect.x + rect.width * 0.5f, rect.y + rect.height * 0.5f, 0f);
				tf.localScale = new Vector3(Mathf.Max(0.01f, rect.width), Mathf.Max(0.01f, rect.height), 1f);
			}
			else if (_mask != null)
			{
				_mask.gameObject.SetActive(value: false);
			}
		}

		private void EnsureMask(Transform space)
		{
			if (!(_mask != null))
			{
				if (_sprite == null)
				{
					_sprite = Sprite.Create(Texture2D.whiteTexture, new Rect(0f, 0f, 1f, 1f), new Vector2(0.5f, 0.5f), 1f);
				}
				GameObject go = new GameObject("ConveyorQueueMask");
				go.transform.SetParent(space, worldPositionStays: false);
				_mask = go.AddComponent<SpriteMask>();
				_mask.sprite = _sprite;
			}
		}

		public void Clear()
		{
			if (_mask != null)
			{
				Object.Destroy(_mask.gameObject);
			}
			_mask = null;
		}
	}
}
