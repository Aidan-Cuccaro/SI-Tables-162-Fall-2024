#ifndef shape
#define shape

#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846 // M_PI wasn't working, so I defined it myself -_-

// Base class
class Shape {
public:
    virtual double calculateArea() const = 0; // Pure virtual function
    virtual void displayProperties() const = 0; // Pure virtual function
    virtual ~Shape() = default;                // Virtual destructor
};

#endif


