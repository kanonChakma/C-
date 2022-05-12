#include<iostream>
using namespace std;

class Increment
 {
 private:
    int number1, number2; 
 public:
     Increment(int n1=0, int n2=0);
    ~Increment();
    void printValue(){
        cout<<"NUmber1 is"<<number1<<endl;
        cout<<"NUmber2 is"<<number2<<endl;
    }
    //pre increment
   void operator++(){
       ++number1;
       ++number2;
   }
   //post increment
    void operator++(int){
       number1++;
       number2++;
   }
 };

Increment::Increment(int a, int b)
{
    number1 = a;
    number2 = b;
}

Increment::~Increment()
{
  cout<<"destructor are calling";
}

int main()
{
   Increment val1(10,20),val2(30,40);
   ++val1;
   val1.printValue();
   val2++;
   val2.printValue();   
   return 0;
}