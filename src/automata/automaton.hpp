// Author: Duc Thanh Tran

#ifndef _AUTOMATON_HPP_
#define _AUTOMATON_HPP_

#include <state.hpp>
#include <vector>

namespace Buchidec {

class Automaton {
public:
    Automaton() = default;
    //! Initializes an automaton with a set of states
    //!
    Automaton(std::vector<State>, const State initialState);

    inline void addEdge(State &source, const int label, const State &target) {
        
    }

private:
    std::vector<State> m_states;
    State m_initialState;
};

} // namespace Buchidec

#endif
