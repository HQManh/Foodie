using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class IngredientItem : ItemToSell
	{
		[SerializeField]
		protected bool isCanInterract;

		[SerializeField]
		protected float timeInterract;

		[SerializeField]
		protected bool isHaveResultItem;

		[SerializeField]
		protected IngredientItem resultIngredient;

		[SerializeField]
		protected int resultNum;

		protected ProgressBar progressBar;

		protected bool isInterrating;

		[CompilerGenerated]
		private Action m_OnInterractEvent;

		[CompilerGenerated]
		private Action m_OnCancelInterractEvent;

		[CompilerGenerated]
		private Action m_OnInterractDoneEvent;

		[field: SerializeField]
		public EIngredienType IngredienType { get; set; }

		protected bool isHaveResultItemAndCanInterract => false;

		public float TimeInterract
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public bool IsCanInterract
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public override bool IsCanMove => false;

		public int ResultNum => 0;

		public event Action OnInterractEvent
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

		public event Action OnCancelInterractEvent
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

		public event Action OnInterractDoneEvent
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

		protected override void Editor()
		{
		}

		public virtual void OnAppear(bool isNeedMoveToNeareast = false, Action onSpawned = null)
		{
		}

		public override void OnSpawn()
		{
		}

		public override void Despawn()
		{
		}

		public void OnDespawn()
		{
		}

		public virtual void OnInterract(Action onInterractDone = null)
		{
		}

		public virtual void OnInterractDone()
		{
		}

		public virtual void OnGenerateResultIngredient()
		{
		}

		public override void OnClickDown()
		{
		}

		public virtual void OnCancelInterract()
		{
		}

		public override void OnDrop()
		{
		}
	}
}
