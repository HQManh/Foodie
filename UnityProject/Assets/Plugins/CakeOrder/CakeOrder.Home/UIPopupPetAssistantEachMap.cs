using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home
{

[Obsolete]
public class UIPopupPetAssistantEachMap : UICakePopup
{
	public enum StateLoadContent
	{
		NotStart,
		Loading,
		Done
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadContent_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIPopupPetAssistantEachMap _003C_003E4__this;

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

	[Header("Section-Details")]
	[SerializeField]
	private UIPetAssistantDetails _detailsSection;

	[Header("Section-List")]
	[SerializeField]
	private RectTransform _mapInfoContainer;

	[SerializeField]
	private UIListPetAssistantInMap _prefabInfoInMap;

	[SerializeField]
	private UIListPetAssistantInMap.VisualConfig _itemVisualConfig;

	private List<UIListPetAssistantInMap> _infoInMaps = new List<UIListPetAssistantInMap>();

	private bool _isShownFirstTime;

	private string _inspectingPetId;

	[Header("Cheat")]
	[SerializeField]
	private GameObject _sectionCheat;

	[SerializeField]
	private Button _btnCheatUnlockPet;

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	public StateLoadContent StateLoad { get; private set; }

	public override void HideByBackButton()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	private void OnInspectPetAssistant(PetAssistantSO petSO, string mapId)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadContent_003Ed__19))]
	public UniTask LoadContent()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void Awake()
	{
	}

	private void OnClickCheatUnlockPet()
	{
	}
}
}
