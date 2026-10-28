using UnityEngine;

namespace UniRx
{
	public static class FrameCountTypeExtensions
	{
		public static YieldInstruction GetYieldInstruction(this FrameCountType frameCountType)
		{
			switch ((int)frameCountType)
			{
			case 2:
				return new WaitForEndOfFrame();
			case 1:
				return new WaitForFixedUpdate();
			default:
				return null;
			}
		}
	}
}
