const State = Int
const Label = Int

mutable struct Automaton
    states::Int
    initStates::IntSet
    finalStates::IntSet
    alphabetSize::Int
    transitions::Dict{State, Set{Tuple{Int,State}}}
end

Automaton() = Automaton(0, IntSet(), IntSet(), 0, Dict{State, Set{Tuple{Int,State}}}())

function Automaton(states::Int)
    aut = Automaton()
    add_states!(aut,states)
    return aut
end

function add_states!(aut::Automaton, numberOfNewStates::Int)
     for i = 1:numberOfNewStates
         key = aut.states + i
         push!(aut.transitions, key=>Set())
     end
     aut.states += numberOfNewStates
end

function add_transition!(aut::Automaton, source::Int, label::Int, target::Int)
    if label > aut.alphabetSize
        throw(ArgumentError("Label is not in the alphabet."))
    end

    t = (label, target)
    if !(t in aut.transitions[source])
        push!(D[source], t)
    end
end

function set_alphabet!(aut::Automaton, newAlphabetSize::Int)
    if newAlphabetSize < aut.alphabetSize
        for i = 1:aut.states
            for (label,target) in aut.transitions[i]
                if label > newAlphabetSize
                    delete!(aut.transitions[i], (label,target))
                end
            end
        end
    end
    aut.alphabetSize = newAlphabetSize
end
