#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
private:
    int fuelcap;

protected:
    bool applyBrake;

public:
    int numTyres;
};

// Inheriting Car from Vehicle class in private mode
// private of Vehicle cannot be inherited
// Protected -> Private
// Public ->private
class Car : private Vehicle
{
public:
    Car(bool applyBrake, int numTyres)
    {
        this->applyBrake = applyBrake;
        this->numTyres = numTyres;
    }
    void print()
    {
        cout << applyBrake << " " << numTyres << endl;
    }
};
int main()
{

    Car c(true, 4);
    c.print();
}