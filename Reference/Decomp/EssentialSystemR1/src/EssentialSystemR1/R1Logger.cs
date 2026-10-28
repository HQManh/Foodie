using System;

namespace EssentialSystemR1;

public class R1Logger
{
	public delegate string LazyStringEvaluate(object[] args);

	public static bool GlobalEnableLog;

	public string prefix;

	public bool enableLog;

	public string colorCode;

	public R1Logger()
	{
	}

	public R1Logger(string prefix, string colorCode = "#ffffff")
	{
	}

	public void Log(string message)
	{
	}

	public void Log(LazyStringEvaluate factory, params object[] args)
	{
	}

	public void Log(string prefix, LazyStringEvaluate factory, params object[] args)
	{
	}

	public void LogFormat(string message, params object[] args)
	{
	}

	public void LogWarning(string message)
	{
	}

	public void LogWarning(LazyStringEvaluate factory, params object[] args)
	{
	}

	public void LogWarning(string prefix, LazyStringEvaluate factory, params object[] args)
	{
	}

	public void LogWarningFormat(string message, params object[] args)
	{
	}

	public void LogError(string message)
	{
	}

	public void LogError(LazyStringEvaluate factory, params object[] args)
	{
	}

	public void LogError(string prefix, LazyStringEvaluate factory, params object[] args)
	{
	}

	public void LogErrorFormat(string message, params object[] args)
	{
	}

	public void LogException(Exception ex)
	{
	}
}
