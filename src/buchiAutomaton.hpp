// Author: Duc Thanh Tran

#ifndef _AUTOMATON_HPP_
#define _AUTOMATON_HPP_

#include <string>
#include <tuple>
#include <vector>

namespace INWAD {

using State = unsigned long;
using Transition = std::pair<std::string,State>;

class BuchiAutomaton {
public:
    BuchiAutomaton() = default;
    BuchiAutomaton(const int numberOfStates);

    void addEdge(const State source, const std::string &label, const State target);

private:
    std::vector<std::vector<Transition>> m_adjacencyList;
    State m_initialState;
};

} // namespace INWAD

#endif
