using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace Utilities;

public class StateMachine
{
	private class Transition
	{
		public Func<bool> Condition { get; }

		public IState To { get; }

		public Transition(IState to, Func<bool> condition)
		{
		}
	}

	private IState _currentState;

	private Dictionary<IState, List<Transition>> _transitions;

	private List<Transition> _currentTransitions;

	private List<Transition> _anyTransitions;

	private static List<Transition> EmptyTransitions;

	public IState CurrentState => null;

	public event Action<IState> stateChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public void Tick()
	{
	}

	public void SetState(IState state)
	{
	}

	public void AddTransition(IState from, IState to, Func<bool> predicate)
	{
	}

	public void AddAnyTransition(IState state, Func<bool> predicate)
	{
	}

	private Transition GetTransition()
	{
		return null;
	}
}
