CXX = g++
CXXFLAGS = -std=c++11 $(OPT) $(WARNING)
OPT = -O3 -flto -march=native
WARNING = -Wall

all: buchidec
	$(CXX) $(CXXFLAGS) -o
