using System;

namespace Utilities.DateTime;

[Serializable]
public struct DateTimeSpan
{
	public DateTimeStruct fromDateTime;

	public DateTimeStruct toDateTime;

	public DateTimeSpan(DateTimeStruct fromDateTime, DateTimeStruct toDateTime)
	{
		this.fromDateTime = default(DateTimeStruct);
		this.toDateTime = default(DateTimeStruct);
	}

	public DateTimeSpan(DateStruct fromDate, TimeStruct fromTime, DateStruct toDate, TimeStruct toTime)
	{
		fromDateTime = default(DateTimeStruct);
		toDateTime = default(DateTimeStruct);
	}

	public DateTimeSpan(int fromDay, int fromMonth, int fromYear, int fromHour, int fromMinute, int fromSecond, int toDay, int toMonth, int toYear, int toHour, int toMinute, int toSecond)
	{
		fromDateTime = default(DateTimeStruct);
		toDateTime = default(DateTimeStruct);
	}

	public bool CheckIsInSpan(System.DateTime dateTime)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}
}
