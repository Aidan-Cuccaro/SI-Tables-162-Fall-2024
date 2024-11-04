#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class student {
private:
    string name;
    int age;
    int num_courses;
    string* course_arr;

public:
    // Default Constructor
    student();

    // Parameterized Constructors
    student(string n, int a, int num_courses);
    student(string n);  // Constructor with initializer list

    // Destructor
    ~student();

    // Copy Constructor
    student(const student& s);

    // Assignment Operator Overload
    student& operator=(const student& s);

    // Getters
    int get_num_courses() const;
    string* get_course_arr();
    string get_course_arr(int idx);
    int get_age();

    // Setters
    void set_num_courses(const int new_num_courses);
    void set_course_arr(string* new_course_arr);
    void set_course_arr(string course, int idx);
    void set_age(int age);

    // Method to display Student info
    void print();
};

#endif // STUDENT_HPP
