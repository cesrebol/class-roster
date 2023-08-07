#include "student.h"
#include <string>

using namespace std;

Student::Student(){
    
};

string Student::getStudentId() {
    return studentId;
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



