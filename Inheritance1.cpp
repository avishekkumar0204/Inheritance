#include <bits/stdc++.h>
using namespace std;
// Private:We cannot access it outside the class except Friend function
// Protected:Cannot be accessed outside the class except Friend function and derived class
// Public:Accessible everywhere
class Vehicle
{
private:
    int fuelcap;

protected:
    bool applyBrake;

public:
    int numTyres;
};

// Inheriting Car from Vehicle class publically
// private of Vehicle cannot be inherited
// Protected of vegicle will be protected in car
// Public will be public
class Car : public Vehicle
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