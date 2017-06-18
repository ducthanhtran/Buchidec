
#include <input.hpp>
#include <ifstream>

namespace INWAD {
    namespace DetailInput {
        std::vector<std::string> getAlphabet(const std::string &contentLine) {
            std::vector<std::string> alphabet;
            // TODO
            return alphabet;
        }
    }

BuchiAutomaton read(const std::string filepath) {
    std::ifstream file(filepath);

    if (!file.is_open()) {
        BuchiAutomaton empty;
        return empty;
    }

    std::string lineContent;

    // Read in amount of states from first line
    std::getline(file, lineContent);
    const auto numberOfStates = std::stoi(lineContent);

    // Alphabet processing from second line
    std::getline(file, lineContent);
    const auto alphabet = DetailInput::getAlphabet(lineContent);

    // Initial state, third line
    std::getline(file, lineContent);
    BuchiAutomaton aut(numberOfStates, alphabet, std::stoul(lineContent));

    // Add transitions
    char c;
    while (c << file) {
        switch(c) {
            case 'c':
                std::getline(file, lineContent);
                break;

            case 't':
                // TODO
                // std::basic_istringstream


        }
    }

    return aut;
}

} // namespace INWAD
#endif
