using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StuckDebugOverlay : MonoBehaviour
	{
		private string _report;

		private bool _copied;

		private static GUIStyle _bigButton;

		private const float BannerClearance = 130f;

		private void OnGUI()
		{
			// TODO(unrecovered): the banner layout uses hand-copied GUI matrix and Rect stack structs plus static style caches on an unmapped static holder; the exact layout is not recoverable from the stubs.
		}

		private void TakeReport()
		{
			_copied = false;
			string report = PieceLedger.BuildReport();
			if (MessyController.Ins != null)
			{
				_report = report + "\n" + MessyController.Ins.BuildStuckReport(); /* literal recovered by guess */
				Debug.Log(_report, this);
			}
		}
	}
}
