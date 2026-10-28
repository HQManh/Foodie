using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UIHint : UICakePopup
	{
		[CompilerGenerated]
		private sealed class _003CFirstOpenHintRoutine_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public UIHint _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CFirstOpenHintRoutine_003Ed__34(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[SerializeField]
		private UIHintRecipe recipeHolder;

		[SerializeField]
		private Transform content;

		[SerializeField]
		private Image imgIcon;

		[SerializeField]
		private UIHintBookmark bookmarkPrefab;

		[SerializeField]
		private Transform bookmarkRoot;

		[SerializeField]
		private TextMeshProUGUI txtName;

		[SerializeField]
		private GameObject objNew;

		[SerializeField]
		private ScrollRect scrollRect;

		[SerializeField]
		private TutorialHandleTap tap;

		[SerializeField]
		private float firstOpenHintDelay;

		private const string FirstOpenDoneKey = "UIHint-FirstOpenDone";

		private bool _isFirstOpenSession;

		private Coroutine _firstOpenRoutine;

		private readonly List<UIHintRecipe> _recipeHolders;

		private readonly List<string> _holderInitedFor;

		private readonly List<UIHintBookmark> _bookmarks;

		private UIHintBookmark _bookmark;

		private readonly List<string> _show;

		private bool _isEnableTrigger;

		private Action _onClose;

		private static LevelInfo Info => null;

		private void RegisterBookmark(UIHintBookmark mark)
		{
		}

		private void OnBookmarkSelected(UIHintBookmark bookmark)
		{
		}

		private void ShowHolderOnly(int idx)
		{
		}

		public void ShowListOrder(List<string> listId, string focusId = null, Action onClose = null)
		{
		}

		private void InitHolderForId(UIHintRecipe holder, string strId)
		{
		}

		public void ShowRecipe(string strId, bool isNewRecipe = false, Action onClose = null)
		{
		}

		private UIHintRecipe GetHolder(string strId)
		{
			return null;
		}

		private UIHintRecipe EnsureHolder(int index)
		{
			return null;
		}

		private void ShowFlexibleRecipe(List<string> listIds, UIHintRecipe holder)
		{
		}

		private void ShowCombinationsOnly(string strId, UIHintRecipe holder)
		{
		}

		public override void HideByBackButton()
		{
		}

		protected override void OnDoneShow()
		{
		}

		[IteratorStateMachine(typeof(_003CFirstOpenHintRoutine_003Ed__34))]
		private IEnumerator FirstOpenHintRoutine()
		{
			return null;
		}

		protected override void OnBeforeHide()
		{
		}

		protected override void OnDoneHide()
		{
		}
	}
}
