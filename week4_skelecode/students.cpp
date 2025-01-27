#include <iostream>
#include <fstream> // For file I/O
#include <string>  // For strings

using namespace std;

// Define a struct to represent a student
struct Student {
    bool info;      // See inputStudent for more information
    string name;
    int age;
    double gpa;
};

// Function prototypes
Student* getStudentData(int& numStudents);
void writeToFile(Student* students, int numStudents, const string& filename);
void readFromFile(const string& filename);
void inputStudent(Student* students, int numStudents);

int main() {
    int numStudents;

    Student* students = getStudentData(numStudents);

    bool user = true;
    int user_input;
    while(user){
        cout << "What would you like to do?:\n1. Write to a file\n2. Read from a file\n3. Input a student's information\n4. Quit\nInput:";
        cin >> user_input;

        switch(user_input){
            case 1:
                writeToFile(students, numStudents, "students.txt"); // Change 'students.txt' if you don't want this to be your output source
                break;
            case 2:
                readFromFile("students.txt");                       // Change 'students.txt' if you don't want this to be your input source
                break;
            case 3:
                inputStudent(students, numStudents);
                break;
            case 4:
                user = false;
                break;
            default:
                cout << "Invalid option!\n";
                break;
        }
    }

    delete[] students;

    return 0;
}

/*
 * Function: getStudentData
 * 
 * Defintion: This function creates a dynamic array of size numStudents and populates it with generic information.
 *  i.e. int = 0, float = 0.0, string = ""
 *  
 * Parameters: numStudents - size of the (not-yet-created) students array.
 * 
 * Returns: an array of Student(s)
 */
Student* getStudentData(int& numStudents) {
}

/*
 * Function: writeToFile
 * 
 * Defintion: This function gets student information from the struct array and outputs it to a file.
 *  
 * Parameters:  students - array of Student structs
 *              numStudents - the size of the students array
 *              filename - a string constant that contains the file being read from. CURRENTLY HARDCODED IN MAIN
 * 
 * Helpful syntax:
 *  - ofstream: creates an outstream variable.
 *      example: ofstream f(filename);
 *  - is_open(): checks to ensure the file is open before reading any information
 *      example: f.is_open()
 *  - close(): closes the file
 */
void writeToFile(Student* students, int numStudents, const string& filename) {
}

/*
 * Function: readFromFile
 * 
 * Defintion: This function reads student information from a file and outputs it to the terminal.
 *  
 * Parameters: filename - a string constant that contains the file being read from. CURRENTLY HARDCODED IN MAIN
 * 
 * Helpful syntax:
 *  - ifstream: creates an instream variable.
 *      example: ifstream f(filename);
 *  - is_open(): checks to ensure the file is open before reading any information
 *      example: f.is_open()
 *  - close(): closes the file
 */
void readFromFile(const string& filename) {
}

/*
 * Function: inputStudent
 * 
 * Description: This function should be able to input the information for one student. 
 *  It is up to you how you determine the student you would like to input. For example,
 *  you could have this function input only the first student location. Or, you could 
 *  have the program prompt the user for the location in the array that they would like
 *  to write the student information to. 
 * 
 * Parameters: students - an array of the struct 'Student'. 
 *             numStudents - the size of the students array.
 * 
 * EXTRA: You may use the 'info' variable to ensure that student information is not rewritten.
 *  i.e., check to ensure that the info variable is false before writing any information to the
 *  struct.
 */
void inputStudent(Student* students, int numStudents){

}
