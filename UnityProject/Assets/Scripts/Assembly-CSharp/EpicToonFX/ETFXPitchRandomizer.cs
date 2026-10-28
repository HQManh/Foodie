using UnityEngine;

namespace EpicToonFX
{
	public class ETFXPitchRandomizer : MonoBehaviour
	{
		public float randomPercent = 10f;

		private void Start()
		{
			Transform tf = transform;
			if (tf == null)
			{
				return;
			}
			AudioSource source = tf.GetComponent<AudioSource>();
			if (source == null)
			{
				return;
			}
			float pitch = source.pitch;
			source.pitch = pitch * (Random.Range(randomPercent / -100f, randomPercent / 100f) + 1f);
		}
	}
}
