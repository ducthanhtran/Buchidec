// Author: Duc Thanh Tran

#ifndef _AUTOMATON_HPP_
#define _AUTOMATON_HPP_

#include <boost/dynamic_bitset>
#include <unordered_map>
#include <utility>
#include <vector>

namespace Automata {

// Represents an automaton. Acts as a base class.
class Automaton {
public:
    virtual void addTransition(const int p, const char a, const int q) = 0;

    inline void addState() { ++m_numberOfStates; }

protected:
    virtual Automaton(const uint numberOfStates, const uint initialState) : m_numberOfStates(numberOfStates), m_initialState(initialState) {}


private:
    int m_numberOfStates;
    int m_initialState;

    // If bit at i-th position is equal to one, then state i is a final state
    boost::dynamic_bitset<> m_finalStates;

    std::unordered_multimap<uint, std::pair<char,uint>> m_transitions;
};

} // namespace Automata

#endif
