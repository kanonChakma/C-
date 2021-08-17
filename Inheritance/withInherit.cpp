#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    char Name[64];
    char Id[12];

public:
    Student(char *name, char *id)
    {
        strcpy(Name, name);
        strcpy(Id, id);
    }

    void showStudentInfo()
    {
        cout << "Name is " << Name << endl;
        cout << "Id is " << Id << endl;
    }
};

class Registration : public Student
{
    float regFee;
    char *RegDate;

public:
    Registration(char *name, char *id, float fees, char *date) : Student(name, id)
    {
        regFee = fees;
        strcpy(RegDate, date);
    }
    void showRegInfo()
    {
        showStudentInfo();
        cout << "Fees  is" << regFee << endl;
        cout << "Date is " << RegDate << endl;
    }
};

int main()
{
    Registration supon("supon", "13981", 3456.25, "10-5-2021");
    supon.showStudentInfo();
    supon.showRegInfo();
    return 0;
}