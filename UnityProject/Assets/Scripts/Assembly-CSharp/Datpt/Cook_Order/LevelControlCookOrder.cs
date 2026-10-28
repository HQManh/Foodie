using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using CakeOrder;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class LevelControlCookOrder : LevelBaseCakeOrderAbstract
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003COnSetUpLevel_003Ed__126 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			private UniTask.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
				// TODO(unrecovered): state machine body depends on the OnSetUpLevel slot calls, which are not recovered (see OnSetUpLevel).
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		private IItem.IItemMoving itemMoving;

		private IItem.IItemMoving itemMovingTake;

		private IItem.IItemIdle itemIdle;

		private Vector3 offset;

		private Vector3 point;

		[SerializeField]
		protected bool isControl = true;

		[SerializeField]
		protected bool isShowHighlightCanTake = true;

		private Vector3 mouseStartPos;

		private Vector3 mouseEndPos;

		private float minSliceDistance = 100f;

		private bool isHoldOnScreen;

		[CompilerGenerated]
		private Action m_OnItemMovingOnClickTake;

		[CompilerGenerated]
		private Action m_OnDropItemMoving;

		private IItem.IItemBase checkItem;

		private Collider2D[] colliders = new Collider2D[20];

		[SerializeField]
		private List<ItemMovingBase> lstItemMovingOnScreen;

		[SerializeField]
		private List<ItemIdleBase> lstItemIdleOnScreen;

		private List<LoopRotateCircle> lstLoopRotateCircle = new List<LoopRotateCircle>();

		[SerializeField]
		private List<SafeAreaIngredient> lstSafeAreaOfIngredients;

		[SerializeField]
		protected PocketRandomItem pocketRandomItem;

		[SerializeField]
		protected List<IngredientData> lstIngredients;

		[SerializeField]
		protected List<IngredientCuttedData> lstIngredientCutteds;

		[SerializeField]
		private GameObject uiWin;

		[SerializeField]
		protected TMP_Text customerLeftTxt;

		[SerializeField]
		protected RandomItemConfig randomItemConfig = new RandomItemConfig();

		protected Dictionary<EIngredienType, float> dicIngreReturn = new Dictionary<EIngredienType, float>();

		[SerializeField]
		protected bool isGetTargetItem;

		protected Dictionary<EIngredienType, int> dictIngredientTypeAndCountOnOrder = new Dictionary<EIngredienType, int>();

		protected Dictionary<EIngredienType, int> dictCurrentIngredientTypeOnScreen = new Dictionary<EIngredienType, int>();

		protected Dictionary<EIngredienType, int> dicAllIngreTarget = new Dictionary<EIngredienType, int>();

		protected Dictionary<EIngredienType, int> dicIngreSpawned = new Dictionary<EIngredienType, int>();

		public static LevelControlCookOrder Ins => null;

		[field: SerializeField]
		public int CustomerNumConfig { get; set; } = 10;

		[field: SerializeField]
		public bool IsRandomItemMode { get; set; } = true;

		[field: SerializeField]
		public bool IsReturnBackToPocket { get; set; }

		[field: SerializeField]
		public bool IsReturnBackToTable { get; set; }

		[field: SerializeField]
		public bool IsReturnBackCutted { get; set; } = true;

		public int CountItemInPocket { get; set; }

		public int CurrentOrderIndex { get; set; }

		[field: SerializeField]
		public bool IsHaveListItemHardConfig { get; private set; }

		public override ISpawnControl SpawnControl => null;

		public event Action OnItemMovingOnClickTake
		{
			[CompilerGenerated]
			add
			{
				Action action = m_OnItemMovingOnClickTake;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnItemMovingOnClickTake, (Action)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action action = m_OnItemMovingOnClickTake;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnItemMovingOnClickTake, (Action)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		public event Action OnDropItemMoving
		{
			[CompilerGenerated]
			add
			{
				Action action = m_OnDropItemMoving;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnDropItemMoving, (Action)Delegate.Combine(action2, value), action2);
				}
				while (action != action2);
			}
			[CompilerGenerated]
			remove
			{
				Action action = m_OnDropItemMoving;
				Action action2;
				do
				{
					action2 = action;
					action = Interlocked.CompareExchange(ref m_OnDropItemMoving, (Action)Delegate.Remove(action2, value), action2);
				}
				while (action != action2);
			}
		}

		protected virtual void Start()
		{
			randomItemConfig.InitDicWeightItem(lstIngredients);
			InitDicIngreReturn();
			UpdateCustomerLeftTxt();
		}

		protected new virtual void Update()
		{
			// Rebuilt from the decompiled code. Interface slots were resolved from the IL2CPP metadata:
			// IItemBase 5 = OnClickDown, 3 = OnTake, 7 = OnSliceVertical; IItemMoving 0 = TF, 4 = OnClickTake, 5 = OnDrop.
			// The flag read at +0x100 is taken to be isControl, and the delegates at +0x128 / +0x130 to be
			// OnItemMovingOnClickTake / OnDropItemMoving (inferred from the field order and names; offsets are not verified).
			if (!IsAllowInteract || !isControl)
			{
				return;
			}
			if (Input.GetMouseButtonDown(0))
			{
				isHoldOnScreen = true;
				mouseStartPos = Input.mousePosition;
				itemMoving = GetItemMovingCanMove();
				if (itemMoving == null)
				{
					IItem.IItemIdle idle = GetItemIdle();
					if (idle != null)
					{
						idle.OnClickDown();
					}
				}
				else
				{
					SetItemMoving(itemMoving);
					m_OnItemMovingOnClickTake?.Invoke();
				}
			}
			if (Input.GetMouseButton(0))
			{
				if (itemMoving == null)
				{
					return;
				}
				itemMoving.TF.position = GetPoint() + offset;
			}
			if (!Input.GetMouseButtonUp(0))
			{
				return;
			}
			isHoldOnScreen = false;
			mouseEndPos = Input.mousePosition;
			if (itemMoving == null)
			{
				return;
			}
			if (IsSliceVertical(mouseStartPos, mouseEndPos))
			{
				itemMoving.OnSliceVertical();
				IItem.IItemIdle sliced = GetItemIdle();
				if (sliced != null)
				{
					sliced.OnSliceVertical();
				}
			}
			itemMovingTake = GetItemMoving(itemMoving.TF.position);
			if (itemMovingTake != null && itemMovingTake.OnTake(itemMoving))
			{
				itemMoving.OnClickTake();
			}
			else if (GetItemIdle(itemMoving))
			{
				itemMoving.OnClickTake();
				m_OnDropItemMoving?.Invoke();
				itemMoving = null;
				return;
			}
			else
			{
				itemMoving.OnDrop();
			}
			SetItemMoving(null);
			m_OnDropItemMoving?.Invoke();
			itemMoving = null;
		}

		private bool IsSliceVertical(Vector3 start, Vector3 end)
		{
			return Mathf.Abs(start.x - end.x) < Mathf.Abs(start.y - end.y) && Mathf.Abs(start.y - end.y) > minSliceDistance;
		}

		// The four item queries below are rebuilt from the decompiled code. Interface slots were resolved from the IL2CPP metadata:
		// IItemMoving 0 = TF, 1 = IsCanMove; IItemBase 3 = OnTake, 10 = OrderLayer.
		// The raycast direction is a static Vector2 in the original; Vector2.zero (a point query) is assumed. The collider
		// component types are assumed to be the interfaces IItemIdle and IItemMoving. Neither is verified.
		public IItem.IItemIdle GetItemIdle()
		{
			RaycastHit2D[] hits = Physics2D.RaycastAll(GetPoint(), Vector2.zero);
			foreach (RaycastHit2D hit in hits)
			{
				IItem.IItemIdle idle = hit.collider.GetComponent<IItem.IItemIdle>();
				if (idle != null)
				{
					return idle;
				}
			}
			return null;
		}

		public bool GetItemIdle(IItem.IItemMoving itemMoving)
		{
			RaycastHit2D[] hits = Physics2D.RaycastAll(itemMoving.TF.position, Vector2.zero);
			foreach (RaycastHit2D hit in hits)
			{
				IItem.IItemIdle idle = hit.collider.GetComponent<IItem.IItemIdle>();
				if (idle != null && idle.OnTake(itemMoving))
				{
					return true;
				}
			}
			return false;
		}

		public IItem.IItemMoving GetItemMovingCanMove()
		{
			IItem.IItemMoving best = null;
			RaycastHit2D[] hits = Physics2D.RaycastAll(GetPoint(), Vector2.zero);
			foreach (RaycastHit2D hit in hits)
			{
				IItem.IItemMoving candidate = hit.collider.GetComponent<IItem.IItemMoving>();
				if (candidate != null && candidate != itemMoving && candidate.IsCanMove && (best == null || candidate.OrderLayer > best.OrderLayer))
				{
					best = candidate;
				}
			}
			return best;
		}

		public IItem.IItemMoving GetItemMoving(Vector3 point)
		{
			IItem.IItemMoving best = null;
			RaycastHit2D[] hits = Physics2D.RaycastAll(point, Vector2.zero);
			foreach (RaycastHit2D hit in hits)
			{
				IItem.IItemMoving candidate = hit.collider.GetComponent<IItem.IItemMoving>();
				if (candidate != null && candidate != itemMoving && (best == null || candidate.OrderLayer > best.OrderLayer))
				{
					best = candidate;
				}
			}
			return best;
		}

		public T IsHaveObject<T>(Vector3 point) where T : Component
		{
			return null;
		}

		public bool IsHaveObject<T>(Vector3 point, out T t) where T : Component
		{
			t = null;
			return false;
		}

		public Vector3 GetPoint()
		{
			Camera main = Camera.main;
			Vector3 world = main.ScreenToWorldPoint(Input.mousePosition);
			point = new Vector3(world.x, world.y, 0f);
			return point;
		}

		public void SetItemMoving(IItem.IItemMoving itemMoving)
		{
			this.itemMoving = itemMoving;
			if (itemMoving == null)
			{
				return;
			}
			// IItemMoving slot 0 is TF; the final tail call is IItemBase slot 5 (OnClickDown), both resolved from the IL2CPP metadata.
			// The decompiled vector math is garbled; offset = item position - pointer position (z kept as the item's z, since GetPoint() has z = 0) is inferred.
			Vector3 position = itemMoving.TF.position;
			Vector3 pointer = GetPoint();
			offset = new Vector3(position.x - pointer.x, position.y - pointer.y, position.z);
			itemMoving.OnClickDown();
		}

		public void CheckStep(float time)
		{
			// The method name is the string literal "CheckStep" (decoded from the metadata): the method re-invokes itself after the delay.
			CancelInvoke(nameof(CheckStep));
			Invoke(nameof(CheckStep), time);
		}

		public int GetHighestLayer(IItem.IItemMoving order, Vector3 point)
		{
			// IItemBase slot 10 is OrderLayer. Each hit is stored in the checkItem field, as in the original.
			// The raycast direction (Vector2.zero) and the collider component type (IItemBase) are assumed, not verified.
			int highest = 0;
			RaycastHit2D[] hits = Physics2D.RaycastAll(point, Vector2.zero);
			foreach (RaycastHit2D hit in hits)
			{
				checkItem = hit.collider.GetComponent<IItem.IItemBase>();
				if (checkItem != null && (object)checkItem != (object)order && highest < checkItem.OrderLayer)
				{
					highest = checkItem.OrderLayer;
				}
			}
			return highest;
		}

		public int GetHighestNoneContactLayer(IItem.IItemMoving order, Vector3 point, int layer = 0)
		{
			// TODO(unrecovered): raycast loop comparing layers through IL2CPP class data and interface slots (not in stubs).
			return 0;
		}

		public bool IsHaveObjectOther(IItem.IItemMoving itemMoving, Vector3 point, float radius)
		{
			// Rebuilt from the decompiled code. The collider component type (IItemMoving) is assumed from the type reference used.
			int count = Physics2D.OverlapCircleNonAlloc(point, radius, colliders);
			for (int i = 0; i < count; i++)
			{
				checkItem = colliders[i].GetComponent<IItem.IItemMoving>();
				if (checkItem != null && (object)checkItem != (object)itemMoving)
				{
					// TODO(unrecovered): the original also calls Debug.LogError with colliders[i].name and the point; the format string is not recovered.
					return true;
				}
			}
			return false;
		}

		public bool IsHaveObjectOther<T>(IItem.IItemMoving itemMoving, Vector3 point, float radius) where T : IItem.IItemMoving
		{
			return false;
		}

		public bool IsHaveObjectOther(IItem.IItemMoving itemMoving, Vector3 point, Vector2 size, float angle)
		{
			// Rebuilt from the decompiled code. The collider component type (IItemMoving) is assumed from the type reference used.
			int count = Physics2D.OverlapBoxNonAlloc(point, size, angle, colliders);
			for (int i = 0; i < count; i++)
			{
				checkItem = colliders[i].GetComponent<IItem.IItemMoving>();
				if (checkItem != null && (object)checkItem != (object)itemMoving)
				{
					return true;
				}
			}
			return false;
		}

		public void BlockControl(float time)
		{
			CancelInvoke(nameof(ActiveControl));
			isControl = false;
			// method name recovered by inference: ActiveControl re-enables control after the block
			Invoke(nameof(ActiveControl), time);
		}

		private void ActiveControl()
		{
			itemMoving = null;
			isControl = true;
		}

		public void SetControl(bool isControl)
		{
			itemMoving = null;
			this.isControl = isControl;
		}

		public void CheckShowCurrentHighlight()
		{
			// TODO(unrecovered): the type check against DAT_091871d0 (+0x130 depth check) identifies a class not in the stubs.
		}

		// Rebuilt from the decompiled code: adds to the same list field (+0x148) unless it is already there.
		public void AddItemMoving(ItemMovingBase itemMoving)
		{
			if (!lstItemMovingOnScreen.Contains(itemMoving))
			{
				lstItemMovingOnScreen.Add(itemMoving);
			}
		}

		// Rebuilt from the decompiled code: Contains then Remove on a list field (+0x148). Taken to be lstItemMovingOnScreen (inferred; the offset is not verified).
		public void RemoveItemMovingToCheckCanTake(ItemMovingBase itemMoving)
		{
			if (lstItemMovingOnScreen.Contains(itemMoving))
			{
				lstItemMovingOnScreen.Remove(itemMoving);
			}
		}

		public void CheckCanTakeItemMoving(ItemMovingBase itemMoving)
		{
			// Slots resolved from the IL2CPP metadata: 0x458 on ItemMovingBase is CheckCanTake, 0x2e8 on ItemIdleBase is CheckCanTake,
			// and 0x308 / 0x268 are each class's OnTakeTF getter.
			// The flag read at +0x101 is taken to be isShowHighlightCanTake (inferred from the name; the offset is not verified).
			if (!isShowHighlightCanTake)
			{
				return;
			}
			foreach (ItemMovingBase moving in lstItemMovingOnScreen)
			{
				if (moving.CheckCanTake(itemMoving))
				{
					SpawnLoopRotateCircle(moving.OnTakeTF.position, moving.transform);
				}
			}
			foreach (ItemIdleBase idle in lstItemIdleOnScreen)
			{
				if (idle.CheckCanTake(itemMoving))
				{
					SpawnLoopRotateCircle(idle.OnTakeTF.position, idle.transform);
				}
			}
		}

		public ProgressBar SpawnProgressBar(Vector3 pos, Action onAppeared = null)
		{
			return Pooler.Instance.SpawnProgressBar(pos, onAppeared);
		}

		public KitchenTimer SpawnTimer(Vector3 pos)
		{
			return Pooler.Instance.SpawnTimer(pos);
		}

		public LoopRotateCircle SpawnLoopRotateCircle(Vector3 pos, Transform parent = null)
		{
			LoopRotateCircle circle = Pooler.Instance.SpawnLoopRotateCircle(pos, parent);
			if (!lstLoopRotateCircle.Contains(circle))
			{
				lstLoopRotateCircle.Add(circle);
			}
			return circle;
		}

		public EmojiControl SpawnEmojiControl(Vector3 pos, Transform parent = null)
		{
			return Pooler.Instance.SpawnEmojiControl(pos, parent);
		}

		public HandTutController SpawnHandTutController(Vector3 pos, Transform parent = null)
		{
			return Pooler.Instance.SpawnHandTutController(pos, parent);
		}

		public void CheckDespawnLoopRotateCircle()
		{
			// Slot 0x188 on LoopRotateCircle resolves to PoolingObject.Despawn (vtable index 5, from the IL2CPP metadata).
			foreach (LoopRotateCircle circle in lstLoopRotateCircle)
			{
				circle.Despawn();
			}
			CheckShowCurrentHighlight();
		}

		public void DespawnHighlight()
		{
			// Same body as CheckDespawnLoopRotateCircle: the decompiler folded the two functions into one.
			foreach (LoopRotateCircle circle in lstLoopRotateCircle)
			{
				circle.Despawn();
			}
			CheckShowCurrentHighlight();
		}

		public bool CheckIngredientInSafeArea(Transform targetTf)
		{
			return CookOrderHelper2D.Contains(lstSafeAreaOfIngredients, (Vector2)targetTf.position);
		}

		public bool CheckIngredientInSafeArea(Vector3 targetPos)
		{
			return CookOrderHelper2D.Contains(lstSafeAreaOfIngredients, (Vector2)targetPos);
		}

		public Vector3 GetRandomPosInSafeArea()
		{
			return CookOrderHelper2D.RandomPosition(lstSafeAreaOfIngredients);
		}

		public Vector3 GetNearestPosInSafeArea(Transform targetTf)
		{
			return CookOrderHelper2D.ClosestPoint(lstSafeAreaOfIngredients, (Vector2)targetTf.position);
		}

		public Vector3 GetNearestPosInSafeArea(Vector3 targetPos)
		{
			return CookOrderHelper2D.ClosestPoint(lstSafeAreaOfIngredients, (Vector2)targetPos);
		}

		public Vector3 GetRandomInHalfNearestSafeArea(Vector3 point)
		{
			return CookOrderHelper2D.RandomPositionInHalfNearest(lstSafeAreaOfIngredients, (Vector2)point);
		}

		public virtual void OnButtonBuyPocketClick()
		{
			if (!IsRandomItemMode)
			{
				if (CountItemInPocket < 1)
				{
					return;
				}
				pocketRandomItem.AddPocketNum(-1);
			}
			// Slot 0x388 on this resolves to RandomeNewIngredient (vtable index 37, from the IL2CPP metadata).
			RandomeNewIngredient();
			// TODO(unrecovered): the original then calls SoundControl.PlayFX with enum value 9; the enum type is not recovered.
		}

		public virtual void RandomeNewIngredientNoConfig()
		{
			EIngredienType type = randomItemConfig.RandomItemInWeightDic();
			Camera main = Camera.main;
			Vector3 pos = main.ScreenToWorldPoint(Input.mousePosition);
			GenerateNewIngredient(type, pos);
		}

		public virtual void RandomNewCuttedIngredient()
		{
			EIngredienType type = randomItemConfig.RandomItemInWeightDic();
			Camera main = Camera.main;
			Vector3 pos = main.ScreenToWorldPoint(Input.mousePosition);
			GenerateNewIngredientCutted(type, pos);
		}

		public void GenerateNewIngredient(EIngredienType type, Vector3 pos)
		{
			// TODO(unrecovered): loops lstIngredients to the matching entry, then spawns its IngredientItem through an unnamed helper (FUN_04c384b8) and an IL2CPP slot (0x488); not in the stubs.
		}

		public IngredientCutted GenerateNewIngredientCutted(EIngredienType type, Vector3 pos)
		{
			// TODO(unrecovered): loops lstIngredientCutteds to the matching entry, then spawns through an unnamed helper (FUN_04c384b8) and an IL2CPP slot (0x488); not in the stubs.
			return null;
		}

		public virtual void UpdateAllIngreTarget(EIngredienType type, int value = 1)
		{
			dicAllIngreTarget.AddToDictionary(type, value);
		}

		public virtual void UpdateDicIngreSpawned(EIngredienType type, int value = 1)
		{
			dicIngreSpawned.AddToDictionary(type, value);
		}

		public virtual void UpdateCurrentIngredientTypeAndCountOnOrder(EIngredienType type, int value = 1)
		{
			dictIngredientTypeAndCountOnOrder.AddToDictionary(type, value);
		}

		public virtual void UpdateCurrentIngredientTypeOnScreen(EIngredienType type, int value = 1)
		{
			dictCurrentIngredientTypeOnScreen.AddToDictionary(type, value);
		}

		public virtual void AddRateItemInWeightDic(EIngredienType type)
		{
			if (isGetTargetItem)
			{
				return;
			}
			AddWeightInDicRandomConfig(type, 1f);
		}

		public void UpdateCustomerLeftTxt()
		{
			// literal recovered by guess: display format for the remaining-customer label
			string text = string.Format("{0}" /* literal recovered by guess */, CustomerNumConfig + 1);
			if (customerLeftTxt != null)
			{
				customerLeftTxt.text = text;
			}
		}

		public void AddCustomerNum(int amount)
		{
			CustomerNumConfig += amount;
			// TODO(unrecovered): the pseudocode also logs the new count through a DebugCustom helper (FUN_03f5c394 and a static string); the helper is not in the stubs.
			if (CustomerNumConfig < 0)
			{
				uiWin.SetActive(true);
			}
			UpdateCustomerLeftTxt();
		}

		public void AddItemNum(int amount)
		{
			// argument forwarded to PocketRandomItem.AddPocketNum; the pseudocode call shows no argument
			pocketRandomItem.AddPocketNum(amount);
		}

		public void LevelConfigStart()
		{
			randomItemConfig.InitDicWeightItem(lstIngredients);
			InitDicIngreReturn();
			UpdateCustomerLeftTxt();
		}

		private void InitDicIngreReturn()
		{
			foreach (IngredientData data in lstIngredients)
			{
				dicIngreReturn[data.type] = 0f;
			}
		}

		public virtual void ReturnIngreCutted(List<EIngredienType> lstIngreType)
		{
			// TODO(unrecovered): walks lstIngredientCutteds and the cutted-item lists through IL2CPP enumerator helpers and calls GenerateNewIngredientCutted via an unrecovered list; the enumerator-level logic is not in the stubs.
		}

		public void ReturnIngreToDic(EIngredienType ingredienType, float value = 0.5f)
		{
			if (!dicIngreReturn.ContainsKey(ingredienType))
			{
				return;
			}
			if (IsRandomItemMode)
			{
				return;
			}
			dicIngreReturn[ingredienType] = dicIngreReturn[ingredienType] + value;
			if (dicIngreReturn[ingredienType] < 1f)
			{
				return;
			}
			dicIngreReturn[ingredienType] = 0f;
			if (!IsReturnBackToTable)
			{
				if (!IsReturnBackToPocket)
				{
					return;
				}
				AddWeightInDicRandomConfig(ingredienType, 0f);
				AddItemNum(1);
				return;
			}
			Camera main = Camera.main;
			Vector3 pos = main.ScreenToWorldPoint(Input.mousePosition);
			GenerateNewIngredient(ingredienType, pos);
		}

		public virtual void RandomeNewIngredient()
		{
			// The decompiled body is a bare tail call to slot 0x308, which resolves to RandomeNewIngredientNoConfig (vtable index 29).
			RandomeNewIngredientNoConfig();
		}

		public void AddWeightInDicRandomConfig(EIngredienType ingredienType, float percent = 0f)
		{
			// TODO(unrecovered): when percent <= 0 the weight is derived from a count read from RandomItemConfig's internal dictionary (+0x10), whose field is not in the stubs.
		}

		public void ResetDefaultWeightInDicRandomConfig(EIngredienType ingredienType)
		{
			randomItemConfig.ResetDefaultWeight(ingredienType);
		}

		[AsyncStateMachine(typeof(_003COnSetUpLevel_003Ed__126))]
		protected override UniTask OnSetUpLevel()
		{
			// TODO(unrecovered): the async state machine awaits a UniTask.Delay and then calls base-level virtual slots (0x138 / 0x2 index on IL2CPP interface tables) whose targets are not in the stubs.
			return default;
		}

		protected override void OnStartPlay()
		{
		}

		public void OnClickChangeReturnMode(bool isReturnBackToTable)
		{
			IsReturnBackToTable = isReturnBackToTable;
			IsReturnBackToPocket = !isReturnBackToTable;
		}

		public void OnClickChangeToRandomMode()
		{
			IsReturnBackToTable = false;
			IsRandomItemMode = true;
			IsReturnBackToPocket = false;
		}

		protected override void OnApplyBoosterEffect(BoosterData boosterData, Action<BoosterData> onEnd)
		{
			onEnd?.Invoke(boosterData);
		}

		protected override void OnBoosterEffectExpired(BoosterData boosterData)
		{
		}

		public override (List<IRewardItemInfo>, List<GridEffectType>, List<IngredientSlotStatus>) GetMechanicsUsedInLevel()
		{
			throw new NotImplementedException();
		}
	}
}
