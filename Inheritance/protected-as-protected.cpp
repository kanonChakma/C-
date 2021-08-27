#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b, c;

public:
    int d;
    Base()
    {
        a = 10;
        b = 10;
        c = 10;
        d = 10;
    }
    void Displayone()
    {
        cout << "First Value is " << a + b + c + d << endl;
    }
};
//Here Base class protected and public member we can use in Derieved1 class
//public and protedted member will be protected in Dereved1 class;

class Derieved1 : public Base
{
public:
    Derieved1()
    {
        b = 20;
        c = 20;
        d = 20;
    }
    void DisplayTwo()
    {
        cout << "Second Value is " << b + c + d << endl;
    }
};
class Derieved2 : protected Derieved1
{
public:
    Derieved2()
    {
        b = 30;
        c = 30;
        d = 30;
    }
    void DisplayThree()
    {
        cout << "Third value is " << b + c + d << endl;
    }
};
int main()
{
    Base b1;
    b1.Displayone();
    Derieved1 d1;
    d1.DisplayTwo();
    Derieved2 d2;
    d2.DisplayThree();
    return 0;
}