#include<iostream>
using namespace std;
class Person{
  public:
      string name;
      int age;
      int salary;

      Person(int Age,int salary, string Name) //Parameterized Constructor
      {
          name=Name;
          age=Age;
          this->salary=salary;
      }

      Person(Person &p2)  //Copy Constructor
      {
         this->name = p2.name;
         age = p2.age;
         salary = p2.salary;
      }
      void display()
       {
          cout<<name<<"  "<<age<<endl;
          cout<<name<<"  "<<salary<<endl;  
       }
 };

int main()
  {
   //A a1=A(24, "kanon");
   Person p1(24,30000, "rifat");   //calling parameterized constructor
   Person p2(p1);       //calling the copy constructor
   p1.display();
   p2.display();
   cout<<p2.age;
 }
