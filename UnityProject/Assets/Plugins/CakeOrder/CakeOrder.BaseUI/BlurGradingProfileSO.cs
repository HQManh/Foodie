using UnityEngine;
using Utilities;

namespace CakeOrder.BaseUI
{

[CreateAssetMenu(fileName = "BlurGrading", menuName = "ScriptableObjects/CakeOrder/BlurGradingProfile")]
public class BlurGradingProfileSO : ScriptableObject
{
	[SerializeField]
	private CameraBlurSnapshot.Grading _grading;

	public CameraBlurSnapshot.Grading Grading => null;
}
}
