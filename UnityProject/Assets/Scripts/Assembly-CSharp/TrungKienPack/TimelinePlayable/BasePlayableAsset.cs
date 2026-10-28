using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace TrungKienPack.TimelinePlayable
{
	public class BasePlayableAsset : PlayableAsset, ITimelineClipAsset
	{
		[SerializeField]
		private ETimeLineType type;

		public ETimeLineType Type => type;

		public ClipCaps clipCaps => (ClipCaps)0xf;

		public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
		{
			ScriptPlayable<BasePlayableBehaviour> scriptPlayable = ScriptPlayable<BasePlayableBehaviour>.Create(graph);
			BasePlayableBehaviour behaviour = scriptPlayable.GetBehaviour();
			if (behaviour == null)
			{
				throw new System.NullReferenceException();
			}
			behaviour.type = type;
			return scriptPlayable;
		}
	}
}
