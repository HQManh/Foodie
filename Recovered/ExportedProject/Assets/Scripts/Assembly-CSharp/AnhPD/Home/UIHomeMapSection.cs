using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.SaveProfile;
using ChocDino.UIFX;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace AnhPD.Home
{
	[Obsolete]
	public class UIHomeMapSection : UIElementWithAnim
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CLoadMapThumbnailAsync_003Ed__31 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public UIHomeMapSection _003C_003E4__this;

			private UniTask<Sprite>.Awaiter _003C_003Eu__1;

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

		[SerializeField]
		private Image icon;

		[SerializeField]
		private Image lineL;

		[SerializeField]
		private Image lineR;

		[SerializeField]
		private OutlineFilter outline;

		[SerializeField]
		private OutlineFilter outlineSelected;

		[SerializeField]
		private GameObject mLock;

		[SerializeField]
		private TextMeshProUGUI text;

		[SerializeField]
		private Button button;

		private readonly Color _lockColor;

		private PlayerMapLevelProgressDataAccess _dataAccess;

		private int _mapMaxBuildingLevel;

		[CompilerGenerated]
		private Action<UIHomeMapSection> m_onSelected;

		private AsyncOperationHandle<Sprite> _opLoadMapThumb;

		private Coroutine _coroutineUpdateUpgradePercent;

		private bool _isShownFirstTime;

		public int Index { get; private set; }

		public string MapId { get; private set; }

		public event Action<UIHomeMapSection> onSelected
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

		private int GetBuildingPercent()
		{
			return 0;
		}

		private int CountBuildingItemsBought()
		{
			return 0;
		}

		private void Awake()
		{
		}

		public void Setup(PlayerMapLevelProgressDataAccess dataAccess, int index, bool isInitUnlocked, int mapMaxBuildingLevel)
		{
		}

		private void OnMapBuildingUnlocked(string mapId)
		{
		}

		private void OnHomeBuildingItemBought(string mapId, string sectionId)
		{
		}

		[AsyncStateMachine(typeof(_003CLoadMapThumbnailAsync_003Ed__31))]
		private UniTask LoadMapThumbnailAsync()
		{
			return default;
		}

		protected override void OnBeforeShow()
		{
		}

		protected override void OnDoneShow()
		{
		}

		private void OnDisable()
		{
		}

		public void SetHighlight(bool isHighlight)
		{
		}

		private void Unlock()
		{
		}

		private void Lock()
		{
		}

		private void OnDestroy()
		{
		}
	}
}
