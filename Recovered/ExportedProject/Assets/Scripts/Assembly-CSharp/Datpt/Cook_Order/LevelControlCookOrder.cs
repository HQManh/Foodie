using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
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

		private IItem.IItemMoving itemMoving;

		private IItem.IItemMoving itemMovingTake;

		private IItem.IItemIdle itemIdle;

		private Vector3 offset;

		private Vector3 point;

		[SerializeField]
		protected bool isControl;

		[SerializeField]
		protected bool isShowHighlightCanTake;

		private Vector3 mouseStartPos;

		private Vector3 mouseEndPos;

		private float minSliceDistance;

		private bool isHoldOnScreen;

		[CompilerGenerated]
		private Action m_OnItemMovingOnClickTake;

		[CompilerGenerated]
		private Action m_OnDropItemMoving;

		private IItem.IItemBase checkItem;

		private Collider2D[] colliders;

		[SerializeField]
		private List<ItemMovingBase> lstItemMovingOnScreen;

		[SerializeField]
		private List<ItemIdleBase> lstItemIdleOnScreen;

		private List<LoopRotateCircle> lstLoopRotateCircle;

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
		protected RandomItemConfig randomItemConfig;

		protected Dictionary<EIngredienType, float> dicIngreReturn;

		[SerializeField]
		protected bool isGetTargetItem;

		protected Dictionary<EIngredienType, int> dictIngredientTypeAndCountOnOrder;

		protected Dictionary<EIngredienType, int> dictCurrentIngredientTypeOnScreen;

		protected Dictionary<EIngredienType, int> dicAllIngreTarget;

		protected Dictionary<EIngredienType, int> dicIngreSpawned;

		public static LevelControlCookOrder Ins => null;

		[field: SerializeField]
		public int CustomerNumConfig { get; set; }

		[field: SerializeField]
		public bool IsRandomItemMode { get; set; }

		[field: SerializeField]
		public bool IsReturnBackToPocket { get; set; }

		[field: SerializeField]
		public bool IsReturnBackToTable { get; set; }

		[field: SerializeField]
		public bool IsReturnBackCutted { get; set; }

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
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action OnDropItemMoving
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

		protected virtual void Start()
		{
		}

		protected new virtual void Update()
		{
		}

		private bool IsSliceVertical(Vector3 start, Vector3 end)
		{
			return false;
		}

		public IItem.IItemIdle GetItemIdle()
		{
			return null;
		}

		public bool GetItemIdle(IItem.IItemMoving itemMoving)
		{
			return false;
		}

		public IItem.IItemMoving GetItemMovingCanMove()
		{
			return null;
		}

		public IItem.IItemMoving GetItemMoving(Vector3 point)
		{
			return null;
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
			return default;
		}

		public void SetItemMoving(IItem.IItemMoving itemMoving)
		{
		}

		public void CheckStep(float time)
		{
		}

		public int GetHighestLayer(IItem.IItemMoving order, Vector3 point)
		{
			return 0;
		}

		public int GetHighestNoneContactLayer(IItem.IItemMoving order, Vector3 point, int layer = 0)
		{
			return 0;
		}

		public bool IsHaveObjectOther(IItem.IItemMoving itemMoving, Vector3 point, float radius)
		{
			return false;
		}

		public bool IsHaveObjectOther<T>(IItem.IItemMoving itemMoving, Vector3 point, float radius) where T : IItem.IItemMoving
		{
			return false;
		}

		public bool IsHaveObjectOther(IItem.IItemMoving itemMoving, Vector3 point, Vector2 size, float angle)
		{
			return false;
		}

		public void BlockControl(float time)
		{
		}

		private void ActiveControl()
		{
		}

		public void SetControl(bool isControl)
		{
		}

		public void AddItemMoving(ItemMovingBase itemMoving)
		{
		}

		public void RemoveItemMovingToCheckCanTake(ItemMovingBase itemMoving)
		{
		}

		public void CheckShowCurrentHighlight()
		{
		}

		public void CheckCanTakeItemMoving(ItemMovingBase itemMoving)
		{
		}

		public ProgressBar SpawnProgressBar(Vector3 pos, Action onAppeared = null)
		{
			return null;
		}

		public KitchenTimer SpawnTimer(Vector3 pos)
		{
			return null;
		}

		public LoopRotateCircle SpawnLoopRotateCircle(Vector3 pos, Transform parent = null)
		{
			return null;
		}

		public EmojiControl SpawnEmojiControl(Vector3 pos, Transform parent = null)
		{
			return null;
		}

		public HandTutController SpawnHandTutController(Vector3 pos, Transform parent = null)
		{
			return null;
		}

		public void CheckDespawnLoopRotateCircle()
		{
		}

		private void DespawnHighlight()
		{
		}

		public bool CheckIngredientInSafeArea(Transform targetTf)
		{
			return false;
		}

		public bool CheckIngredientInSafeArea(Vector3 targetPos)
		{
			return false;
		}

		public Vector3 GetRandomPosInSafeArea()
		{
			return default;
		}

		public Vector3 GetNearestPosInSafeArea(Transform targetTf)
		{
			return default;
		}

		public Vector3 GetNearestPosInSafeArea(Vector3 targetPos)
		{
			return default;
		}

		public Vector3 GetRandomInHalfNearestSafeArea(Vector3 point)
		{
			return default;
		}

		public virtual void OnButtonBuyPocketClick()
		{
		}

		public virtual void RandomeNewIngredientNoConfig()
		{
		}

		public virtual void RandomNewCuttedIngredient()
		{
		}

		public void GenerateNewIngredient(EIngredienType type, Vector3 pos)
		{
		}

		public IngredientCutted GenerateNewIngredientCutted(EIngredienType type, Vector3 pos)
		{
			return null;
		}

		public virtual void UpdateAllIngreTarget(EIngredienType type, int value = 1)
		{
		}

		public virtual void UpdateDicIngreSpawned(EIngredienType type, int value = 1)
		{
		}

		public virtual void UpdateCurrentIngredientTypeAndCountOnOrder(EIngredienType type, int value = 1)
		{
		}

		public virtual void UpdateCurrentIngredientTypeOnScreen(EIngredienType type, int value = 1)
		{
		}

		public virtual void AddRateItemInWeightDic(EIngredienType type)
		{
		}

		public void UpdateCustomerLeftTxt()
		{
		}

		public void AddCustomerNum(int amount)
		{
		}

		public void AddItemNum(int amount)
		{
		}

		public void LevelConfigStart()
		{
		}

		private void InitDicIngreReturn()
		{
		}

		public virtual void ReturnIngreCutted(List<EIngredienType> lstIngreType)
		{
		}

		public void ReturnIngreToDic(EIngredienType ingredienType, float value = 0.5f)
		{
		}

		public virtual void RandomeNewIngredient()
		{
		}

		public void AddWeightInDicRandomConfig(EIngredienType ingredienType, float percent = 0f)
		{
		}

		public void ResetDefaultWeightInDicRandomConfig(EIngredienType ingredienType)
		{
		}

		[AsyncStateMachine(typeof(_003COnSetUpLevel_003Ed__126))]
		protected override UniTask OnSetUpLevel()
		{
			return default;
		}

		protected override void OnStartPlay()
		{
		}

		public void OnClickChangeReturnMode(bool isReturnBackToTable)
		{
		}

		public void OnClickChangeToRandomMode()
		{
		}

		protected override void OnApplyBoosterEffect(BoosterData boosterData, Action<BoosterData> onEnd)
		{
		}

		protected override void OnBoosterEffectExpired(BoosterData boosterData)
		{
		}

		public override (List<IRewardItemInfo>, List<GridEffectType>, List<IngredientSlotStatus>) GetMechanicsUsedInLevel()
		{
			return default;
		}
	}
}
