// Duc Thanh Transition

#include <buchiAutomaton.hpp>

namespace INWAD {

BuchiAutomaton::BuchiAutomaton(const int numberOfStates, const std::vector<std::string> &alphabet, const State initialState) : m_adjacencyList(numberOfStates), m_alphabet(alphabet), m_initialState(initialState) {}

BuchiAutomaton operator|(const BuchiAutomaton &autA, const BuchiAutomaton &autB) {
    // TODO
}

BuchiAutomaton operator&(const BuchiAutomaton &autA, const BuchiAutomaton &autB) {
    // TODO
}

BuchiAutomaton operator~(const BuchiAutomaton &autA) {
    // TODO
}

} // namespace INWAD
