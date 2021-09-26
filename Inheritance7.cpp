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
    void print()
    {
        cout << "Salary::" << salary << endl;
        cout << "ID::" << id << endl;
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
    void print()
    {
        cout << "Roll Number::" << roll << endl;
        cout << "Age::" << age << endl;
    }
};
class TA : public Teacher, public Student
{
public:
    TA()
    {
        cout << "TA's default constructor" << endl;
    }
    void print()
    {
        cout << "Salary::" << salary << endl;
        cout << "ID::" << id << endl;
        cout << "Roll Number::" << roll << endl;
        cout << "Age::" << age << endl;
    }
};
int main()
{
    TA ta1;

    // First of all ta1 will look for print() function in it own class if it is present then it will call print() function of that class. If it is not there then it will look for print() in its base classes.
    ta1.print();


}