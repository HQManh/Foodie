using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public class InGameTimeCountdownControl : MonoBehaviour
{
	public BoolModifierWithRegisteredSource CountdownBlockModifier { get; private set; }

	public float TimeLimit { get; private set; }

	public void SetUp(CakeLevelRuntimeData levelBase, int timeLimit)
	{
	}
}
