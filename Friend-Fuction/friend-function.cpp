#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex mulComplex(Complex s1, Complex s2);

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void Display()
    {
        cout << a << " " << b << endl;
    }
};

Complex mulComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setData((c1.a, c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    Complex a1, a2, a3;
    a1.setData(3, 4);
    a2.setData(5, 6);
    a1.Display();
    a2.Display();

    a3 = mulComplex(a1, a2);
    a3.Display();

    return 0;
}

/*
properties of friend functions
 1.Not in the scope class
 
 2.since it is not in the scope of the class,it cannot be called
 from the object of that class.
 
 3.Can ve invoked without the help of any object

 4.Usually contains the objects as arguments
 
 5.can be declared inside public or private section of the class
*/
