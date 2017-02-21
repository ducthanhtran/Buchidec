
#ifndef _NON_DETERMINISTIC_AUTOMATON_HPP_
#define _NON_DETERMINISTIC_AUTOMATON_HPP_

#include "automaton.hpp"
#include "utility.hpp"
#include <algorithm>
#include <utility>
#include <vector>

namespace Automata {

// Represents a non-deterministic automaton
class NonDeterministicAutomaton : public Automaton {
public:
    NonDeterministicAutomaton(const uint numberOfStates, const uint initialState);

    void addTransition(const uint p, const std::pair<char,uint> &targetPair) noexcept override;

private:

};

} // namespace Automata

#endif
