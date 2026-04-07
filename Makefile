CXX = g++
CXXFLAGS = -std=c++17 -O2 -Iinclude

all: generator placement roundtrip_test

generator: src/generator.cpp
	$(CXX) $(CXXFLAGS) src/generator.cpp -o generator

placement: src/placement.cpp src/parser.cpp src/writer.cpp
	$(CXX) $(CXXFLAGS) src/placement.cpp src/parser.cpp src/writer.cpp -o placement

roundtrip_test: src/test_roundtrip.cpp src/parser.cpp src/writer.cpp
	$(CXX) $(CXXFLAGS) src/test_roundtrip.cpp src/parser.cpp src/writer.cpp -o roundtrip_test

clean:
	rm -f generator placement roundtrip_test