#include <iostream>
using namespace std;

class Account
{
public:
    int accountNo;
    string accountName;
    static float rateOfInterest;

    Account(int accno, string name)
    {
        this->accountNo = accno;
        this->accountName = name;
    }
    void Display()
    {
        cout << "Account Name is" << accountName << endl;
        cout << "Account No is " << accountNo << endl;
        cout << "Account rate of interest is " << rateOfInterest << endl;
    }
};

int main()
{
    float Account::rateOfInterest = 4.5;
    Account a1(34, "Jonota Bank");
    a1.Display();
    return 0;
}
