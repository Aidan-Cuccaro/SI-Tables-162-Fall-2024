/* 
 * Program: prog2.cpp
 * Description: Create a checker function
 * Date: 1/10/24
 */


/* INSTRUCTIONS:
 * Create an input checker app for integers! This will be (extremely) helpful as you 
 * progress through this class...
 * 
 * Requirements:
 * MUST ensure a number is within the required bounds
 * Make sure the input is not a char 
 * 
 * That's it for my requirements, but think about edge cases! More often than not, you will
 * need to ensure that an int is actually an int...
 * 
 */
#include <iostream>

using std::cout, std::cin, std::endl;

// function declaration(s)
void checker();

int main(){
    int user_input;
    checker();
    cout << "User inputted: " << user_input << endl;

    return 0;
}
