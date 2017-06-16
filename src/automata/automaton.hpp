// Author: Duc Thanh Tran

#ifndef _AUTOMATON_HPP_
#define _AUTOMATON_HPP_

#include <state.hpp>
#include <vector>

namespace Buchidec {

class Automaton {
public:
    Automaton() = default;

private:
    std::vector<State> m_states;
    State m_initialState;
};

} // namespace Buchidec

#endif
