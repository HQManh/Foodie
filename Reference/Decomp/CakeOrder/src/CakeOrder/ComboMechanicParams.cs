using System;

namespace CakeOrder;

[Serializable]
public class ComboMechanicParams
{
	public int initStep;

	public int numStepsToActivate;

	public float stepTimeCountdown;

	public float comboDuration;

	public int tipPercentageOnCombo;

	public bool incStepByNumRecipesOfCustomer;
}
