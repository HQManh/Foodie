using System;
using UnityEngine;

namespace TrungKienPack
{
	[Serializable]
	public class TimeScaleProperty
	{
		[SerializeField]
		private bool isUserTimeScale = true;

		public float GetTime()
		{
			if (isUserTimeScale)
			{
				return Time.time;
			}
			return Time.unscaledTime;
		}

		public float GetDeltaTime()
		{
			if (isUserTimeScale)
			{
				return Time.deltaTime;
			}
			return Time.unscaledDeltaTime;
		}
	}
}
