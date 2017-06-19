#ifndef _AUTOMATON_HPP_
#define _AUTOMATON_HPP_

#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

namespace INWAD {

using State = unsigned long;
using Transition = std::pair<std::string,State>;

//! A non-deterministic Buchi Automaton.
class BuchiAutomaton {
public:
    BuchiAutomaton() = default;
    BuchiAutomaton(const int numberOfStates, const std::vector<std::string> &alphabet, const State initialState);

    inline int states() const noexcept { return static_cast<int>(m_transitions.size()); }
    int transitions() const noexcept;

    void addTransition(const State source, const std::string &label, const State target);

    //! Union operation
    friend BuchiAutomaton operator|(const BuchiAutomaton &autA, const BuchiAutomaton &autB);
    //! Intersection operation
    friend BuchiAutomaton operator&(const BuchiAutomaton &autA, const BuchiAutomaton &autB);
    //! Complementation operation
    friend BuchiAutomaton operator~(const BuchiAutomaton &aut);


private:
    // Adjacency list
    std::vector<std::unordered_multimap<std::string,State>> m_transitions;
    std::vector<std::string> m_alphabet;
    State m_initialState;
};

} // namespace INWAD

#endif
