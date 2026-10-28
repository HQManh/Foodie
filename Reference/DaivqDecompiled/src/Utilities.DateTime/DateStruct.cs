using System;

namespace Utilities.DateTime;

[Serializable]
public struct DateStruct : IComparable<DateStruct>
{
	public int day;

	public int month;

	public int year;

	public static DateStruct Default => default(DateStruct);

	public System.DateTime ToDateTime()
	{
		return default(System.DateTime);
	}

	public System.DateTime ToDateTime(float timeRatio)
	{
		return default(System.DateTime);
	}

	public override string ToString()
	{
		return null;
	}

	public static DateStruct FromString(string dateStr)
	{
		return default(DateStruct);
	}

	public int CompareTo(DateStruct other)
	{
		return 0;
	}

	public static bool operator >(DateStruct operand1, DateStruct operand2)
	{
		return false;
	}

	public static bool operator <(DateStruct operand1, DateStruct operand2)
	{
		return false;
	}

	public static bool operator >=(DateStruct operand1, DateStruct operand2)
	{
		return false;
	}

	public static bool operator <=(DateStruct operand1, DateStruct operand2)
	{
		return false;
	}

	public static bool operator ==(DateStruct operand1, DateStruct operand2)
	{
		return false;
	}

	public static bool operator !=(DateStruct operand1, DateStruct operand2)
	{
		return false;
	}
}
