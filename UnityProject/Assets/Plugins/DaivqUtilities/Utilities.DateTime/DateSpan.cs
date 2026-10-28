using System;

namespace Utilities.DateTime
{

[Serializable]
public struct DateSpan
{
	public DateStruct fromDate;

	public DateStruct toDate;

	public static DateSpan Default => default(DateSpan);

	public DateSpan(DateStruct fromDate, DateStruct toDate)
	{
		this.fromDate = default(DateStruct);
		this.toDate = default(DateStruct);
	}

	public DateSpan(int fromDay, int fromMonth, int fromYear, int toDay, int toMonth, int toYear)
	{
		fromDate = default(DateStruct);
		toDate = default(DateStruct);
	}

	public override string ToString()
	{
		return null;
	}

	public TimeSpan TotalTimeSpan()
	{
		return default(TimeSpan);
	}

	public bool CheckIsInSpan(System.DateTime dateTime)
	{
		return false;
	}

	public bool CheckIsPassed(System.DateTime dateTime)
	{
		return false;
	}

	public bool CheckIsStarted(System.DateTime dateTime)
	{
		return false;
	}

	public TimeSpan GetTimeLeft(System.DateTime dateTime)
	{
		return default(TimeSpan);
	}

	public TimeSpan GetTimeToStart(System.DateTime dateTime)
	{
		return default(TimeSpan);
	}
}
}
