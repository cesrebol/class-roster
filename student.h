#include <iostream> 
#include "degree.h" // including degree.h file for this class

using namespace std; // using std

class Student {
    private:
        string studentId;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int daysInCourse;
        DegreeProgram degreeProgram;
    public:
        Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse, DegreeProgram degreeProgram);
        
};