CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC = src/main.cpp src/Circuit.cpp
TEST_SRC = src/test_circuit.cpp src/Circuit.cpp
INCLUDE = -Iinclude
OUT = AnalogCircuitOptimizer
TEST_OUT = test_circuit

all: build

build:
	$(CXX) $(CXXFLAGS) $(SRC) $(INCLUDE) -o $(OUT)

test:
	$(CXX) $(CXXFLAGS) $(TEST_SRC) $(INCLUDE) -o $(TEST_OUT)
	./$(TEST_OUT)

clean:
	rm -f $(OUT) $(TEST_OUT)
