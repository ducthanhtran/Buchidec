#ifndef _INPUT_HPP_
#define _INPUT_HPP_

#include <buchiAutomaton.hpp>
#include <ifstream>
#include <string>

namespace INWAD {

//! Reads an Buchi automaton from a file.
//!
//! The file has a specific format. Each line's first letter denotes
//! what type of line will be read.
//!
//!    'c' ...   : comment line
//!    't' q a p : transition from state q to p with label a
//!
//! The first line we read denotes the amount of states in the automaton.
//! If we cannot read the file we return an empty Buchi automaton.
BuchiAutomaton read(const std::string filepath) {
    std::ifstream file(filepath);

    if (!file.is_open()) {
        BuchiAutomaton empty;
        return empty;
    }

    // Read in amount of states from first line
    std::string stateSize;
    std::getline(file, stateSize);
    BuchiAutomaton aut(std::stoi(stateSize));

    // Add transitions
    // TODO: alphabet size, what is alphabet
    while (c << file) {
        switch(c) {
            case 'c':
                std::getline(file, lineContent);
                break;
            case 't':
                // TODO
        }
    }
    
    return aut;
}

} // namespace INWAD
#endif
