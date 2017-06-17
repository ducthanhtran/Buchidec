// Duc Thanh Transition

#include <buchiAutomaton.hpp>

namespace INWAD {

BuchiAutomaton::BuchiAutomaton(const int numberOfStates) : m_adjacencyList(numberOfStates) {}

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
