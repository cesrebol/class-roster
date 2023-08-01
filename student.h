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
        int daysInCourse[3];
        DegreeProgram degreeProgram;
    public:
        Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse, DegreeProgram degreeProgram);
        string getStudentId(); 
        string getFirstName();
        string getLastName();
        string getEmailAddress();
        int getAge();
        int* getDaysInCourse();
        DegreeProgram getDegreeProgram();        

        void setStudenId(string studentId);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmailAddress(string emailAddress);
        void setAge(int age);
        void setDaysInCourse(int* daysInCourse);
        void setDegreeProgram(DegreeProgram degreeProgram);
        
        void print();




};