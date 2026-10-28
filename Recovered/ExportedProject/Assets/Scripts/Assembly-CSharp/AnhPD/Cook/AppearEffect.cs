using UnityEngine;
using UnityEngine.Events;

namespace AnhPD.Cook
{
	public class AppearEffect : MonoBehaviour
	{
		public enum AppearType
		{
			Appear = 0,
			FallAppear = 1,
			FadeIn = 5,
			FallAppearLocal = 7,
			AppearVertical = 8,
			ScaleUp = 9
		}

		public float distance;

		public float delay;

		[SerializeField]
		private SpriteRenderer spriteRenderer;

		public AppearType type;

		public bool isPlayOnEnable;

		public UnityEvent onAppeared;

		private void OnEnable()
		{
		}

		public void PlayEffect()
		{
		}
	}
}
