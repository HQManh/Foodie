using UnityEngine;

namespace TrungKienPack.TimelinePlayable
{
	public abstract class BasePlayableComponent : MonoBehaviour
	{
		[SerializeField]
		private ETimeLineType type;

		public abstract float ComponentDuration { get; }

		public bool IsCompareType(ETimeLineType otherType)
		{
			return type == otherType;
		}

		public abstract void ProcessFrame(float time);
	}
}
