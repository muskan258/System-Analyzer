import os

# Define the directory structure
structure = {
    "AnalogCircuitOptimizer": {
        "src": ["main.cpp", "Circuit.cpp", "Optimizer.cpp", "Utils.cpp"],
        "include": ["Circuit.h", "Optimizer.h", "Utils.h"],
        "test": [],
        "Makefile": None
    }
}

# Function to create the directory structure
def create_structure(base, tree):
    for folder, contents in tree.items():
        path = os.path.join(base, folder)
        os.makedirs(path, exist_ok=True)
        if isinstance(contents, list):
            for file in contents:
                open(os.path.join(path, file), 'w').close()
        elif contents is None:  # Single file in the base directory
            open(os.path.join(base, folder), 'w').close()
        elif isinstance(contents, dict):
            create_structure(path, contents)

# Create the structure
create_structure(".", structure)
print("File structure created successfully!")
