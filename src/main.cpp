#include <iostream>
#include "Circuit.h"

// Function to display the menu
void showMenu() {
    std::cout << "\n=== Analog Circuit Optimizer ===\n";
    std::cout << "1. Add a Component\n";
    std::cout << "2. Set Circuit Topology (series/parallel)\n";
    std::cout << "3. Compute Equivalent Resistance\n";
    std::cout << "4. Display Circuit Details\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Circuit circuit; // Create Circuit object
    int choice; // User choice
    std::string name, topology; // Component name and topology
    double value; // Component value

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter Component Name (e.g., R1): ";
                std::cin >> name;
                std::cout << "Enter Value (in Ohms): ";
                std::cin >> value;
                circuit.addComponent(name, value);
                break;

            case 2:
                std::cout << "Enter Topology (series/parallel): ";
                std::cin >> topology;
                circuit.setTopology(topology);
                break;

            case 3:
                std::cout << "Equivalent Resistance: " 
                          << circuit.computeResistance() 
                          << " Ohms\n";
                break;

            case 4:
                circuit.displayCircuit();
                break;

            case 5:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
