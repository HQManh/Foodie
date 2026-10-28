using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class PocketBase : ItemMovingBase
	{
		[SerializeField]
		private TextMesh countTmp;

		[SerializeField]
		private float timeToCheckTut;

		private int clickCount;

		private float holdThreshold;

		private float mouseDownTime;

		private bool isHolding;

		private bool isNeedCheckTut;

		[CompilerGenerated]
		private Action m_OnClick;

		[CompilerGenerated]
		private Action m_OnHold;

		[CompilerGenerated]
		private Action m_OnEmpty;

		private float tutCheckTimer;

		private HandTutController handTut;

		[field: SerializeField]
		public int PocketNum { get; set; }

		private bool isCanShowTut => false;

		public override bool IsCanMove => false;

		public event Action OnClick
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

		public event Action OnHold
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

		public event Action OnEmpty
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

		public override void OnSpawn()
		{
		}

		public void OnAppear(Vector3 targetPos, Action onAppeared = null)
		{
		}

		public override void Despawn()
		{
		}

		private void OnMouseDown()
		{
		}

		private void OnMouseUp()
		{
		}

		protected override void Update()
		{
		}

		public override void OnClickDown()
		{
		}

		public override void OnDrop()
		{
		}
	}
}
