# Analog Circuit Verification Optimizer

This project implements a basic analog circuit verification optimizer. It allows you to build circuits, add components (resistors), set their topologies (series/parallel), and calculate their total resistance based on the given topology. The project is designed to verify the optimization and behavior of different analog circuits by simulating their configuration and calculating important electrical properties.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [License](#license)

## Features

- **Add components**: Add resistors to the circuit with specified values.
- **Set topologies**: Define the circuit topology (e.g., series or parallel).
- **Calculate resistance**: Compute total circuit resistance based on topology.
- **Handle edge cases**: Check for empty circuits or invalid topologies.
- **Test suite**: Includes automated tests to ensure the correct operation of the circuit simulation.

## Prerequisites

To build and run this project, you need to have the following installed:

- **g++** (GNU Compiler Collection) for compiling C++ code.
- **g++** version 7.0 or higher is recommended.
- A terminal or command prompt (e.g., PowerShell, Command Prompt, or Bash).

### Windows Setup (If using MinGW)
1. Install [MinGW](https://sourceforge.net/projects/mingw/).
2. Add MinGW’s `bin` directory to your system's `PATH`.

Alternatively, use [Chocolatey](https://chocolatey.org/install) to install the compiler:
```bash
choco install mingw
```
## Installation

### Clone the repository to your local machine:
```bash
git clone https://github.com/muskan258/analog-circuit-optimizer.git
```
### Navigate to the project directory:
```bash
cd analog-circuit-optimizer
```
### If you have not set up `make`, manually compile the project using the following commands:

#### Compile the Main Program
```bash
g++ -std=c++17 -Wall src/main.cpp src/Circuit.cpp -Iinclude -o AnalogCircuitOptimizer
```
### Compile the Test Program
```bash
g++ -std=c++17 -Wall src/test_circuit.cpp src/Circuit.cpp -Iinclude -o TestCircuit
```
## Usage

### Build the Circuit
To build the circuit, run the compiled `AnalogCircuitOptimizer` program:
```bash
./AnalogCircuitOptimizer
```
This program simulates the creation of an analog circuit by adding components (resistors) and calculating the total resistance based on the specified topology (series or parallel).

## Run Tests

To verify the correctness of the program, you can run the test suite:
```bash
./TestCircuit
```
The tests check various cases such as adding components, calculating resistance for series and parallel circuits, handling invalid topologies, and more.

## Testing

The project includes automated tests to validate the functionality of the circuit simulation. The tests are written in `src/test_circuit.cpp`.

### Test Cases
- **Add Component**: Verifies that components can be added and their resistance is correctly calculated.
- **Series Resistance**: Verifies resistance calculation for components in series.
- **Parallel Resistance**: Verifies resistance calculation for components in parallel.
- **Empty Circuit**: Verifies the behavior of an empty circuit.
- **Invalid Topology**: Verifies that an invalid topology is handled gracefully.

To run the tests, use the following command:
```bash
./TestCircuit
```
## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.