#include "utility.hpp"
#include <boost/dynamic_bitset>
#include <unordered_map>
#include <utility>
#include <vector>

namespace Automata {

// Represents a non-deterministic automaton
class NonDeterministicAutomaton {
public:
    NonDeterministicAutomaton(const uint numberOfStates, const uint initialState) : m_numberOfStates(numberOfStates), m_initialState(initialState) {}

    inline void addTransition(const uint p, const char a, const uint q) noexcept {
        m_transitions.emplace(std::make_pair(p, std::make_pair(a,q)));
    }

private:
    uint m_numberOfStates;
    uint m_initialState;
    std::vector<uint> m_finalStates;
    std::unordered_multimap<uint, std::pair<char,uint>> m_transitions;
};

} // namespace Automata
