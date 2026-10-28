using Spine.Unity;
using UnityEngine;

namespace Utilities;

public class SpineSkinMix : MonoBehaviour
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
}
