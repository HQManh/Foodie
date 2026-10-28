using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using CakeOrder.Home;
using CakeOrder.Model;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.UI
{

public class UIBuildingRewardBubble : MonoBehaviour
{
	[Serializable]
	public class IconOverride
	{
		public string currencyId;

		public Sprite icon;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowAsync_003Ed__13 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public UIBuildingRewardBubble _003C_003E4__this;

		private int _003CrequestId_003E5__2;

		private UnityEngine.Awaitable<MapUpgradeConfig>.Awaiter _003C_003Eu__1;

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
	private UIMapBuildingProgress _progress;

	[SerializeField]
	private Button _btnChest;

	[Header("Bubble")]
	[Tooltip("A child of this object, placed by hand in the prefab. It rises above the card's top edge, which the scroll view's mask would cut off - so its graphics are taken out of masking instead of the bubble being moved elsewhere.")]
	[SerializeField]
	private RectTransform _bubble;

	[Header("Rewards")]
	[SerializeField]
	private RectTransform _itemContainer;

	[Tooltip("Cloned once per reward. Its first Image shows the icon and its first text the amount.")]
	[SerializeField]
	private RectTransform _itemTemplate;

	[Tooltip("Art drawn with its own white outline, per currency id. A reward with no entry here shows the currency's normal icon with the outline filter on the template switched on instead.")]
	[SerializeField]
	private IconOverride[] _iconOverrides;

	private readonly List<RectTransform> _items = new List<RectTransform>();

	private HomeSelectionControl _selection;

	private bool _isShowing;

	private int _requestId;

	private void Awake()
	{
	}

	private void OnClickChest()
	{
	}

	[AsyncStateMachine(typeof(_003CShowAsync_003Ed__13))]
	private UniTaskVoid ShowAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private bool Fill(ItemPackDataGroup rewards)
	{
		return false;
	}

	private void DrawAboveEverything()
	{
	}

	private Sprite FindIconOverride(string currencyId)
	{
		return null;
	}

	private void Hide()
	{
	}

	private void Update()
	{
	}

	private static bool TryGetPointerDown(out Vector2 screenPosition)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		screenPosition = default(Vector2);
		return false;
	}

	private void OnDisable()
	{
	}
}
}
