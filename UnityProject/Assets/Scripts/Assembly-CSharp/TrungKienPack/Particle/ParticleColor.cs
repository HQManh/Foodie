using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public static class ParticleColor
	{
		public static ParticleSystem.MinMaxGradient BuildRandomColorGradient(IReadOnlyList<Color> colors)
		{
			if (colors == null || colors.Count == 0)
			{
				return new ParticleSystem.MinMaxGradient(Color.white);
			}
			if (colors.Count == 1)
			{
				return new ParticleSystem.MinMaxGradient(colors[0]);
			}
			// TODO(unrecovered): two or more colors build a Gradient (alpha keys 1/1 at t=0 and t=1, then color keys per color); the color key times are not recoverable from the pseudocode.
			return default;
		}
	}
}
