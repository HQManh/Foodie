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
			Setup();
		}

		protected virtual void Setup()
		{
		}

		protected void InvokeSpawnEffect()
		{
			// TODO(unrecovered): the pseudocode plays an SFX through a chain of unnamed audio-manager
			// accessors (FUN_03f95a6c) and runs a DOTween punch-scale on a static settings object whose
			// fields (pitch/scale/duration) cannot be matched by name to any stub member.
		}
	}
}
