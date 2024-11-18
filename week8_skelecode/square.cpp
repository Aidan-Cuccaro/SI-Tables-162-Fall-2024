// ---------------------- Instruction Manual ----------------------
//
// This code defines two classes, `Square` and `Cube`, which represent 
// a 2D shape (square) and a 3D shape (cube), respectively. 
// Both classes inherit from a base class called `Shape`.
//
// Follow the steps below to set up and integrate this code:
//
// 1. Dependencies:
//    - This code includes `<cmath>` for mathematical constants and functions 
//      (e.g., `M_PI` for π).
//
// 3. Class Details:
//    a. **Square Class:**
//       - Inherits from `Shape`.
//       - Represents a 2D square.
//       - Has a member variable `side` to store the length of one side.
//       - Overrides:
//         - `calculateArea()` to return the area of the square: side^2.
//         - `displayProperties()` to print the side length of the square.
//
//    b. **Cube Class:**
//       - Inherits from `Square`.
//       - Represents a 3D cube.
//       - Overrides:
//         - `calculateArea()` to return the surface area of the cube: 6 * side^2.
//         - `displayProperties()` to print the side length of the cube.
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
//    - To test this code, instantiate objects of `Square` and `Cube` 
//      (which have been done for you in the provided main file).
//    - Return to main for testing!
//
// ---------------------------------------------------------------
