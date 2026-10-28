using UnityEngine.Playables;

namespace TrungKienPack.TimelinePlayable
{
	public class BasePlayableBehaviour : PlayableBehaviour
	{
		public ETimeLineType type;

		private BasePlayableComponent cachedComponent;

		public override void ProcessFrame(Playable playable, FrameData info, object playerData)
		{
			// TODO(unrecovered): BasePlayableComponent and its abstract ProcessFrame(float) now exist in the stubs, and the pseudocode's cached call (vtable +0x188, one float arg) matches that member. Still unrecovered: the GetComponent/AddComponent type argument (DAT_091cdb30) and the create-or-get helper (FUN_04ae5fd0, FUN_05322d94), plus the time value from unnamed FUN_04c908dc. Body left empty.
		}
	}
}
