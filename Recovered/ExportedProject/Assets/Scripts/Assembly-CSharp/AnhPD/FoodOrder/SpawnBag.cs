using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpawnBag : MonoBehaviour
	{
		[SerializeField]
		private AudioClip sfxClick;

		public bool isBlock;

		private void Awake()
		{
		}

		protected virtual void Setup()
		{
		}

		protected void InvokeSpawnEffect()
		{
		}
	}
}
