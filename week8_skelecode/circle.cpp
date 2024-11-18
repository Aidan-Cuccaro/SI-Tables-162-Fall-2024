// ---------------------- Instruction Manual ----------------------
//
// This code defines two classes, `Circle` and `Sphere`, which represent 
// a 2D shape (circle) and a 3D shape (sphere), respectively. 
// Both classes inherit from a base class called `Shape`.
//
// Follow the steps below to set up and integrate this code:
//
// 1. Dependencies:
//    - This code includes `<cmath>` for mathematical constants and functions 
//      (e.g., `M_PI` for π).
//
// 3. Class Details:
//    a. **Circle Class:**
//       - Inherits from `Shape`.
//       - Represents a 2D circle.
//       - Has a member variable `radius` to store the circle's radius.
//       - Overrides:
//         - `calculateArea()` to return the area of the circle: π * radius^2.
//         - `displayProperties()` to print the radius of the circle.
//
//    b. **Sphere Class:**
//       - Inherits from `Circle`.
//       - Represents a 3D sphere.
//       - Overrides:
//         - `calculateArea()` to return the surface area of the sphere: 4π * radius^2.
//         - `displayProperties()` to print the radius of the sphere.
//
// 4. Integration in Your Project:
//    - Include the base class header (`shape.hpp`) in this file:
//        `#include "shape.hpp"`
//    - Compile this code along with the implementation of `Shape` and other shapes.
//
// 5. Compilation Instructions:
//    - You have been given a Makefile to work with.
//    - Run the command 'make' to compile.
//    - The executable will be called 'prog'.
//
// 6. Example Usage in `main.cpp`:
//    - To test this code, instantiate objects of `Circle` and `Sphere` (Which have been done for you).
//          Return to main for testing!
//
// ---------------------------------------------------------------
