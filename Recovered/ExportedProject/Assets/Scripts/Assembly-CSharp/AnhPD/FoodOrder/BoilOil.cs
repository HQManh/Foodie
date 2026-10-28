using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BoilOil : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer oil;

		[SerializeField]
		private Sprite[] oilSprite;

		[SerializeField]
		private AudioSource sfx;

		private int _index;

		private float _timer;

		private float _duration;

		private bool _isBoiling;

		private bool _isPaused;

		public void SetPaused(bool paused)
		{
		}

		public void Update()
		{
		}

		public void StartBoiling()
		{
		}

		public void StopBoiling()
		{
		}
	}
}
