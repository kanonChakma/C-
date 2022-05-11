#include <iostream>
using namespace std;

class B;
class A
{
    int x;

public:
    void setData(int i)
    {
        x = i;
    }
    friend void Minn(A, B);
};

class B
{
    int y;

public:
    void setData(int i)
    {
        y = i;
    }
    friend void Minn(A, B);
};

void Minn(A a, B b)
{

    if (a.x <= b.y)
    {
        cout << a.x << endl;
    }
    else
    {
        cout << b.y << endl;
    }
}

int main()
{
    A a;
    B b;
    a.setData(10);
    b.setData(20);
    Minn(a, b);

    return 0;
}