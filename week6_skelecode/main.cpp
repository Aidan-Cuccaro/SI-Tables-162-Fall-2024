/*
Program: main.cpp
Description: Contains the main function and all subsequent function calls. 
YOU SHOULD NOT MODIFY ANYTHING IN THIS FILE, ONLY COMMENTS 
*/

#include "week6.hpp"

int main() {
    // Using the default constructor
    student student1;
    student1.print();
    /* SHOULD PRINT THIS
    Name: 
    Age: 0
    */

    // Using the parameterized constructor with full arguments
    student student2("John Doe", 20, 3);
    student2.set_course_arr("Math", 0);
    student2.set_course_arr("Physics", 1);
    student2.set_course_arr("Chemistry", 2);
    student2.print();

    // Using the parameterized constructor with initializer list
    student student3("Jane Smith");
    student3.set_num_courses(2);
    student3.set_course_arr(new std::string[2]{ "Biology", "English" });
    student3.print();

    // Call the Copy Constructor (CC)

    // UNCOMMENT THIS CODE IF WORKING ON CC
    // student student4 = student2;  // Copy constructor called
    // student4.print();

    /* SHOULD PRINT THIS
    Name: John Doe
    Age: 20
    Course 1: Math
    Course 2: Physics
    Course 3: Chemistry
    */

    // Call the Assignment Operator Overload (AOO)

    // UNCOMMENT THIS CODE IF WORKING ON AOO
    // student student5("Temp Student", 18, 1);  // Temporary student
    // student5.set_course_arr("History", 0);
    // student5.print();

    // student5 = student3;  // Assignment operator called
    // student5.print();

    /* SHOULD PRINT THIS
    Name: Temp Student
    Age: 18
    Course 1: History

    Name: Jane Smith
    Age: 0
    Course 1: Biology
    Course 2: English
    */

    return 0;
}