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

		private bool _isOpen;

		private const float DelayBetweenShowSection = 0.05f;

		[CompilerGenerated]
		private new Action<string> m_onMapSelected;

		private bool _isShownFirstTime;

		[Header("quick scroll button")]
		public ScrollRect scrollRect;

		public Button leftButton;

		public Button rightButton;

		public float duration;

		private Tween scrollTween;

		public override event Action<string> onMapSelected
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void OnClickMapButton()
		{
		}

		public override UniTask SetUp(string initSelectedMapId)
		{
			return default;
		}

		protected override void OnBeforeShow()
		{
		}

		protected override void OnDoneShow()
		{
		}

		private void OnSelectedSection(UIHomeMapSection section)
		{
		}

		private void Start()
		{
		}

		private void Update()
		{
		}

		private void MoveTo(float target)
		{
		}

		private void FocusTo(int index)
		{
		}

		private float CalScrollRate(int index)
		{
			return 0f;
		}
	}
}
