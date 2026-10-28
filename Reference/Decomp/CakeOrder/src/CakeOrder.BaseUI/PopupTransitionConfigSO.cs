using System;
using DG.Tweening;
using UnityEngine;

namespace CakeOrder.BaseUI;

[CreateAssetMenu(fileName = "PopupTransitionConfig", menuName = "ScriptableObjects/CakeOrder/PopupTransitionConfig")]
public class PopupTransitionConfigSO : ScriptableObject
{
	[Serializable]
	public struct Fade
	{
		public float duration;

		public Ease ease;
	}

	[SerializeField]
	private Fade _show;

	[SerializeField]
	private Fade _hide;

	public static readonly Fade DefaultShow;

	public static readonly Fade DefaultHide;

	public Fade Show => default(Fade);

	public Fade Hide => default(Fade);
}
