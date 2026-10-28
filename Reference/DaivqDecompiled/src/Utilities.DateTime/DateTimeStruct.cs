using System;

namespace Utilities.DateTime;

[Serializable]
public struct DateTimeStruct
{
	public DateStruct date;

	public TimeStruct time;

	public DateTimeStruct(DateStruct date, TimeStruct time)
	{
		this.date = default(DateStruct);
		this.time = default(TimeStruct);
	}

	public DateTimeStruct(int day, int month, int year, int hour, int minute, int second)
	{
		date = default(DateStruct);
		time = default(TimeStruct);
	}

	public System.DateTime ToDateTime()
	{
		return default(System.DateTime);
	}

	public override string ToString()
	{
		return null;
	}
}
