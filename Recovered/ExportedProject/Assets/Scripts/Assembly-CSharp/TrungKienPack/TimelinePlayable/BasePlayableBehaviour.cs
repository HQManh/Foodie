using UnityEngine.Playables;

namespace TrungKienPack.TimelinePlayable
{
	public class BasePlayableBehaviour : PlayableBehaviour
	{
		public ETimeLineType type;

		private BasePlayableComponent cachedComponent;

		public override void ProcessFrame(Playable playable, FrameData info, object playerData)
		{
		}
	}
}
