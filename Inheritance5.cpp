#include <bits/stdc++.h>
using namespace std;

// Order of execution of constructor is from base to derived class and reverse for destructor
class A
{
public:
    A()
    {
        cout << "Default constructor of A" << endl;
    }
    A(int x)
    {
        cout << "Parameterised constructor of A" << endl;
    }
    ~A()
    {
        cout << "Destructor of A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Default constructor of B" << endl;
    }
    B(int x) : A(x)
    {
        cout << "Parameterised constructor of B" << endl;
    }
    ~B()
    {
        cout << "Destructor of B" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "Default constructor of C" << endl;
    }
    C(int x) : B(x)
    {
        cout << "Parameterised constructor of C" << endl;
    }
    ~C()
    {
        cout << "Destructor of C" << endl;
    }
};
void fun1()
{
    C obj1(5);
    /*
        Parameterised constructor of A
        Parameterised constructor of B
        Parameterised constructor of C
        Destructor of C
        Destructor of B
        Destructor of A
    */
}
int main()
{
    fun1();
}
