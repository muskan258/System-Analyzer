#include "Circuit.h"
#include <iostream>
#include <iomanip>

Circuit::Circuit() {}

void Circuit::addComponent(const std::string &name, double value) {
    components[name] = value;
}

void Circuit::setTopology(const std::string &topo) {
    topology = topo;
}

double Circuit::computeResistance() {
    if (topology == "series") {
        double total = 0;
        for (const auto &comp : components) {
            total += comp.second;
        }
        return total;
    } else if (topology == "parallel") {
        double inverseTotal = 0;
        for (const auto &comp : components) {
            inverseTotal += 1.0 / comp.second;
        }
        return inverseTotal > 0 ? 1.0 / inverseTotal : 0.0;
    }
    return 0.0;
}

void Circuit::displayCircuit() {
    std::cout << "\nCircuit Topology: " << topology << "\n";
    std::cout << "Components:\n";
    for (const auto &comp : components) {
        std::cout << std::setw(10) << comp.first << ": " << comp.second << " Ohms\n";
    }
}
