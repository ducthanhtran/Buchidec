#include <catch.hpp>
#include <buchiAutomaton.hpp>

TEST_CASE("creation of Buchi automaton", "[automaton]") {
    using namespace INWAD;

    BuchiAutomaton aut;

    SECTION("Empty automaton") {
        REQUIRE(aut.states() == 0);
    }
}
