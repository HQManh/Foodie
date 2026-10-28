using System;
using UnityEngine;

namespace _GAME.GameUI;

public class UIIconFeature : MonoBehaviour
{
	protected Action updatedCallback;

	public virtual bool IsFeatureActive => false;

	public virtual void OnSetUp(Action newCallback)
	{
	}

	public virtual void OnUpdateData()
	{
	}

	public virtual void OnUpdateTime()
	{
	}
}
