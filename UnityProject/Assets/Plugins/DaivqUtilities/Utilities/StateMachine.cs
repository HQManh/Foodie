using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace Utilities
{

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

	private Dictionary<IState, List<Transition>> _transitions = new Dictionary<IState, List<Transition>>();

	private List<Transition> _currentTransitions = new List<Transition>();

	private List<Transition> _anyTransitions = new List<Transition>();

	private static List<Transition> EmptyTransitions = new List<Transition>();

	public IState CurrentState => null;

	public event Action<IState> stateChanged;

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
}
