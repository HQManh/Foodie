using TrungKienPack.Particle;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellStateGlow : IngCellDisplayState
	{
		[SerializeField]
		private ParticleElement vfx;

		public void PlayOnce()
		{
			if (vfx != null)
			{
				vfx.Play();
			}
		}

		public override void Hide()
		{
			if (vfx != null)
			{
				vfx.Stop();
			}
		}
	}
}
