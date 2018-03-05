CXX=g++
CXXFLAGS=-I.
DEPS=factorial.h
OBJ=main.o factorial.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS) 

all: $(OBJ)
	g++ -o $@ $^ $(CXXFLAGS)