using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewIngredientIcons : StationGroupView
	{
		[SerializeField]
		private SpriteRenderer[] icons;

		[SerializeField]
		private StationGroupView cookAnim;

		private int _count;

		private string _baseAwaitingSlot;

		private void Awake()
		{
		}

		public override void OnBaseTaken(string ingId)
		{
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		private void Show(string ingId)
		{
		}

		private void Clear()
		{
		}

		public override void Play(float duration)
		{
		}

		public override void OnProcessStart(ExecutionContext ctx)
		{
		}

		public override void Stop()
		{
		}

		public override void OnProcessComplete()
		{
		}

		public override void SetPaused(bool paused)
		{
		}
	}
}
