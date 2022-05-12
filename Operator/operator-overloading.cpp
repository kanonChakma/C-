#include<iostream>
using namespace std;

class AddNumber
{
  private:
    int number1,number2;

  public:
     AddNumber(int a1=10, int b2=20);

     AddNumber operator+ (AddNumber num) {
         AddNumber temp;
         temp.number1 = number1 + num.number1;
         temp.number2 = number2 + num.number2;
         return temp;
     }

    ~AddNumber();

    void printValue(){
        cout<<number1<<" "<<number2<<endl;
    }
};


AddNumber::AddNumber(int n1, int n2)
{
  number1 = n1;
  number2 = n2;
}

AddNumber::~AddNumber()
{
    cout<<"Operator Overloading Destructor are calling"<<endl;
}

int main() {
     AddNumber a1, a2(30,40), total;
     a1.printValue();
     a2.printValue();
     
     total =  a1 + a2;
     total.printValue();

    return 0;
 }
