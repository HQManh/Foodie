using System;
using UnityEngine;

public class ArrayElementNameMatchEnumAttribute : PropertyAttribute
{
	public Type enumType;

	public int startIndex;

	public int lastIndex;

	public float height;

	public ArrayElementNameMatchEnumAttribute(Type enumType, int startIndex = 0, int lastIndex = -1, float height = 20f)
	{
	}
}
