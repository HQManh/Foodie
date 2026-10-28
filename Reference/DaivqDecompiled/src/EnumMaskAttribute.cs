using System;
using UnityEngine;

public class EnumMaskAttribute : PropertyAttribute
{
	public Type enumType;

	public int numCols;

	public bool isShowList;

	public float buttonHeight;

	public EnumMaskAttribute(Type enumType, float buttonHeight = 25f, bool isShowList = false, int numCols = 5)
	{
	}
}
