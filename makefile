CXX = g++
CXXFLAGS = -std=c++14 $(OPT) $(WARNING)
OPT = -O3 -flto -march=native
WARNING = -Wall

all: INWAD
	$(CXX) $(CXXFLAGS) -o
