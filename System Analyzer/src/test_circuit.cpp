#include <iostream>
#include <cassert>
#include "Circuit.h"

void testAddComponent() {
    Circuit circuit;
    circuit.addComponent("R1", 100);
    circuit.addComponent("R2", 200);
    circuit.setTopology("series");
    assert(circuit.computeResistance() == 300); // Check total resistance
    std::cout << "Test Add Component: Passed!\n";
}

void testSeriesResistance() {
    Circuit circuit;
    circuit.addComponent("R1", 100);
    circuit.addComponent("R2", 50);
    circuit.setTopology("series");
    double result = circuit.computeResistance();
    assert(result == 150); // Series: 100 + 50 = 150
    std::cout << "Test Series Resistance: Passed!\n";
}

void testParallelResistance() {
    Circuit circuit;
    circuit.addComponent("R1", 100);
    circuit.addComponent("R2", 200);
    circuit.setTopology("parallel");
    double result = circuit.computeResistance();
    assert(std::abs(result - 66.6667) < 0.001); // Parallel: 1 / (1/100 + 1/200)
    std::cout << "Test Parallel Resistance: Passed!\n";
}

void testEmptyCircuit() {
    Circuit circuit;
    circuit.setTopology("series");
    double result = circuit.computeResistance();
    assert(result == 0); // No components = 0 resistance
    std::cout << "Test Empty Circuit: Passed!\n";
}

void testInvalidTopology() {
    Circuit circuit;
    circuit.addComponent("R1", 100);
    circuit.addComponent("R2", 200);
    circuit.setTopology("invalid_topology");
    double result = circuit.computeResistance();
    assert(result == 0); // Invalid topology = 0 resistance
    std::cout << "Test Invalid Topology: Passed!\n";
}

int main() {
    std::cout << "Running Tests...\n";
    testAddComponent();
    testSeriesResistance();
    testParallelResistance();
    testEmptyCircuit();
    testInvalidTopology();
    std::cout << "All Tests Passed Successfully!\n";
    return 0;
}
