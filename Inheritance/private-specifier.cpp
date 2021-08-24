#include <iostream>
using namespace std;
//base class public member will be private member in derieved class if
//derieved class inherit base class as a private
class A
{
    int privateA;

public:
    int GetValue()
    {
        cout << "Enter a number" << endl;
        cin >> privateA;
        return privateA;
    }
    void DisplayA()
    {
        cout << GetValue() << endl;
    }
};
class B : private A
{
    int privateB;

public:
    void DisplayB()
    {
        privateB = GetValue();
        cout << privateB << endl;
    }
};

int main()
{
    A a1;
    B b1;
    a1.DisplayA();
    b1.DisplayB();
    return 0;
}