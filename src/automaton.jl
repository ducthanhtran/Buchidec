const State = Int64
const Label = Int64

mutable struct Automaton
    states::Int
    initStates::IntSet
    finalStates::IntSet
    alphabetSize::Int
    transitions::Dict{State, Tuple{Int,State}}

    Automaton() = new(0, IntSet(), IntSet(), 0, Dict{State, Tuple{Int,State}}())
    Automaton(states::Int) = new(states, IntSet(), IntSet(), 0, Dict{State, Tuple{Int,State}}())
    Automaton(states::Int, alphabetSize::Int) = new(states, IntSet(), IntSet(), alphabetSize, Dict{State, Tuple{Int,State}}())
end

function add_states!(aut::Automaton, numberOfNewStates::Int)
     aut.states += numberOfNewStates
end

function add_transition!(aut::Automaton, source::Int64, label::Int64, target::Int64)
    if label <= aut.alphabetSize
        #todo
    end
end
