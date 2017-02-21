#include "non_deterministicAutomaton.hpp"

NonDeterministicAutomaton::NonDeterministicAutomaton(const uint numberOfStates, const uint initialState) : Automaton(numberOfStates, initialState) {}

void NonDeterministicAutomaton::addTransition(const uint p, const std::pair<char,uint> &targetPair) noexcept {
    if (p > m_numberOfStates || targetPair.second > m_numberOfStates) { return; }
    // Disallows already constructed transitions
    const auto searchResult = std::find(m_transitions.cbegin(), m_transitions.cend(), targetPair);
    if (searchResult == m_transitions.cend()) {
        m_transitions.emplace(std::make_pair(p, std::make_pair(a,q)));
    }
}
