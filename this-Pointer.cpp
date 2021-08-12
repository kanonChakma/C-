#include <iostream>
using namespace std;

class Employee
{
public:
    int employeeId; //data member(also instance variable)
    string employeeName;
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