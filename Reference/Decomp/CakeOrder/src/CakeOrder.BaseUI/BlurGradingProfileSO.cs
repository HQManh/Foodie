using UnityEngine;
using Utilities;

namespace CakeOrder.BaseUI;

[CreateAssetMenu(fileName = "BlurGrading", menuName = "ScriptableObjects/CakeOrder/BlurGradingProfile")]
public class BlurGradingProfileSO : ScriptableObject
{
	[SerializeField]
	private Grading _grading;

	public Grading Grading => null;
}
