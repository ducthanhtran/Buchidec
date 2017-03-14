// Author: Duc Thanh Tran
#include "non_deterministicAutomaton.hpp"
#include <algorithm>

NonDeterministicAutomaton::NonDeterministicAutomaton(const int numberOfStates, const int initialState) : Automaton(numberOfStates, initialState) {}

void NonDeterministicAutomaton::addTransition(const int p, const char a, const int q) {
    if (p > m_numberOfStates || q > m_numberOfStates) { return; }
    // Disallows already constructed transition (p,a,q)
    const auto searchResult = std::find(m_transitions.cbegin(), m_transitions.cend(), targetPair);
    if (searchResult == m_transitions.cend()) {
        m_transitions.emplace(std::make_pair(p, std::make_pair(a,q)));
    }
}
