// ---------------------- Instruction Manual ----------------------
//
// This code defines two classes, `Triangle` and `Pyramid`, which represent 
// a 2D shape (triangle) and a 3D shape (pyramid), respectively. 
// Both classes inherit from a base class called `Shape`.
//
// Follow the steps below to set up and integrate this code:
//
// 1. Dependencies:
//    - This code includes `<cmath>` for mathematical constants and functions 
//      (e.g., `M_PI` for π).
//
// 3. Class Details:
//    a. **Triangle Class:**
//       - Inherits from `Shape`.
//       - Represents a 2D triangle.
//       - Has two protected member variables: `base` and `height`, which store 
//         the dimensions of the triangle.
//       - Overrides:
//         - `calculateArea()` to return the area of the triangle: 0.5 * base * height.
//         - `displayProperties()` to print the base and height of the triangle.
//
//    b. **Pyramid Class:**
//       - Inherits from `Triangle`.
//       - Represents a 3D pyramid, with a base and height, but height has been changed to slant height.
//       - Overrides:
//         - `calculateArea()` to return the surface area of the pyramid: base + (0.5 * (base * 4) * height
//           (Note: This formula includes an approximation and may differ from the actual surface area calculation.)
//         - `displayProperties()` to print the base and slant height of the pyramid.
//
// 4. Integration in Your Project:
//    - Include the base class header (`shape.hpp`) in this file:
//        `#include "shape.hpp"`
//    - Compile this code along with the implementation of `Shape` and other shapes.
//
// 5. Compilation Instructions:
//    - You have been given a Makefile to work with.
//    - Run the command 'make' to compile the project.
//    - The compiled executable will be named 'prog'.
//
// 6. Example Usage in `main.cpp`:
//    - To test this code, instantiate objects of `Triangle` and `Pyramid` 
//      (which have been set up for testing purposes in `main.cpp`).
//    - Return to main for testing!
//
// ---------------------------------------------------------------
