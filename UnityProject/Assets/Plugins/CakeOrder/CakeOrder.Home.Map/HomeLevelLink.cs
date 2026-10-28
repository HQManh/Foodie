using System;
using CakeOrder.BaseUI;
using UnityEngine;

namespace CakeOrder.Home.Map
{

public class HomeLevelLink : UIElementAbstract
{
	[Serializable]
	public class VisualConfig
	{
		public float durationShow;
	}

	[Serializable]
	public class LineConfig
	{
		public LineRenderer lineRenderer;

		public Vector3 lineOffset;
	}

	[SerializeField]
	private LineConfig[] _lines;

	private HomeLevelNode _startNode;

	private HomeLevelNode _endNode;

	private VisualConfig _visualConfig;

	private Coroutine _coroutineShowLine;

	private bool _isShowAnim;

	public void SetUp(VisualConfig visualConfig, HomeLevelNode startNode, HomeLevelNode endNode)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElementImmediate()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}
}
}
