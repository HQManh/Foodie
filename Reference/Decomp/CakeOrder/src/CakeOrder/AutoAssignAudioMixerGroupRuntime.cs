using UnityEngine;

namespace CakeOrder;

public class AutoAssignAudioMixerGroupRuntime : MonoBehaviour
{
	[SerializeField]
	private AudioSource[] _sources;

	[SerializeField]
	private AudioManagerCakeOrder.AudioTrack _track;

	private void Awake()
	{
	}
}
