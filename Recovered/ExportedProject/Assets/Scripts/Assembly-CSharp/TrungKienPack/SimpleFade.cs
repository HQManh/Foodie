using UnityEngine;

namespace TrungKienPack
{
	public class SimpleFade : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer[] arrSpr;

		[SerializeField]
		private float duration;

		private float currentAlpha;

		public void SetFade(float value)
		{
		}
	}
}
