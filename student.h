#ifndef STUDENT_H
#define STUDENT_H

#include <iostream> 
#include "degree.h" // including degree.h file for this class

using namespace std; // using std

class Student {
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int daysInCourse[3];
        DegreeProgram degreeProgram;
    public:
        Student ();
        
        Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram);
        string getStudentID(); 
        string getFirstName();
        string getLastName();
        string getEmailAddress();
        int getAge();
        int* getDaysInCourse();
        DegreeProgram getDegreeProgram();        

        void setStudentID(string studentID);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmailAddress(string emailAddress);
        void setAge(int age);
        void setDaysInCourse(int* daysInCourse);
        void setDegreeProgram(DegreeProgram degreeProgram);
        
        void print();
};

#endif // STUDENT_H