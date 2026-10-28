using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities
{

public class DraggableObjectFx : MonoBehaviour
{
	public DraggableObject draggableObject;

	public AudioSource audioSource;

	public AudioClip sfxStartDrag;

	public HapticTypes hapticStartDrag;

	public AudioClip sfxEndDrag;

	public HapticTypes hapticEndDrag;

	private void Awake()
	{
	}

	private void OnStartDrag()
	{
	}

	private void OnEndDrag()
	{
	}
}
}
