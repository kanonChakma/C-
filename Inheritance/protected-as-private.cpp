#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void DisplayOne()
    {
        a = 10;
        b = 20;
        c = 30;
        cout << a + b + c << endl;
    }
};

//here b will a private member
class Derieved1 : private Base
{
private:
    int a1;

protected:
    int b1;

public:
    int c1;
    void DisplayTwo()
    {
        b = 10;
        c1 = 20;
        cout << b + c1 << endl;
    }
};

//here b is not cannont be inherit because it is a private member in Derieved1 class;
class Derived2 : private Derieved1
{
public:
    void DisplayThree()
    {
        b1 = 50;
        c1 = 20;
        cout << c1 + b1 << endl;
    }
};

int main()
{
    Derived2 d2;
    d2.DisplayThree();
    Derieved1 d1;
    d1.DisplayTwo();
    return 0;
}