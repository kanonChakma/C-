#include <iostream>
using namespace std;

class Hobby
{
    string name;

public:
    void SetHobby(string s1)
    {
        name = s1;
    }
    string Profession()
    {
        return name;
    }
};

class Person : public Hobby
{
    string personName;

public:
    Person(string name)
    {
        personName = name;
    }
    void Display()
    {
        string name1 = Profession();

        cout << personName << "is good at " << name1 << endl;
    }
};
int main()
{
    Person p1("person-1");
    p1.SetHobby("swimming");
    p1.Display();
    return 0;
}