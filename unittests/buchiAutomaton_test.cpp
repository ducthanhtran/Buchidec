#include <catch.hpp>
#include <buchiAutomaton.hpp>
#include <string>


TEST_CASE("creation of Buchi automaton", "[automaton]") {
    using namespace INWAD;

    BuchiAutomaton aut;

    SECTION("Empty automaton") {
        REQUIRE(aut.states() == 0);
        REQUIRE(aut.transitions() == 0);
    }

    SECTION("Add transition in empty automaton") {
        aut.addTransition(0,"a",1);
        aut.addTransition(1,"",1);
        REQUIRE(aut.transitions() == 0);
    }
}
