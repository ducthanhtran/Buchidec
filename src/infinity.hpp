#pragma once

namespace INWAD {
    namespace Detail {

    } // namespace Detail

    //! Returns true if the Buchi automaton recognizes an infinite language,
    //! that is, |L(aut)| is infinite.
    bool isInfiniteLanguage(const BuchiAutomaton &aut);
} // namespace INWAD
