CXX = g++
CXXFLAGS = -std=c++17 -O2

all: generator placement

generator: src/generator.cpp
	$(CXX) $(CXXFLAGS) src/generator.cpp -o generator

placement: src/placement.cpp
	$(CXX) $(CXXFLAGS) src/placement.cpp -o placement

clean:
	rm -f generator placement