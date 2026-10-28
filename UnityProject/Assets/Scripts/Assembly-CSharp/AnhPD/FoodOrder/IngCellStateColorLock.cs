using CakeOrder;
using System;
using DG.Tweening;
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
		private float shackleLift = 0.15f;

		[SerializeField]
		private float shackleLiftDuration = 0.15f;

		[SerializeField]
		private float shackleRotateDuration = 0.3f;

		[SerializeField]
		private AudioClip sfxUnlock;

		private Vector3 _shackleBasePos;

		private Quaternion _shackleBaseRot;

		private void Awake()
		{
			if (shackle == null)
			{
				return;
			}
			_shackleBasePos = shackle.localPosition;
			_shackleBaseRot = shackle.localRotation;
		}

		public void Show(int colorIndex, int keysLeft)
		{
			bool wasShown = IsShown;
			SetShown(true);

			if (txtNumber != null)
			{
				txtNumber.gameObject.SetActive(keysLeft > 1);
				if (keysLeft > 1)
				{
					txtNumber.text = keysLeft.ToString();
				}
			}

			if (lockRenderer != null && colorSprites != null && colorSprites.Length > 0)
			{
				int index = Mathf.Clamp(colorIndex - 1, 0, colorSprites.Length - 1);
				lockRenderer.sprite = colorSprites[index];
			}

			if (!wasShown)
			{
				ResetShackle();
			}
		}

		public void PlayUnlock(Action onUnlocked)
		{
			if (shackle == null)
			{
				onUnlocked?.Invoke();
				return;
			}

			shackle.DOKill();

			// TODO(unrecovered): the unlock sfx is played through an AudioManagerCakeOrder singleton whose type is not in the stubs; sfxUnlock is not played
			Sequence seq = DOTween.Sequence();
			seq.Append(shackle.DOLocalMoveY(_shackleBasePos.y + shackleLift, shackleLiftDuration).SetEase(Ease.OutQuad));
			seq.Append(shackle.DOLocalRotate(new Vector3(0f, 180f, 0f), shackleRotateDuration, RotateMode.FastBeyond360).SetEase(Ease.InOutQuad));
			seq.OnComplete(() => onUnlocked?.Invoke());
		}

		public override void Hide()
		{
			SetShown(false);
			if (txtNumber != null)
			{
				txtNumber.gameObject.SetActive(false);
			}
			if (shackle != null)
			{
				shackle.DOKill();
				shackle.gameObject.SetActive(false);
			}
		}

		private void ResetShackle()
		{
			if (shackle == null)
			{
				return;
			}
			shackle.DOKill();
			shackle.localPosition = _shackleBasePos;
			shackle.localRotation = _shackleBaseRot;
			shackle.gameObject.SetActive(true);
		}
	}
}
