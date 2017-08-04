#pragma once

#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

namespace INWAD {

using State = unsigned long;
using Letter = std::string;
using Alphabet = std::vector<Letter>;

//! A non-deterministic Buchi Automaton.
class BuchiAutomaton {
public:
    BuchiAutomaton() = delete;
    BuchiAutomaton(const int numberOfStates, const Alphabet &alphabet, const State initialState);

    inline int num_states() const noexcept { return static_cast<int>(m_transitions.size()); }
    int num_transitions() const noexcept;

    void addTransition(const State source, const Letter &letter, const State target);

    //! Union operation
    friend BuchiAutomaton operator|(const BuchiAutomaton &autA, const BuchiAutomaton &autB);
    //! Intersection operation
    friend BuchiAutomaton operator&(const BuchiAutomaton &autA, const BuchiAutomaton &autB);
    //! Complementation operation
    friend BuchiAutomaton operator~(const BuchiAutomaton &aut);


private:
    // Adjacency list
    std::vector<std::unordered_multimap<Letter,State>> m_transitions;
    const Alphabet m_alphabet;
    const State m_initialState;
};

} // namespace INWAD
