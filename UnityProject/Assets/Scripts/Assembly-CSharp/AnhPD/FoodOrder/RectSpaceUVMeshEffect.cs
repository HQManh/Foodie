using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[RequireComponent(typeof(Graphic))]
	public class RectSpaceUVMeshEffect : BaseMeshEffect
	{
		private static readonly List<UIVertex> Buffer = new List<UIVertex>();

		protected override void OnEnable()
		{
			base.OnEnable();
			Canvas rootCanvas = graphic != null && graphic.canvas != null ? graphic.canvas.rootCanvas : null;
			if (rootCanvas != null && (rootCanvas.additionalShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) == 0)
			{
				rootCanvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord1;
			}
		}

		public override void ModifyMesh(VertexHelper vh)
		{
			// TODO(unrecovered): the pseudocode's ModifyMesh receives extra float/struct parameters
			// (param_2..param_4) that do not map to the override signature, so the exact UV
			// normalisation constants are not recovered. Below uses the graphic's rect as the UV space.
			if (!IsActive())
			{
				return;
			}
			Rect rect = graphic.rectTransform.rect;
			if (rect.width <= 0f || rect.height <= 0f)
			{
				return;
			}
			vh.GetUIVertexStream(Buffer);
			for (int i = 0; i < Buffer.Count; i++)
			{
				UIVertex v = Buffer[i];
				v.uv1 = new Vector2((v.position.x - rect.x) / rect.width, (v.position.y - rect.y) / rect.height);
				Buffer[i] = v;
			}
			vh.Clear();
			vh.AddUIVertexTriangleStream(Buffer);
		}
	}
}
