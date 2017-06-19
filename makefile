CXX = g++
CXXFLAGS = -std=c++14 $(OPT) $(WARNING) $(INC)
OPT = -O2 -flto -march=native
WARNING = -Wall
INC = -Isrc -Iunittests

SRC = src
BIN = bin
OBJ = bin/obj

SRC_TEST = unittests
BIN_TEST = bin/tests
OBJ_TEST = bin/tests/obj

all: makedirs INWAD

INWAD: buchiAutomaton.o $(SRC)/main.cpp
	$(CXX) $(CXXFLAGS) -o $(BIN)/buchi $(SRC)/main.cpp $(OBJ)/buchiAutomaton.o

buchiAutomaton.o: $(SRC)/buchiAutomaton.cpp $(SRC)/buchiAutomaton.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $(OBJ)/$@

##########################################

tests: buchiAutomaton_test.o $(SRC_TEST)/maintest.cpp
	$(CXX) $(CXXFLAGS) -o $(BIN_TEST)/testBuchi $(SRC_TEST)/maintest.cpp $(OBJ_TEST)/buchiAutomaton_test.o

buchiAutomaton_test.o: $(SRC_TEST)/buchiAutomaton_test.cpp $(SRC)/buchiAutomaton.cpp $(SRC)/buchiAutomaton.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $(OBJ_TEST)/$@


###########################################
.PHONY: makedirs clean run runtests

makedirs:
	mkdir -p $(BIN) $(OBJ) $(BIN_TEST) $(OBJ_TEST)

clean:
	rm -rf *.o

run:
	./$(BIN)/buchi

runtests:
	./$(BIN_TEST)/testBuchi
