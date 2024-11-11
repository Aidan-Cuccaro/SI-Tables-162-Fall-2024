#include "building.hpp"

void Building::print_info() const {
    std::cout << "Building Name: " << name << std::endl;
    std::cout << "Number of Floors: " << floors << std::endl;
}

// No need to implement get_type here as it is a pure virtual function