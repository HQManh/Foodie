using System.Text;
using CookingGraph;
using UnityEngine;

namespace AnhPD.FoodOrder.Autoplay
{
	public sealed class CookingBotConsoleLog : ICookingBotVerboseLogListener
	{
		private readonly Object _context;

		public CookingBotConsoleLog(Object context)
		{
			_context = context;
		}

		public void OnCookingBotVerboseLog(CookingBotVerboseLog entry)
		{
			if (entry == null)
			{
				return;
			}
			StringBuilder sb = new StringBuilder(160);
			sb.Append("[CookingBot] ").Append(entry.kind); /* literal recovered by guess */
			if (!string.IsNullOrEmpty(entry.message))
			{
				sb.Append(": ").Append(entry.message);
			}
			if (entry.queueIndex >= 0)
			{
				sb.Append(" queue=").Append(entry.queueIndex);
			}
			if (!string.IsNullOrEmpty(entry.itemId))
			{
				sb.Append(" item=").Append(entry.itemId);
			}
			if (entry.score >= 0f)
			{
				sb.Append(" score=").Append(entry.score.ToString("F2"));
			}
			if (entry.randomFallback)
			{
				sb.Append(" random");
			}
			if (entry.projectedGridLoad >= 0)
			{
				sb.Append(" grid=").Append(entry.projectedGridLoad).Append('/').Append(entry.usableGridCapacity);
			}
			if (entry.activeToolProcessCount >= 0)
			{
				sb.Append(" work=").Append(entry.activeToolProcessCount).Append('+').Append(entry.activeMergeAnimationCount);
			}
			if (entry.remainingCustomerCount >= 0)
			{
				sb.Append(" left=").Append(entry.remainingCustomerCount).Append(" customers");
			}
			sb.Append(" ").Append(entry.pickingStrategy);
			if (entry.strategyMode != entry.pickingStrategy)
			{
				sb.Append(" (").Append(entry.strategyMode);
				if (entry.adaptiveStrategyPickInterval > 0)
				{
					sb.Append("/").Append(entry.adaptiveStrategyPickInterval);
				}
				sb.Append(')');
			}
			if (entry.strategySearchExhausted)
			{
				sb.Append(" [exhausted]");
			}
			else if (entry.hasRecommendedPickingStrategy && entry.recommendedPickingStrategy != entry.strategyMode)
			{
				sb.Append(" [recommend ").Append(entry.recommendedPickingStrategy).Append(']');
			}
			sb.Append(' ').Append(entry.workWaitStrategy);
			if (entry.effectiveWorkWaitStrategy != entry.workWaitStrategy)
			{
				sb.Append("->").Append(entry.effectiveWorkWaitStrategy);
			}
			sb.Append(" int=").Append(entry.intelligent.ToString("0.##")).Append("/").Append(entry.pickIntervalSeconds.ToString("0.##")).Append('s');
			if (entry.pendingPickCount > 0)
			{
				sb.Append(" pending=").Append(entry.pendingPickCount);
			}
			if (entry.revision >= 0)
			{
				sb.Append(" rev=").Append(entry.revision);
			}
			if (entry.kind != CookingBotVerboseLogKind.CommandRejected && entry.kind != CookingBotVerboseLogKind.WorkBarrierBypassed)
			{
				Debug.Log(sb.ToString(), _context);
			}
			else
			{
				Debug.LogWarning(sb.ToString(), _context);
			}
		}
	}
}
