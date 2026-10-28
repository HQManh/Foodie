using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey;

public class UIHomeTabPageJourneyCards : UIHomeTabPage
{
	[Serializable]
	public class ChapterArt
	{
		public string mapId;

		public Sprite preview;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__8 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageJourneyCards _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[Header("Journey - Data")]
	[Tooltip("map_metadata_config can name chapters the build has no assets for. Off: they are skipped. On: they are drawn as locked cards with the raw map id for a name.")]
	[SerializeField]
	private bool _showChaptersWithoutAssets;

	[Header("Journey - Scroll")]
	[SerializeField]
	private ScrollRect _scrollRect;

	[SerializeField]
	private RectTransform _content;

	[SerializeField]
	private UIJourneyRestaurantCard _prefabCard;

	[Header("Journey - Chapter Art")]
	[Tooltip("Picture per chapter, matched by map id rather than by position, so reordering the maps in the database cannot hand a chapter the wrong picture.")]
	[SerializeField]
	private ChapterArt[] _chapterArts;

	private readonly List<UIJourneyRestaurantCard> _cards;

	private bool _isBuilt;

	private const string LocComingSoon = "coming_soon";

	private const string LocUnlockLevelToContinue = "toast_unlock_level_n_to_continue";

	[Header("Journey - Locked toast")]
	[Tooltip("Used until the localization table carries toast_unlock_level_n_to_continue. {0} is the global day that opens the chapter.")]
	[SerializeField]
	private string _formatUnlockToastFallback;

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__8))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void BuildCards()
	{
	}

	private void RefreshCards()
	{
	}

	private Sprite GetChapterPreview(string mapId)
	{
		return null;
	}

	private static string GetChapterName(string mapId)
	{
		return null;
	}

	private static bool IsPreviewOnly(string mapId)
	{
		return false;
	}

	private static bool IsHidden(string mapId)
	{
		return false;
	}

	private ChapterArt FindChapterArt(string mapId)
	{
		return null;
	}

	private void OnClickView(UIJourneyRestaurantCard card)
	{
	}

	private void ShowLockedToast(UIJourneyRestaurantCard card)
	{
	}

	private void ScrollToCurrent()
	{
	}

	private UIJourneyRestaurantCard FindCurrentCard()
	{
		return null;
	}
}
