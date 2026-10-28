using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ActionMove : ActionBase
	{
		public enum Direction
		{
			Up = 0,
			Down = 1,
			Left = 2,
			Right = 3
		}

		public enum State
		{
			MoveIn = 0,
			MoveOut = 1,
			None = 2
		}

		[SerializeField]
		private Transform tf;

		[SerializeField]
		public float time;

		[SerializeField]
		[Range(0f, 1f)]
		private float rate;

		[SerializeField]
		private Vector2 mid;

		[SerializeField]
		private Vector2 finish;

		[SerializeField]
		private Direction direction;

		[field: SerializeField]
		public State state { get; private set; }

		public override void OnActive()
		{
		}

		public void MoveBack()
		{
		}

		protected override void OnDone()
		{
		}

		private void OnValidate()
		{
		}

		protected override void Setup()
		{
		}

		public void SetUpPosition()
		{
		}

		public void OnBackPosition()
		{
		}

		private void OnDrawGizmos()
		{
		}
	}
}
