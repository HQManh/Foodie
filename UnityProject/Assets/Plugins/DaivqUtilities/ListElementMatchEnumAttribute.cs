using System;
using UnityEngine;

public class ListElementMatchEnumAttribute : PropertyAttribute
{
	public Type enumType;

	public int startIndex;

	public int lastIndex;

	public float height;

	public ListElementMatchEnumAttribute(Type enumType, int startIndex = 0, int lastIndex = -1, float height = 20f)
	{
	}
}
