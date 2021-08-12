#include<iostream>
using namespace std;
class A{
  public:
      string name;
      int age;

      A(int Age,string Name) //Parameterized Constructor
      {
          name=Name;
          age=Age;
      }

      A(A &Age)  //Copy Constructor
      {
         age=Age.age;
      }
      void display()
       {
         cout<<age<<"  "<<name<<endl;
       }
 };

int main()
  {
   //A a1=A(24, "kanon");

   A a1(24, "kanon");   //calling parameterized constructor

   A a2(a1);       //calling the copy constructor

   a1.display();

   cout<<a2.age;
 }
