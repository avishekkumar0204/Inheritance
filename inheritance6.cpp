#include <bits/stdc++.h>
using namespace std;
class Teacher
{
public:
    int salary;
    int id;
    Teacher()
    {
        cout << "Teacher's default constructor" << endl;
    }
};
class Student
{
public:
    int roll;
    int age;
    Student()
    {
        cout << "Student's default constructor" << endl;
    }
};

// Constructor will be called from base to derived class.In base the constructor for the class which is mentioned first will be called.Here constructor for Teacher then student will be called
class TA : public Teacher, public Student
{
public:
    TA()
    {
        cout << "TA's default constructor" << endl;
    }
};
int main()
{
    TA ta1;
}