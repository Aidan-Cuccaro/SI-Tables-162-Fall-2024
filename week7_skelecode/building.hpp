#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <iostream>
#include <string>

class Building {
private:
    std::string name;
    int floors;

public:
    Building(const std::string& name, int floors)
        : name(name), floors(floors) {}

    void print_info() const;
    virtual std::string get_type() const = 0; // EXTRA: Read main for more details
};

#endif // BUILDING_HPP