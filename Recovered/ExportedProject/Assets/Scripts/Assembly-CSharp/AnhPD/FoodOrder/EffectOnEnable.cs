using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class EffectOnEnable : MonoBehaviour
	{
		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		[Range(0f, 1f)]
		protected float volume;

		[SerializeField]
		private float waitTime;

		private float _timer;

		private void OnEnable()
		{
		}

		private void Update()
		{
		}
	}
}
