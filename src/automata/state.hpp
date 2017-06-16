// Author: Duc Thanh Tran

#ifndef _STATE_HPP_
#define _STATE_HPP_

#include <unordered_multimap>

namespace Buchidec {

class State {
public:
    State() = default;

    inline void setFinal() noexcept { m_isFinal = true; }
    inline bool isFinal() const noexcept { return m_isFinal; }

private:
    bool m_isFinal;

    //! We consider an alphabet consisting of integers
    std::unordered_multimap<int,State> m_transitions;
};

} // namespace Buchidec

#endif
