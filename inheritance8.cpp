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
};
int main()
{
    TA ta1;

    // if print() is not present in TA class then ta1.print() will find print() method in its base classes. And here print() method is present in both base classes. So this will give us error because of ambiguity.
    // ta1.print(); // Error

    // In this case we need to specify print() method of which class we want to call using scope resolution.
    ta1.Teacher::print();

    ta1.Student::print();

    // Similar for properties also.
}