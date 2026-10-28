using System;

namespace CakeOrder.CakeOrderSubsystem;

[Serializable]
public class MechanicFeaturesConfig
{
	public enum UpgradeToolMode
	{
		None,
		ControledByLevelPath
	}

	public enum MergeMode
	{
		OnlyCenter,
		CanMergeTop
	}

	public enum DirtyPlateMode
	{
		None,
		DirtyPlateMechanic
	}

	public enum AutoStackingMode
	{
		None,
		AutoStackingIngredients
	}

	public int upgradeTool;

	public int mergeTop;

	public int dirtyPlate;

	public int autoStack;

	public int dirtyStack;

	public int rawIng;

	public UpgradeToolMode ToolUpgradeMode => UpgradeToolMode.None;

	public MergeMode MergeMechanicMode => MergeMode.OnlyCenter;

	public DirtyPlateMode DirtyPlateMechanicMode => DirtyPlateMode.None;

	public AutoStackingMode AutoStackingMechanicMode => AutoStackingMode.None;

	public bool IsAllowRawIngredientOnGrid => false;
}
