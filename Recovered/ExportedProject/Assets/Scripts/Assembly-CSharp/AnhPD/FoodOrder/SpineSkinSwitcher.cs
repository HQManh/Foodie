using System;
using CakeOrder.DataSO;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpineSkinSwitcher : MonoBehaviour
	{
		[Serializable]
		public class Entry
		{
			public CustomerSkinTriggerSO trigger;

			[SpineSkin(null, null, false, true, false, false)]
			public string skinName;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private SkeletonGraphic skeletonGraphic;

		[Tooltip("Same priority: the earlier entry wins.")]
		[SerializeField]
		private Entry[] skins;

		private const string DefaultSpineSkin = "default";

		private string _defaultSkinName;

		private bool _defaultCaptured;

		private void Reset()
		{
		}

		private void OnEnable()
		{
		}

		public void Apply()
		{
		}

		public void Apply(WeatherEffect weather)
		{
		}

		private static void SetSkin(Skeleton skeleton, string skinName)
		{
		}

		private void CaptureDefault()
		{
		}

		private string ResolveSkin(in SkinContext context)
		{
			return null;
		}

		private bool HasSkin(string skinName)
		{
			return false;
		}

		public static void ApplyAllInScene()
		{
		}

		private static WeatherEffect CurrentWeather()
		{
			return WeatherEffect.Normal;
		}
	}
}
