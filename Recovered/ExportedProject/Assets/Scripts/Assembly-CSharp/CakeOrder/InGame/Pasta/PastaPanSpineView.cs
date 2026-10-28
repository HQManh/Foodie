using AnhPD.FoodOrder;
using DG.Tweening;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaPanSpineView : GroupViewSpineAnimation
	{
		[SerializeField]
		private GameObject idlePan;

		[Header("Ingredient landing (baked from Spine frame 0)")]
		[SerializeField]
		private Transform landingTarget;

		[SerializeField]
		private Mesh landingMesh;

		[SerializeField]
		private Material landingMaterial;

		[SerializeField]
		private Sprite landingSprite;

		[SerializeField]
		[Range(0.01f, 0.3f)]
		private float landingBlendDuration;

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			return null;
		}

		public override void OnProcessStart(ExecutionContext ctx)
		{
		}

		public override void Play(float duration)
		{
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void SetIdlePanVisible(bool visible)
		{
		}
	}
}
