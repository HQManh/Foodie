using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

[RequireComponent(typeof(Selectable))]
public class UIButtonVisual : MonoBehaviour
{
	[Serializable]
	public class GraphicConfig
	{
		private const float Duration = 0.2f;

		public Graphic image;

		public Color colorNormal;

		public Color colorDisabled;

		private Tween _tween;

		public void Apply(bool isInteractable)
		{
		}

		public void ApplyImmediate(bool isInteractable)
		{
		}
	}

	[Serializable]
	public class TextConfig
	{
		private const float Duration = 0.2f;

		public Text text;

		public string txtNormal;

		public string txtDisabled;

		private Tween _tween;

		public void Apply(bool isInteractable)
		{
		}

		public void ApplyImmediate(bool isInteractable, params string[] strs)
		{
		}
	}

	[SerializeField]
	private Selectable _component;

	[SerializeField]
	private GraphicConfig[] _graphicConfigs;

	[SerializeField]
	private TextConfig[] _textConfigs;

	public float transitionDuration;

	private bool CheckIsInteractable()
	{
		return false;
	}

	public void UpdateVisual()
	{
	}

	public void UpdateVisualImmediate()
	{
	}
}
