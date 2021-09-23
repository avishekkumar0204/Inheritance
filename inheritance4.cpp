#include <bits/stdc++.h>
using namespace std;
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
    B(int x)
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
    C(int x)
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
    C obj1;
    /*
        Default constructor of A
        Default constructor of B
        Default constructor of C
        Destructor of C
        Destructor of B
        Destructor of A
    */
}
void fun2()
{
    C obj(5);
    /*
        Default constructor of A
        Default constructor of B
        Parameterised constructor of C
        Destructor of C
        Destructor of B
        Destructor of A
    */
}
int main()
{
    fun1();
    fun2();
}
