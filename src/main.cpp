#include <buchiAutomaton.hpp>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    using namespace INWAD;
    BuchiAutomaton a;
    a.addTransition(1,"",1);
    std::cout << a.transitions() << '\n';

    BuchiAutomaton b(2, {"a", "b"}, 0);
    b.addTransition(0,"a",1);
    std::cout << b.transitions() << '\n';
}
