using System;
using DG.Tweening;
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
		private float targetSquareSize = 0.625f;

		private string grillIdTween;

		public SpriteRenderer MainSprRdr => mainSprRdr;

		public GameObject SkewerPieceOnItemObj => skewerPieceOnItemObj;

		public void Editor()
		{
			squareTf = transform.Find("Square" /* literal recovered by guess */);
			itemSortingGroup = GetComponent<SortingGroup>();
			SpriteRenderer[] renderers = GetComponentsInChildren<SpriteRenderer>(true);
			mainSprRdr = renderers[0];
			skewerPieceOnItemObj = renderers[1].gameObject;
			grilledSprRdr = renderers[2];
			mainSprRdr.SetAlpha(0f);
			grilledSprRdr.SetAlpha(0f);
			if (skewerPieceOnItemObj != null)
			{
				skewerPieceOnItemObj.SetActive(false);
			}
		}

		public void OnAppear(Action onAppeared = null)
		{
			OnSetUpSkewerStart();
			// TODO(unrecovered): transform.localScale, transform.rotation and the squareTf DOScale end value are read from static pose vectors (DAT_0918cbd0 +0xb8, DAT_091898c0 +0xb8) that are not in the stubs; onAppeared is invoked from the scale tween's OnComplete.
		}

		public void SetOrderIndex(int orderIndex)
		{
			itemSortingGroup.sortingOrder = orderIndex;
		}

		public void OnGrilling(float time)
		{
			Tween fadeMain = mainSprRdr.DoFadeSpriteExt(0f, time);
			fadeMain.SetId(grillIdTween + gameObject.GetInstanceID().ToString());
			Tween fadeGrilled = grilledSprRdr.DoFadeSpriteExt(1f, time);
			fadeGrilled.SetId(grillIdTween + gameObject.GetInstanceID().ToString());
		}

		public void OnCancelGrilling()
		{
			DOTween.Kill(grillIdTween + gameObject.GetInstanceID().ToString());
		}

		public void OnResetState()
		{
			mainSprRdr.SetAlpha(1f);
			grilledSprRdr.SetAlpha(0f);
		}

		public void OnSetUpSkewerEnd()
		{
			mainSprRdr.SetAlpha(0f);
			grilledSprRdr.SetAlpha(1f);
			if (skewerPieceOnItemObj != null)
			{
				skewerPieceOnItemObj.SetActive(true);
			}
		}

		public void OnSetUpSkewerStart()
		{
			mainSprRdr.SetAlpha(1f);
			grilledSprRdr.SetAlpha(0f);
			if (skewerPieceOnItemObj != null)
			{
				skewerPieceOnItemObj.SetActive(true);
			}
		}
	}
}
