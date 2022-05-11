#include <iostream>
using namespace std;
class Person1
{
    int age;
    string tshirt;
    string camera;

public:
    Person1(int a, string t, string c)
    {
        age = a;
        tshirt = t;
        camera = c;
    }
    friend class Person2;
};

class Person2
{
public:
    void Display(Person1 &p3)
    {
        cout << p3.age << " " << p3.camera << " " << p3.tshirt << endl;
    }
};

int main()
{
    Person1 p1(24, "LONG-TSHIRT", "sony-mega");
    Person2 p2;
    p2.Display(p1);
    return 0;
}