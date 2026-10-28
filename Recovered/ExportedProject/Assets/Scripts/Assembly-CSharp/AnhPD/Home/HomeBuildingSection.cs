using System;
using UnityEngine;

namespace AnhPD.Home
{
	public class HomeBuildingSection : MonoBehaviour
	{
		[SerializeField]
		private HomeBuildingPart[] parts;

		public float delayBetweenParts;

		private bool _isShownFirstTime;

		private int _numPartsShown;

		public Vector3 WorldPosition => default;

		public Vector3 NextAppearWorldPosition => default;

		public int NumParts => 0;

		public void Show(Material appearMat, Material defaultMat)
		{
		}

		public void ShowLevelUpAnim(Material appearMat, Material defaultMat, Action callback = null)
		{
		}

		public void ShowProgress(float progress, Material appearMat, Material defaultMat)
		{
		}

		private void ShowPartsUpTo(int targetCount, Material appearMat, Material defaultMat)
		{
		}

		public void ResetSection()
		{
		}

		public void ShowPart(int partIndex, Material appearMat, Material defaultMat)
		{
		}

		public Vector3 GetPartWorldPosition(int partIndex)
		{
			return default;
		}

		public void SetParticleAppear(ParticleSystem particleAppear)
		{
		}

		public void ActivateHidden()
		{
		}
	}
}
