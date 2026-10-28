using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home.Journey
{

public class UIJourneyChapterSection : MonoBehaviour
{
	private static readonly Vector3[] BarCorners = new Vector3[4];

	[SerializeField]
	private UIJourneyChapterCard _card;

	[Tooltip("This chapter's own bar. Its height is driven by the chapter's level count, so every level step is the same number of pixels here and in every other chapter.")]
	[SerializeField]
	private UIJourneyProgressBar _progressBar;

	[Tooltip("Milestone badges are parented here. It sits below the bar in sibling order, so the bar runs over the badges - but still under the chapter card.")]
	[SerializeField]
	private RectTransform _milestoneContainer;

	[Tooltip("Holds the divider lines that cross the bar at each milestone. Must live under the bar AFTER Track, or the fill draws over them.")]
	[SerializeField]
	private RectTransform _dividerContainer;

	[Tooltip("Inactive template under the divider container; cloned once per milestone and reused across layout passes.")]
	[SerializeField]
	private RectTransform _templateDivider;

	private readonly List<UIJourneyMilestoneItem> _milestones = new List<UIJourneyMilestoneItem>();

	private readonly List<RectTransform> _dividers = new List<RectTransform>();

	private JourneyLevelMap.MapRange _range;

	private bool _hasBar;

	public JourneyLevelMap.MapRange Range => default(JourneyLevelMap.MapRange);

	public bool HasLevels => false;

	public RectTransform RectTransform => null;

	public IReadOnlyList<UIJourneyMilestoneItem> Milestones => null;

	public float WorldCenterX => 0f;

	public string DisplayName { get; private set; }

	public event Action<UIJourneyChapterSection> onClickCard;

	public bool ContainsLevel(float globalLevel)
	{
		return false;
	}

	private void Awake()
	{
	}

	private void OnClickCard()
	{
	}

	public void SetUpChapter(JourneyLevelMap.MapRange range, string displayName, Sprite preview)
	{
	}

	public void SetUpComingSoon(string text)
	{
	}

	public void AddMilestone(UIJourneyMilestoneItem milestone)
	{
	}

	public float Layout(float pixelsPerLevel)
	{
		return 0f;
	}

	private void LayoutMilestones(float pixelsPerLevel)
	{
	}

	private void LayoutDividers(float pixelsPerLevel)
	{
	}

	private RectTransform GetDivider(int index)
	{
		return null;
	}

	private static float TopToEdge(RectTransform item, RectTransform child, float childLocalY)
	{
		return 0f;
	}

	public float GetLevelWorldY(float globalLevel)
	{
		return 0f;
	}

	public void SetFillAtLevel(float globalLevel)
	{
	}

	public void UpdateProgress(int completedLevels)
	{
	}
}
}
