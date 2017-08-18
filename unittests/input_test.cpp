#include <catch.hpp>
#include <input.hpp>
#include <fstream>
#include <string>


TEST_CASE("Read an incorrectly formatted file", "[input][file_0]") {
    const auto file = "test_automaton_file_0";

    SECTION("empty file") {
        // create test file
        std::ofstream testfile(file);
        const auto automaton = INWAD.read(file);
    }

    SECTION("missing first line (number of states)") {

    }

    // use test
    const auto automaton = INWAD.read()
    REQUIRE()

}
