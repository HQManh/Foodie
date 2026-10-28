namespace CookingGraph;

public interface ICookingBotCommandSink
{
	bool TryPick(BotPickCommand command);
}
