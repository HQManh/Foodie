namespace Utilities;

public interface IState
{
	void Tick();

	void OnStateEnter();

	void OnStateExit();
}
