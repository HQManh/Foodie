namespace _GAME.Profile;

public interface IProfilePopupInstance
{
	string TargetUserId { get; }

	int RouterGeneration { get; }

	void Supersede();
}
