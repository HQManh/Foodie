using CakeOrder.InGame.Sandwich;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class SandwichDisplayBase : MonoBehaviour
	{
		public virtual float AssembleDuration => 0f;

		public abstract bool CanShow(SandwichPiece piece);

		public abstract void Display(PieceSet pieces);

		public virtual void PlayAssembleAnim()
		{
		}

		public virtual bool TryGetBounds(out Bounds bounds)
		{
			bounds = default;
			return false;
		}
	}
}
