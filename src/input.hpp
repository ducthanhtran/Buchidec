#pragma once

#include <buchiAutomaton.hpp>
#include <string>
#include <vector>

namespace INWAD {
    namespace DetailInput {
        //! Extracts the alphabet from the contentLine and returns it as a
        //! vector of strings. The words in contentLine are seperated by whitespaces.
        std::vector<std::string> getAlphabet(const std::string &contentLine);
    }

//! Reads a Buchi automaton from a file.
//!
//! The file has a specific format. Each line's first letter denotes
//! what type of line will be read.
//!
//!    'c' ...   : comment line
//!    't' q a p : transition from state q to p with label a
//!
//! The first line we read denotes the amount of states in the automaton.
//! In the second line we list the alphabet where each element is seperated
//! by a whitespace.
//! The initial state is mentioned in the third line
//!
//! If we cannot read the file we return an empty Buchi automaton.
BuchiAutomaton read(const std::string filepath);

} // namespace INWAD
