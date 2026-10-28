using System;
using UnityEngine;

namespace TrungKienPack
{
	[Serializable]
	public class TimeScaleProperty
	{
		[SerializeField]
		private bool isUserTimeScale;

		public float GetTime()
		{
			return 0f;
		}

		public float GetDeltaTime()
		{
			return 0f;
		}
	}
}
