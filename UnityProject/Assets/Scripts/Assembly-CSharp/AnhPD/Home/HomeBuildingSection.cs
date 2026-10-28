using System;
using UnityEngine;

namespace AnhPD.Home
{
	public class HomeBuildingSection : MonoBehaviour
	{
		[SerializeField]
		private HomeBuildingPart[] parts;

		public float delayBetweenParts = 0.05f;

		private bool _isShownFirstTime;

		private int _numPartsShown;

		public Vector3 WorldPosition => parts != null && parts.Length != 0 ? parts[0].transform.position : transform.position;

		public Vector3 NextAppearWorldPosition => parts != null && parts.Length != 0 ? parts[Mathf.Clamp(_numPartsShown, 0, parts.Length - 1)].transform.position : transform.position;

		public int NumParts => parts != null ? parts.Length : 0;

		public void Show(Material appearMat, Material defaultMat)
		{
			gameObject.SetActive(true);
			if (!_isShownFirstTime)
			{
				_isShownFirstTime = true;
				if (parts != null)
				{
					ShowPartsUpTo(parts.Length, appearMat, defaultMat);
				}
			}
			else if (parts != null)
			{
				foreach (HomeBuildingPart part in parts)
				{
					part.gameObject.SetActive(true);
				}
			}
		}

		public void ShowLevelUpAnim(Material appearMat, Material defaultMat, Action callback = null)
		{
			// callback is not used by the recovered body.
			if (parts != null)
			{
				ShowPartsUpTo(parts.Length, appearMat, defaultMat);
			}
		}

		public void ShowProgress(float progress, Material appearMat, Material defaultMat)
		{
			gameObject.SetActive(true);
			if (parts == null)
			{
				return;
			}
			_isShownFirstTime = true;
			int count = parts.Length;
			int target = Mathf.Clamp((int)(count * progress), 0, count);
			ShowPartsUpTo(target, appearMat, defaultMat);
		}

		private void ShowPartsUpTo(int targetCount, Material appearMat, Material defaultMat)
		{
			gameObject.SetActive(true);
			if (_numPartsShown < targetCount && parts != null)
			{
				float delay = 0f;
				for (int i = _numPartsShown; i < targetCount; i++)
				{
					parts[i].TweenAnim(appearMat, defaultMat, delay, 1f);
					delay += delayBetweenParts;
				}
				_numPartsShown = targetCount;
			}
		}

		public void ResetSection()
		{
			_numPartsShown = 0;
			if (parts != null)
			{
				foreach (HomeBuildingPart part in parts)
				{
					part.ResetPart();
				}
			}
			gameObject.SetActive(false);
		}

		public void ShowPart(int partIndex, Material appearMat, Material defaultMat)
		{
			if (partIndex < 0 || parts == null || partIndex >= parts.Length)
			{
				return;
			}
			gameObject.SetActive(true);
			_isShownFirstTime = true;
			parts[partIndex].TweenAnim(appearMat, defaultMat, 0f, 1f);
			if (partIndex >= _numPartsShown)
			{
				_numPartsShown = partIndex + 1;
			}
		}

		public Vector3 GetPartWorldPosition(int partIndex)
		{
			if (partIndex >= 0 && parts != null && partIndex < parts.Length)
			{
				return parts[partIndex].transform.position;
			}
			return transform.position;
		}

		public void SetParticleAppear(ParticleSystem particleAppear)
		{
			if (parts != null)
			{
				foreach (HomeBuildingPart part in parts)
				{
					part.SetParticleAppear(particleAppear);
				}
			}
		}

		public void ActivateHidden()
		{
			gameObject.SetActive(true);
			_isShownFirstTime = false;
			_numPartsShown = 0;
			if (parts != null)
			{
				foreach (HomeBuildingPart part in parts)
				{
					part.ResetPart();
				}
			}
		}
	}
}
