using System;
using System.Collections;
using System.Collections.Generic;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UIHint : UICakePopup
	{
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
		private float firstOpenHintDelay = 3f;

		private const string FirstOpenDoneKey = "UIHint-FirstOpenDone";

		private bool _isFirstOpenSession;

		private Coroutine _firstOpenRoutine;

		private readonly List<UIHintRecipe> _recipeHolders = new List<UIHintRecipe>();

		private readonly List<string> _holderInitedFor = new List<string>();

		private readonly List<UIHintBookmark> _bookmarks = new List<UIHintBookmark>();

		private UIHintBookmark _bookmark;

		private readonly List<string> _show = new List<string>();

		private bool _isEnableTrigger;

		private Action _onClose;

		private static LevelInfo Info => MessyController.Ins != null ? MessyController.Ins.Info : null;

		private void RegisterBookmark(UIHintBookmark mark)
		{
			if (mark == null)
			{
				return;
			}
			mark.onClick = OnBookmarkSelected;
			mark.OnUnselected();
			_bookmarks.Add(mark);
		}

		private void OnBookmarkSelected(UIHintBookmark bookmark)
		{
			if (_bookmark == bookmark && !_isEnableTrigger)
			{
				return;
			}
			if (_bookmark != null)
			{
				_bookmark.OnUnselected();
			}
			_bookmark = bookmark;
			if (bookmark == null)
			{
				return;
			}
			bookmark.OnSelected();
			_isEnableTrigger = false;
			ShowHolderOnly(_show.IndexOf(bookmark.id));
		}

		private void ShowHolderOnly(int idx)
		{
			if (idx < 0 || idx >= _show.Count)
			{
				return;
			}
			string id = _show[idx];
			LevelInfo info = Info;
			if (imgIcon != null && info != null)
			{
				imgIcon.sprite = info.GetIngredientSprite(id);
			}
			if (txtName != null && info != null)
			{
				txtName.text = info.GetIngredientName(FlexibleId.BaseOf(id));
			}
			for (int i = 0; i < _recipeHolders.Count; i++)
			{
				_recipeHolders[i].gameObject.SetActive(idx == i);
			}
		}

		public void ShowListOrder(List<string> listId, string focusId = null, Action onClose = null)
		{
			_onClose = onClose;
			_show.Clear();
			if (listId != null)
			{
				foreach (string id in listId)
				{
					if (!_show.Contains(id))
					{
						_show.Add(id);
					}
				}
			}
			while (_bookmarks.Count < _show.Count)
			{
				UIHintBookmark mark = Instantiate(bookmarkPrefab, bookmarkRoot);
				RegisterBookmark(mark);
			}
			for (int i = 0; i < _bookmarks.Count; i++)
			{
				if (i < _show.Count)
				{
					_bookmarks[i].Init(_show[i]);
				}
				else
				{
					_bookmarks[i].gameObject.SetActive(false);
				}
			}
			for (int j = 0; j < _show.Count; j++)
			{
				EnsureHolder(j);
				if (_holderInitedFor[j] != _show[j])
				{
					InitHolderForId(_recipeHolders[j], _show[j]);
					_holderInitedFor[j] = _show[j];
				}
				_recipeHolders[j].gameObject.SetActive(false);
			}
			for (int k = _show.Count; k < _recipeHolders.Count; k++)
			{
				_recipeHolders[k].gameObject.SetActive(false);
			}
			_isEnableTrigger = true;
			int focusIndex = string.IsNullOrEmpty(focusId) ? -1 : _show.IndexOf(focusId);
			if (_bookmarks.Count > 0)
			{
				OnBookmarkSelected(_bookmarks[Math.Max(focusIndex, 0)]);
			}
			if (scrollRect != null)
			{
				scrollRect.gameObject.SetActive(_show.Count > 1);
			}
		}

		private void InitHolderForId(UIHintRecipe holder, string strId)
		{
			if (!FlexibleId.IsFlexible(strId))
			{
				LevelInfo info = Info;
				if (info == null)
				{
					return;
				}
				List<List<RcDisplayConfig>> all = info.GetAllDisplayConfigInRecipe(strId, true);
				if (all == null || all.Count < 1)
				{
					return;
				}
				if (holder != null)
				{
					holder.Init(all[0]);
				}
				return;
			}
			// Flexible items: the getter at vtable +0x268 is FlexibleDragItem.GetIngIds(longId).
				LevelInfo flexInfo = Info;
				if (flexInfo == null)
				{
					return;
				}
				FlexibleDragItem flexPrefab = flexInfo.GetIngredientPrefab(FlexibleId.BaseOf(strId)) as FlexibleDragItem;
				if (flexPrefab == null)
				{
					return;
				}
				List<string> flexIds = flexPrefab.GetIngIds(strId);
				ShowFlexibleRecipe(flexIds, holder);
		}

		public void ShowRecipe(string strId, bool isNewRecipe = false, Action onClose = null)
		{
			_onClose = onClose;
			if (isNewRecipe && scrollRect != null)
			{
				scrollRect.gameObject.SetActive(false);
			}
			if (objNew != null)
			{
				objNew.SetActive(isNewRecipe);
			}
			foreach (UIHintRecipe holder in _recipeHolders)
			{
				holder.gameObject.SetActive(false);
			}
			LevelInfo info = Info;
			if (info == null)
			{
				return;
			}
			if (imgIcon != null)
			{
				imgIcon.sprite = info.GetIngredientSprite(strId);
			}
			string baseId = FlexibleId.BaseOf(strId);
			UIHintRecipe currentHolder = GetHolder(strId);
			if (!FlexibleId.IsFlexible(strId))
			{
				ShowCombinationsOnly(strId, currentHolder);
			}
			else
			{
				// TODO(unrecovered): flexible branch of ShowRecipe not reproduced. InitHolderForId resolves the same vtable +0x268 getter as FlexibleDragItem.GetIngIds, but the ShowRecipe pseudocode (0x41282cc) was not traced for this branch.
			}
			if (txtName != null)
			{
				txtName.text = info.GetIngredientName(baseId);
			}
		}

		private UIHintRecipe GetHolder(string strId)
		{
			int idx = _show.IndexOf(strId);
			return EnsureHolder(Math.Max(idx, 0));
		}

		private UIHintRecipe EnsureHolder(int index)
		{
			while (index >= _recipeHolders.Count)
			{
				UIHintRecipe holder = Instantiate(recipeHolder, content, false);
				_recipeHolders.Add(holder);
				_holderInitedFor.Add(null);
			}
			return _recipeHolders[index];
		}

		private void ShowFlexibleRecipe(List<string> listIds, UIHintRecipe holder)
		{
			if (holder == null)
			{
				return;
			}
			holder.gameObject.SetActive(true);
			LevelInfo info = Info;
			if (info == null)
			{
				return;
			}
			holder.Init(info.GetDisplayConfig(listIds));
		}

		private void ShowCombinationsOnly(string strId, UIHintRecipe holder)
		{
			LevelInfo info = Info;
			if (info == null)
			{
				return;
			}
			List<List<RcDisplayConfig>> all = info.GetAllDisplayConfigInRecipe(strId, true);
			if (all == null || all.Count == 0)
			{
				return;
			}
			if (holder != null)
			{
				holder.Init(all[0]);
			}
		}

		public override void HideByBackButton()
		{
		}

		protected override void OnDoneShow()
		{
			base.OnDoneShow();
			if (PlayerPrefs.GetInt(FirstOpenDoneKey, 0) == 1)
			{
				return;
			}
			_isFirstOpenSession = true;
			if (_firstOpenRoutine != null)
			{
				StopCoroutine(_firstOpenRoutine);
			}
			_firstOpenRoutine = StartCoroutine(FirstOpenHintRoutine());
		}

		private IEnumerator FirstOpenHintRoutine()
		{
			yield return new WaitForSeconds(firstOpenHintDelay);
			_firstOpenRoutine = null;
			if (tap != null)
			{
				tap.gameObject.SetActive(true);
				Vector3 pos = tap.transform.position;
				tap.Show(new List<Vector2> { new Vector2(pos.x, pos.y) });
			}
		}

		protected override void OnBeforeHide()
		{
			base.OnBeforeHide();
			if (_firstOpenRoutine != null)
			{
				StopCoroutine(_firstOpenRoutine);
				_firstOpenRoutine = null;
			}
			if (tap != null)
			{
				tap.Hide();
			}
			if (_isFirstOpenSession)
			{
				PlayerPrefs.SetInt(FirstOpenDoneKey, 1);
				PlayerPrefs.Save();
				_isFirstOpenSession = false;
			}
		}

		protected override void OnDoneHide()
		{
			base.OnDoneHide();
			// TODO(unrecovered): the first call (FUN_04b78ef4 with arg 0) targets a static whose class is not in the stubs.
			Action onClose = _onClose;
			if (onClose != null)
			{
				_onClose = null;
				onClose();
			}
		}
	}
}
