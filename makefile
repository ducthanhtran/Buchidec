CXX = g++
CXXFLAGS = -std=c++14 $(OPT) $(WARNING) $(INC)
OPT = -O2 -flto -march=native
WARNING = -Wall
INC = -Isrc

SRC = src
BIN = bin
OBJ = bin/obj

all: INWAD

INWAD: buchiAutomaton.o main.cpp
	$(CXX) $(CXXFLAGS) -o $(BIN)/buchi $(OBJ)/buchiAutomaton.o

buchiAutomaton.o: $(SRC)/buchiAutomaton.cpp $(SRC)/buchiAutomaton.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $(OBJ)/$@
