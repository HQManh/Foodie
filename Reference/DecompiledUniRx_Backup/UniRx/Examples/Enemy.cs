namespace UniRx.Examples
{
	public class Enemy
	{
		public IReactiveProperty<long> CurrentHp { get; private set; }

		public IReadOnlyReactiveProperty<bool> IsDead { get; private set; }

		public Enemy(int initialHp)
		{
			CurrentHp = new LongReactiveProperty(initialHp);
			IsDead = CurrentHp.Select(x => x < 1).ToReadOnlyReactiveProperty();
		}
	}
}
