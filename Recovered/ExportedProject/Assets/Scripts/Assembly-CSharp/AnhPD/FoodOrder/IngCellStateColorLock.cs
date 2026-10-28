using System;
using TMPro;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellStateColorLock : IngCellDisplayState
	{
		[SerializeField]
		private SpriteRenderer lockRenderer;

		[SerializeField]
		private Sprite[] colorSprites;

		[SerializeField]
		private TMP_Text txtNumber;

		[SerializeField]
		private Transform shackle;

		[SerializeField]
		private float shackleLift;

		[SerializeField]
		private float shackleLiftDuration;

		[SerializeField]
		private float shackleRotateDuration;

		[SerializeField]
		private AudioClip sfxUnlock;

		private Vector3 _shackleBasePos;

		private Quaternion _shackleBaseRot;

		private void Awake()
		{
		}

		public void Show(int colorIndex, int keysLeft)
		{
		}

		public void PlayUnlock(Action onUnlocked)
		{
		}

		public override void Hide()
		{
		}

		private void ResetShackle()
		{
		}
	}
}
