/*
- First default constructor of base class then default constructor of derived class
- when parameterized constructor are called from derived class it will first call default constructor of base class
 then parameterized constructor of derived class.It will not called parameterized constructor of base class

*/

#include<iostream>
using namespace std;

class Base {
 private:
   int a,b;

 public:
   Base(){
       cout<<"This is base Class Constructor: "<<endl;
    }
   Base(int c, int d){
      a=c;
      b=d;
      cout<<"This is Base Class Parameterized Constructor: "<<endl;
   }
};

class Derieved : public Base {
   
    private:
     int f,g;

    public:
     Derieved(){
      cout<<"This is Derieved Class Constructor: "<<endl;
     } 
    Derieved(int a, int b){
        f=a;
        g=b;
        cout<<"This is Derieved Class Parameterized Constructor: "<<endl;
     } 
 };

int main()
{
    Derieved d1, d2(3,4); 
    return 0;
}