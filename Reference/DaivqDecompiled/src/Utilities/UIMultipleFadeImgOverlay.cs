using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class UIMultipleFadeImgOverlay : MonoBehaviour
{
	[SerializeField]
	private Image[] _imgs;

	[SerializeField]
	private Ease _easeFadeIn;

	[SerializeField]
	private Ease _easingFadeOut;

	[SerializeField]
	private float _durationTransition;

	private Sequence _seqTransition;

	public int NumImgs => 0;

	public void ChangeImageImmediate(int index)
	{
	}

	public void ChangeImage(int index)
	{
	}
}
