#include <buchiAutomaton.hpp>
#include <algorithm>

namespace INWAD {

BuchiAutomaton::BuchiAutomaton(const int numberOfStates, const Alphabet &alphabet, const State initialState)
    : m_transitions(numberOfStates), m_alphabet(alphabet), m_initialState(initialState) {}

int BuchiAutomaton::transitions() const noexcept {
    return std::accumulate(m_transitions.cbegin(), m_transitions.cend(), 0,
        [](const auto acc, const auto &map) { return acc + static_cast<int>(map.size()); });
}

void BuchiAutomaton::addTransition(const State source, const std::string &label, const State target) {
    // Label must be part of the alphabet
    const auto index = std::find(m_alphabet.cbegin(), m_alphabet.cend(), label);
    if (index != m_alphabet.cend()) {
        // Disallow duplicate transitions
        const auto range = m_transitions[source].equal_range(label);
        const auto sameTrans = std::find_if(range.first, range.second, [target](const auto &elem) { return elem.second == target; });
        if (sameTrans == m_transitions[source].cend()) {
            m_transitions[source].emplace(label, target);
        }
    }
}

// =========================================================================
// ========================= Buchi Automata Operations
// =========================================================================

BuchiAutomaton operator|(const BuchiAutomaton &autA, const BuchiAutomaton &autB) {
    BuchiAutomaton unionAut;
    return unionAut;
}

BuchiAutomaton operator&(const BuchiAutomaton &autA, const BuchiAutomaton &autB) {
    BuchiAutomaton intersectionAut;
    return intersectionAut;
}

BuchiAutomaton operator~(const BuchiAutomaton &autA) {
    BuchiAutomaton complAut;
    return complAut;
}

} // namespace INWAD
