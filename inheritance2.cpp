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

// Inheriting Car from Vehicle class in protected mode
// private of Vehicle cannot be inherited
// Protected -> Protected
// Public ->protected
class Car : protected Vehicle
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
    // Below two line will give error because it is under protected modifier
    // c.applyBrake=false;
    // c.numTyres=20;
    c.print();
}