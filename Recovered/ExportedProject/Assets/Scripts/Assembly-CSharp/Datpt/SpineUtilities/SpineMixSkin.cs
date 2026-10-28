using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;

namespace Datpt.SpineUtilities
{
	public class SpineMixSkin : MonoBehaviour
	{
		private ISkeletonComponent _skeletonRenderer;

		[SpineSkin(null, null, false, false, false, false, dataField = "_skeletonRenderer")]
		[SerializeField]
		private string[] _skins;

		private void OnEnable()
		{
		}

		public void ReloadSkin()
		{
		}

		public void ReloadSkin(List<string> _skins)
		{
		}
	}
}
