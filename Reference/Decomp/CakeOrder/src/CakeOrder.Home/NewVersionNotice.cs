using Cysharp.Threading.Tasks;

namespace CakeOrder.Home;

public abstract class NewVersionNotice
{
	public abstract int Order { get; }

	public abstract string VersionLabel { get; }

	public abstract UniTask<NewVersionNoticeContent> BuildAsync(NewVersionContext context);
}
