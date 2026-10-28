using AnhPD.FoodOrder;
using DG.Tweening;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaSodaMachineView : GroupViewSpineAnimation
	{
		[SerializeField]
		private GameObject idleVisual;

		[Header("Cup landing (baked from pour_coke_p2 frame 0)")]
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

		private void Awake()
		{
		}

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			return null;
		}

		public override void Play(float duration)
		{
		}

		public override float GetPlayDuration(float fallbackDuration)
		{
			return 0f;
		}

		public override float GetProcessDuration(float fallbackDuration)
		{
			return 0f;
		}

		public override void Stop()
		{
		}
	}
}
