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
		public float time = 0.5f;

		[SerializeField]
		[Range(0f, 1f)]
		private float rate = 0.9f;

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
			gameObject.SetActive(startActive);
			// TODO(unrecovered): the rest of OnActive builds DOTween DOMove tweens with a TweenCallback and Utilities.DelayedCallScaled; DOTween and Utilities are not in the stubs.
		}

		public void MoveBack()
		{
			gameObject.SetActive(true);
			// TODO(unrecovered): builds a DOTween DOMove tween with a TweenCallback and an extra tween-completion helper; DOTween and that helper are not in the stubs.
		}

		protected override void OnDone()
		{
			base.OnDone();
			PlayFx();
		}

		private void OnValidate()
		{
			tf = transform;
		}

		protected override void Setup()
		{
			startActive = state == State.MoveOut;
			doneActive = state == State.MoveIn;

			if (state != State.MoveIn && state != State.MoveOut)
			{
				return;
			}

			Vector2 dir;
			switch (direction)
			{
				case Direction.Up: dir = Vector2.up; break;
				case Direction.Down: dir = Vector2.down; break;
				case Direction.Left: dir = Vector2.left; break;
				default: dir = Vector2.right; break;
			}

			if (state == State.MoveIn)
			{
				rate = 0.8f;
				finish = dir * 4f;
				mid = dir * 4.2f;
			}
			else
			{
				rate = 0.2f;
				finish = dir * 4f;
				mid = -dir * 0.2f;
			}
		}

		public void SetUpPosition()
		{
			// TODO(unrecovered): the pseudocode takes a Vector3 and a float argument that the stub signature does not have, so the target position cannot be recovered.
		}

		public void OnBackPosition()
		{
			// TODO(unrecovered): the pseudocode takes a Vector3 and a float argument that the stub signature does not have, so the target position cannot be recovered.
		}

		private void OnDrawGizmos()
		{
			if (tf == null)
			{
				return;
			}

			Vector3 pos = tf.position;
			Gizmos.DrawLine(pos, pos + (Vector3)mid);
			Gizmos.DrawLine(pos + (Vector3)mid, pos + (Vector3)finish);
			Gizmos.DrawWireSphere(pos + (Vector3)mid, 0.1f);
			Gizmos.color = Color.green;
			// TODO(unrecovered): the pseudocode draws a second sphere at the transform position with an unrecovered radius.
			Gizmos.color = Color.red;
			Gizmos.DrawWireSphere(pos + (Vector3)finish, 0.1f);
		}
	}
}
