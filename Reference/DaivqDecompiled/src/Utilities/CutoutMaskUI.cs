using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

[ExecuteAlways]
public class CutoutMaskUI : Image
{
	private static readonly int _stencilComp;

	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}
}
