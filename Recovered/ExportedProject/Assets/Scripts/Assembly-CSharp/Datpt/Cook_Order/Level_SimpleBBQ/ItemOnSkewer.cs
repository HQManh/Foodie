using System;
using UnityEngine;
using UnityEngine.Rendering;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class ItemOnSkewer : PoolingObject
	{
		[SerializeField]
		private SpriteRenderer mainSprRdr;

		[SerializeField]
		private SpriteRenderer grilledSprRdr;

		[SerializeField]
		private GameObject skewerPieceOnItemObj;

		[SerializeField]
		private SortingGroup itemSortingGroup;

		[SerializeField]
		private Transform squareTf;

		[SerializeField]
		private float targetSquareSize;

		private string grillIdTween;

		public SpriteRenderer MainSprRdr => null;

		public GameObject SkewerPieceOnItemObj => null;

		public void Editor()
		{
		}

		public void OnAppear(Action onAppeared = null)
		{
		}

		public void SetOrderIndex(int orderIndex)
		{
		}

		public void OnGrilling(float time)
		{
		}

		public void OnCancelGrilling()
		{
		}

		public void OnResetState()
		{
		}

		public void OnSetUpSkewerEnd()
		{
		}

		public void OnSetUpSkewerStart()
		{
		}
	}
}
