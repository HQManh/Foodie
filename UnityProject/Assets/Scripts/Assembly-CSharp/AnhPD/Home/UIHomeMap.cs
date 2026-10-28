using CakeOrder;
using System;
using System.Runtime.CompilerServices;
using CakeOrder.Home;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.Home
{
	[Obsolete]
	public class UIHomeMap : UIListMap
	{
		[SerializeField]
		private RectTransform rect;

		[SerializeField]
		private RectTransform sectionRoot;

		[SerializeField]
		private UIHomeMapSection prefab;

		private UIHomeMapSection[] _sections;

		private string _selectedMapId;

		private int _selectedSectionIndex;

		private bool _isOpen = true;

		private const float DelayBetweenShowSection = 0.05f;

		[CompilerGenerated]
		private new Action<string> m_onMapSelected;

		private bool _isShownFirstTime = true;

		[Header("quick scroll button")]
		public ScrollRect scrollRect;

		public Button leftButton;

		public Button rightButton;

		public float duration = 0.5f;

		private Tween scrollTween;

		public override event Action<string> onMapSelected
		{
			[CompilerGenerated]
			add
			{
				m_onMapSelected = (Action<string>)Delegate.Combine(m_onMapSelected, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onMapSelected = (Action<string>)Delegate.Remove(m_onMapSelected, value);
			}
		}

		public void OnClickMapButton()
		{
			if (rect != null)
			{
				float target = _isOpen ? 0f : 210f;
				rect.DOSizeDelta(new Vector2(rect.sizeDelta.x, target), 0.3f).SetEase(Ease.OutCubic);
				_isOpen = !_isOpen;
			}
		}

		public override UniTask SetUp(string initSelectedMapId)
		{
			// TODO(unrecovered): builds sections from CakeOrder.SaveProfile.PlayerMapLevelProgressDataAccess and CakeOrder.DataSO.CakeOrderDatabaseSO (NumMaps, GetMapId, GetMapIndexById, IsMapUnlocked); none of these are in the stubs.
			return default;
		}

		protected override void OnBeforeShow()
		{
			// TODO(unrecovered): base UIElementAbstract.OnBeforeShow/ShowImmediate are CakeOrder.BaseUI members not in the stubs.
		}

		protected override void OnDoneShow()
		{
			// TODO(unrecovered): base UIElementAbstract.Show/OnDoneShow are CakeOrder.BaseUI members not in the stubs.
		}

		private void OnSelectedSection(UIHomeMapSection section)
		{
			if (section == null)
			{
				return;
			}
			MoveTo(CalScrollRate(section.Index));
			if (section.MapId == _selectedMapId)
			{
				return;
			}
			_selectedMapId = section.MapId;
			foreach (UIHomeMapSection s in _sections)
			{
				s.SetHighlight(false);
			}
			_selectedSectionIndex = section.Index;
			_sections[_selectedSectionIndex].SetHighlight(true);
			m_onMapSelected?.Invoke(section.MapId);
			// TODO(unrecovered): selection sound is CakeOrder.AudioManagerCakeOrder.Play(1) (no clip recovered; CakeOrder audio is not in the stubs).
		}

		private void Start()
		{
			if (leftButton != null)
			{
				leftButton.onClick.AddListener(() => MoveTo(0f));
				if (rightButton != null)
				{
					rightButton.onClick.AddListener(() => MoveTo(1f));
				}
			}
		}

		private void Update()
		{
			if (scrollRect != null)
			{
				float pos = scrollRect.horizontalNormalizedPosition;
				if (leftButton != null)
				{
					leftButton.gameObject.SetActive(0.01f < pos);
					if (rightButton != null)
					{
						rightButton.gameObject.SetActive(pos < 0.99f);
					}
				}
			}
		}

		private void MoveTo(float target)
		{
			if (scrollTween != null && scrollTween.IsActive())
			{
				scrollTween.Kill();
			}
			if (scrollRect != null)
			{
				float start = scrollRect.horizontalNormalizedPosition;
				scrollTween = DOVirtual.Float(start, target, duration, v => scrollRect.horizontalNormalizedPosition = v).SetEase(Ease.Linear);
			}
		}

		private void FocusTo(int index)
		{
			MoveTo(CalScrollRate(index));
		}

		private float CalScrollRate(int index)
		{
			int count = _sections.Length;
			float rate = 1f;
			if (index < count - 2)
			{
				rate = 0f;
				if (index > 1)
				{
					float f = (float)index / (float)(count - 1);
					rate = Mathf.Clamp01(f);
				}
			}
			return rate;
		}
	}
}
