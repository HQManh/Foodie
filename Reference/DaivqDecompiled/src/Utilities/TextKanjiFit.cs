using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class TextKanjiFit : Text
{
	public bool isKanji;

	private readonly UIVertex[] m_TempVerts;

	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}
}
