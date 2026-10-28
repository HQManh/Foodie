using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace TrungKienPack.TimelinePlayable
{
	public class BasePlayableAsset : PlayableAsset, ITimelineClipAsset
	{
		[SerializeField]
		private ETimeLineType type;

		public ETimeLineType Type => ETimeLineType.Type1;

		public ClipCaps clipCaps => ClipCaps.None;

		public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
		{
			return default;
		}
	}
}
