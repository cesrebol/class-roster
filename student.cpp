#include "student.h"
#include <string>
#include <iostream> 
#include "degree.h"
using namespace std;

// Student::Student(){

// };

Student::Student() {
    // Initialize member variables using member initialization
    this->studentID = "A12345678";
    this->firstName = "John";
    this->lastName = "Doe";
    this->emailAddress = "john.doe@example.com";
    this->age = 20;
    for (int i = 0; i < 3; ++i) {
        this->daysInCourse[i] = 35;
    }
    this->degreeProgram = DegreeProgram::SECURITY;
}

string Student::getStudentID() {
    return studentID;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmailAddress() {
    return emailAddress;
}

int Student::getAge() {
    return age;
}

int* Student::getDaysInCourse() {
    return daysInCourse;
}
DegreeProgram Student::getDegreeProgram() {
    return degreeProgram;
}

// Print student information
void Student::print() {
    cout << "Student ID: " << studentID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Email Address: " << emailAddress << endl;
    cout << "Age: " << age << endl;
    cout << "Days in Course: ";
    for (int i = 0; i < 3; ++i) {
        cout << daysInCourse[i] << " ";
    }
    cout << endl;
    cout << "Degree Program: " << degreeProgramNames[degreeProgram] << endl;

}

int main(){
    Student student;

    student.print();

    return 0;
}