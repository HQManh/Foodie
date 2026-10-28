using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[RequireComponent(typeof(Graphic))]
	public class RectSpaceUVMeshEffect : BaseMeshEffect
	{
		private static readonly List<UIVertex> Buffer;

		protected override void OnEnable()
		{
		}

		public override void ModifyMesh(VertexHelper vh)
		{
		}
	}
}
