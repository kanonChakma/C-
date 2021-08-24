#include <iostream>
using namespace std;

class Base
{
private:
    int a1;

protected:
    int a2;

public:
    int a3;
    Base()
    {
        a1 = 10;
        a2 = 20;
        a3 = 30;
    }
    void Display()
    {
        cout << a1 << " " << a2 << " " << a3 << endl;
    }
};

class Derieved : public Base
{
public:
    void changeValue()
    {
        //a1=50;   that will error it is private memeber
        a2 = 60; //a2 is protected but it can be change in Derieved class
        a3 = 70;
    }
    void DisplayOne()
    {
        cout << a2 << " " << a3 << endl;
    }
};

int main()
{
    Base b1;
    b1.Display();

    Derieved d1;
    d1.DisplayOne();
    d1.a3 = 70;
    d1.DisplayOne();

    return 0;
}