#include <iostream>
using namespace std;
//when derived class inherit base class as public
//base class protected  member will be protected in derived class
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
/// we can change a2 because it is protected memeber in baseClasse
class Derieved : public Base
{
public:
    void changeValue()
    {
        a2 = 60;
        a3 = 70;
    }
    void DisplayOne()
    {
        cout << a2 << " " << a3 << endl;
    }
};
///
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