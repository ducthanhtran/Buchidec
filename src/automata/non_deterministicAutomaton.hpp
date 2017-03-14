// Author: Duc Thanh Tran
#ifndef _NON_DETERMINISTIC_AUTOMATON_HPP_
#define _NON_DETERMINISTIC_AUTOMATON_HPP_

#include "automaton.hpp"
#include <algorithm>
#include <utility>
#include <vector>

namespace Automata {

// Represents a non-deterministic automaton
class NonDeterministicAutomaton : public Automaton {
public:
    NonDeterministicAutomaton(const int numberOfStates, const int initialState);

    // Creates a transition from state p with label a to state q
    // @pre transition (p,a,q) does not exist
    void addTransition(const int p, const char a, const int q) override;

private:

};

} // namespace Automata

#endif
