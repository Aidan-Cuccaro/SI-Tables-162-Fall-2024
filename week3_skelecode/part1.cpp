/*
 * Program: part1! 
 * Date: 9/6/23 -- I made this so long ago :,)
 * Description: Working with 1d dynamic arrays and passing information by pointers
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

// Function Calls - DO NOT MODIFY
int* initializeArray(int);
void fillArray(int*, int);
void printArrayToTerminal(int*, int);
void printArrayToFile(int*, int);

// DO NOT MODIFY ANYTHING IN MAIN,
// THERE IS ONE EXCEPTION, LOOK THROUGH MAIN!!!
int main(){
    srand(time(NULL)); // Allows for random number generation

    int size = 0;
    int user_input;

    cout << "Enter a size: ";
    cin >> size; 
    int* arr = initializeArray(size);
    fillArray(arr, size);

    cout << "What would you like to print to?:\n(1)Terminal\n(2)File\n(3)Quit\nInput: ";
    cin >> user_input;

    switch(user_input){
        case 1:
            printArrayToTerminal(arr, size);
            break;
        case 2:
            printArrayToFile(arr, size);
            break;
        default:
            cout << "Ending Program.\n";
    }
    
    // What do we do with a DYNAMIC array once we are done?
    // Replace this comment with your answer!
    return 0;
}


/*
Function: initializeArray
Description: Initializes an array and returns the pointer
Parameters: size of array 
*/
int* initializeArray(int size){
    cout << "initializeArray: Fix this!!\n";
    return 0;
}


/*
Function: fillArray
Description: fills the array
Parameters: array being used and size. 
*/
void fillArray(int* arr, int size){
    cout << "fillArray: Fix this!!\n";
}


/*
Function: printArrayToTerminal
Description: prints the array to the terminal
Parameters: array being used and size. 
*/
void printArrayToTerminal(int* arr, int size){
    cout << "printArrayToTerminal: Fix this!!\n";
}


/*
Function: printArrayToFile
Description: prints the array to a file
Parameters: array being used and size. 
*/
void printArrayToFile(int* arr, int size){
    cout << "printArrayToFile: Fix this!! (Extra, not required)\n";
}