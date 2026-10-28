using System;
using CakeOrder.PopupMinigame;
using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class FaucetHandle : CakeMinigameRaycastReceiver
	{
		public Action<float> onPouring;

		public Action onStopPouring;

		public Action onFinish;

		protected bool IsBlock;

		public Vector2 HandStartPosition => default;

		protected void HandlePouring(float rate)
		{
		}

		protected void HandleStopPouring()
		{
		}

		public void Block()
		{
		}

		public void Unblock()
		{
		}

		public virtual void OnCancel()
		{
		}

		public virtual void OnRestart()
		{
		}
	}
}
