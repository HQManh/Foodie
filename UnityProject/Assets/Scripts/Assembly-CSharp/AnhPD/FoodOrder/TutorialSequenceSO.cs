using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[CreateAssetMenu(fileName = "TutorialSequence", menuName = "CakeOrder/Tutorial/Sequence")]
	public class TutorialSequenceSO : ScriptableObject
	{
		[Tooltip("Ten dinh danh de TutorialManager tim trong list sequences cua no")]
		public string tutId;

		[SerializeReference]
		public List<TutorialStep> steps = new List<TutorialStep>();
	}
}
