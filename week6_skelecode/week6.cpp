#include "week6.hpp"

// Default constructor
student::student() {
	cout << "Default Constructor Called" << endl;
	this->name = "";
	this->age = 0;
	this->num_courses = 0;
	this->course_arr = nullptr;
}

// Parameterized constructor
student::student(string n, int a, int num_courses) {
	cout << "Parameterized Constructor Called" << endl;
	this->name = n;
	this->age = a;
	this->num_courses = num_courses;
	this->course_arr = new string[num_courses];
}

// Parameterized constructor using initializer list
student::student(string n) : name(n), age(0), num_courses(0) {
	this->course_arr = nullptr;
}

// Destructor
student::~student() {
	cout << "Deconstructor Called" << endl;
	if (this->course_arr != nullptr) {
		delete[] this->course_arr;
		this->course_arr = nullptr;
	}
}

/****************************************************************************************************************************************
 * FILL IN YOUR ASSIGNED FUNCTION BELOW
 ****************************************************************************************************************************************/

// Copy constructor (CC) -- FILL IN
/* INSTRUCTIONS:
	Fill in this code with the code to copy a student. You may NOT change any of the parameters or create any new 
	definitions - you should be working with a 'singular' class object.

	Hint: Before you start writing code, think about our variables. What is static? What is dynamic? What needs a deep
	copy vs a shallow copy? Look at our constructors if you need a reminder :)
*/
student::student(const student& s) {
	cout << "Copy Constructor called " << endl; 

}

// Assignment operator overload (AOO) -- FILL IN
/* INSTRUCTIONS
	Fill in this code with the code for an AOO for the student class. You may NOT change any of the parameters or
	create any new definitions - remember, you are assigning an existing student the information of another existing student.

	Hint: Similar to a CC, think about our variables. What is static? What is dynamic? Look at our constructors for a reminder :)
	Hint 2: Don't forget, these are two existing students! What happens to the old information? 
*/
student& student::operator=(const student& s) {
	cout << "Assignment Operator Overload called " << endl;

}

/****************************************************************************************************************************************
 * EXTRA FUNCTIONS - DO NOT TOUCH
 * THESE FUNCTIONS ARE ALREADY DEFINED AND COMPLETED. YOU DO NOT NEED TO WORRY ABOUT THEM
 *****************************************************************************************************************************************/

// Getters
int student::get_num_courses() const {
	return this->num_courses;
}

string* student::get_course_arr() {
	return this->course_arr;
}

string student::get_course_arr(int idx) {
	if (idx >= this->num_courses) // out of bounds
		return "";

	return course_arr[idx];
}

int student::get_age() {
    return this->age;
}


// Setters
void student::set_num_courses(const int new_num_courses) {
	this->num_courses = new_num_courses;
}

void student::set_course_arr(string* new_course_arr) {
	this->course_arr = new_course_arr;
}

void student::set_course_arr(string course, int idx) {
	if (idx >= this->num_courses) // out of bounds
		return;
	this->course_arr[idx] = course;
}

void student::set_age(int age) {
    this->age = age;
}


// Method to display Student info
void student::print() {
	cout << "------------------" << endl;
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;
	for (int i = 0; i < this->num_courses; ++i) {
		cout << "Course " << i + 1 << ": ";
		cout << this->course_arr[i] << endl;
	}
	cout << "------------------" << endl;
}

