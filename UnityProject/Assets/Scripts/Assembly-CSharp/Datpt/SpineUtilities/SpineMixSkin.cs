using System.Collections.Generic;
using Spine;
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
			ReloadSkin();
		}

		public void ReloadSkin()
		{
			if (_skeletonRenderer == null)
			{
				_skeletonRenderer = GetComponent<ISkeletonComponent>();
			}
			Skeleton skeleton = _skeletonRenderer.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			Skin skin = new Skin("runtime-skin" /* literal recovered by guess */);
			SkeletonData data = skeleton.Data;
			foreach (string skinName in _skins)
			{
				Skin found = data.FindSkin(skinName);
				if (found == null)
				{
					Debug.LogError("Missing skin: " /* literal recovered by guess */ + skinName);
				}
				else
				{
					skin.AddSkin(found);
				}
			}
			skeleton.SetSkin(skin);
			skeleton.SetSlotsToSetupPose();
			// TODO(unrecovered): afterwards the component is refreshed by a type-dependent call (SkeletonAnimation.Update or vtable slots 0x2d8/0x2e0, 0x658/0x660) selected from an unnamed IL2CPP type check; the selection is not resolved.
		}

		public void ReloadSkin(List<string> _skins)
		{
			if (_skeletonRenderer == null)
			{
				_skeletonRenderer = GetComponent<ISkeletonComponent>();
			}
			Skeleton skeleton = _skeletonRenderer.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			Skin skin = new Skin("runtime-skin" /* literal recovered by guess */);
			SkeletonData data = skeleton.Data;
			if (_skins != null)
			{
				foreach (string skinName in _skins)
				{
					Skin found = data.FindSkin(skinName);
					if (found == null)
					{
						Debug.LogError("Missing skin: " /* literal recovered by guess */ + skinName);
					}
					else
					{
						skin.AddSkin(found);
					}
				}
			}
			skeleton.SetSkin(skin);
			skeleton.SetSlotsToSetupPose();
			// TODO(unrecovered): afterwards the component is refreshed by a type-dependent call (SkeletonAnimation.Update or vtable slots 0x658/0x660, 0x2d8/0x2e0) selected from an unnamed IL2CPP type check; the selection is not resolved.
		}
	}
}
