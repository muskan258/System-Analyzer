#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <string>
#include <map>

class Circuit {
private:
    std::map<std::string, double> components; // Component name and values
    std::string topology; // Topology type: series or parallel

public:
    Circuit(); // Constructor
    void addComponent(const std::string &name, double value); // Add a component
    void setTopology(const std::string &topo); // Set circuit topology
    double computeResistance(); // Compute equivalent resistance
    void displayCircuit(); // Display circuit details
};

#endif
