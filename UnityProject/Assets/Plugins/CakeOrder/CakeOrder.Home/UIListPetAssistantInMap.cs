using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

namespace CakeOrder.Home
{

public class UIListPetAssistantInMap : UIElementWithAnim
{
	[Serializable]
	public class VisualConfig
	{
		public UIItemPetAssistant.VisualConfig itemVisualConfig;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadContent_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIListPetAssistantInMap _003C_003E4__this;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__2;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadMapThumbnailAsync_003Ed__23 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIListPetAssistantInMap _003C_003E4__this;

		private UnityEngine.Awaitable<Sprite>.Awaiter _003C_003Eu__1;

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
	private Image _mapThumbnail;

	[SerializeField]
	private RectTransform _itemPetContainer;

	[SerializeField]
	private UIItemPetAssistant _prefabItem;

	[SerializeField]
	private CanvasGroup _sectionList;

	[SerializeField]
	private CanvasGroup _sectionLocked;

	private List<UIItemPetAssistant> _items = new List<UIItemPetAssistant>();

	private PetAssistantDataAccess _dataAccess;

	private AsyncOperationHandle<GameObject> _opLoadPetConfig;

	private AsyncOperationHandle<Sprite> _opLoadMapThumb;

	private VisualConfig _visualConfig;

	private bool _isShownFirstTime;

	public string MapId { get; private set; }

	public RectTransform ItemPetContainer => null;

	public event Action<PetAssistantSO, string> onInspectPetAssistant;

	public void SetUp(PetAssistantDataAccess dataAccess, VisualConfig visualConfig, string mapId)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadContent_003Ed__22))]
	public UniTask LoadContent()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadMapThumbnailAsync_003Ed__23))]
	private UniTask LoadMapThumbnailAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnSelectedPetAssistant(UIItemPetAssistant assistant)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	public void SetHighlight(string petAssistantId)
	{
	}

	private void OnDestroy()
	{
	}
}
}
