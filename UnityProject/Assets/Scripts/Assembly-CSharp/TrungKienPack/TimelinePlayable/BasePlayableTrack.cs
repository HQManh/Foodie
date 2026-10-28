using UnityEngine;
using UnityEngine.Timeline;

namespace TrungKienPack.TimelinePlayable
{
	[TrackColor(0.2f, 0.7f, 0.3f)]
	[TrackBindingType(typeof(GameObject))]
	[TrackClipType(typeof(BasePlayableAsset))]
	public class BasePlayableTrack : TrackAsset
	{
	}
}
