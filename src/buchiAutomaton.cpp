#include <buchiAutomaton.hpp>

namespace INWAD {

BuchiAutomaton::BuchiAutomaton(const int numberOfStates, const std::vector<std::string> &alphabet, const State initialState) : m_adjacencyList(numberOfStates), m_alphabet(alphabet), m_initialState(initialState) {}

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
