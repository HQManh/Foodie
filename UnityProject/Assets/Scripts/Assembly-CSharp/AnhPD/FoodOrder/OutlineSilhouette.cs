using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	// A solid outline for a UI Image: copies of the image are drawn around it, behind the original, as a flat colour in the shape of the
	// sprite. (The stock UI Outline tints those copies, which multiplies the sprite's own colours into a dark smear.) The copies are flagged
	// in uv1.x for the AnhPD/UI/OutlineSilhouette shader, which draws flagged vertices as a flat colour.
	[RequireComponent(typeof(Graphic))]
	public class OutlineSilhouette : BaseMeshEffect
	{
		public const string ShaderName = "AnhPD/UI/OutlineSilhouette";

		private static readonly Vector2[] Directions =
		{
			new Vector2(1f, 0f), new Vector2(-1f, 0f), new Vector2(0f, 1f), new Vector2(0f, -1f),
			new Vector2(0.7071f, 0.7071f), new Vector2(-0.7071f, 0.7071f), new Vector2(0.7071f, -0.7071f), new Vector2(-0.7071f, -0.7071f)
		};

		private static readonly List<UIVertex> Source = new List<UIVertex>();

		private static readonly List<UIVertex> Output = new List<UIVertex>();

		[SerializeField]
		private Color color = Color.white;

		[SerializeField]
		private float size = 4f;

		public Color Color
		{
			get => color;
			set
			{
				color = value;
				RefreshGraphic();
			}
		}

		public float Size
		{
			get => size;
			set
			{
				size = value;
				RefreshGraphic();
			}
		}

		// The outline needs the shader that understands the flag, and the canvas has to pass uv1 on to it.
		public void Prepare()
		{
			Shader shader = Shader.Find(ShaderName);
			if (shader != null && graphic != null && (graphic.material == null || graphic.material.shader != shader))
			{
				graphic.material = new Material(shader);
			}
			Canvas canvas = graphic != null ? graphic.canvas : null;
			if (canvas != null)
			{
				canvas = canvas.rootCanvas;
				canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord1;
			}
		}

		protected override void OnEnable()
		{
			base.OnEnable();
			Prepare();
		}

		private void RefreshGraphic()
		{
			if (graphic != null)
			{
				graphic.SetVerticesDirty();
			}
		}

		public override void ModifyMesh(VertexHelper vh)
		{
			if (!IsActive() || size <= 0f || vh.currentVertCount == 0)
			{
				return;
			}
			Source.Clear();
			vh.GetUIVertexStream(Source);
			Output.Clear();
			Vector4 flag = new Vector4(1f, 0f, 0f, 0f);
			for (int d = 0; d < Directions.Length; d++)
			{
				Vector3 offset = new Vector3(Directions[d].x, Directions[d].y, 0f) * size;
				for (int i = 0; i < Source.Count; i++)
				{
					UIVertex vertex = Source[i];
					vertex.position += offset;
					Color32 c = color;
					// The outline fades with the icon.
					c.a = (byte)(color.a * vertex.color.a);
					vertex.color = c;
					vertex.uv1 = flag;
					Output.Add(vertex);
				}
			}
			Output.AddRange(Source);
			vh.Clear();
			vh.AddUIVertexTriangleStream(Output);
		}
	}
}
