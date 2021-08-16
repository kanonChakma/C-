#include <iostream>
using namespace std;

   //  It can be used to pass current object as a parameter to another method.
   //  It can be used to refer current class instance variable.
   //   It can be used to declare indexers.

class Employee
{
public:
    int employeeId;        //data member(also instance variable)
    string employeeName;  //data member(also instance variable)
    float employeeSalary;
    Employee(int id, string name, float salary)
    {
        this->employeeId = id;
        this->employeeName = name;
        this->employeeSalary = salary;
    }
    void display()
    {
       cout << employeeId << " " << employeeName << " " << employeeSalary << endl;
    }
};
int main()
{
    Employee e1(12314, "kirtiman", 500000);
    e1.display();
    return 0;
}