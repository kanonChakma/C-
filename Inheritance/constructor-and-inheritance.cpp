/*
if we donot specify a constructor, then derived class will use appropriate 
 constructor from base class.(Applicable only to Deafalut constructor);
*/

/*
 -First will call Derieved1 Constructor then Derieved Constructor then Base Constructor;
 -First call Base Destructor then Derieved Destructor then Derieved1 Destructor;
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
   }
  ~Base(){
      cout<<"This is Base Class Destructor: "<<endl;
  } 
};

class Derieved : public Base {
   
    private:
     int f,g;

    public:
     Derieved(){
      cout<<"This is Derieved Class Constructor: "<<endl;
     } 
    ~Derieved(){
      cout<<"This is Derieved Class Destructor: "<<endl;
     } 
     void display(){
         cout<<f<<" "<<g<<endl;
     }
 };
 class Derieved1 : public Derieved {
   
    private:
     int f,g;

    public:
     Derieved1(){
      cout<<"This is Derieved1 Class Constructor: "<<endl;
     } 
    ~Derieved1(){
      cout<<"This is Derieved1 Class Destructor: "<<endl;
     } 
     void display(){
         cout<<f<<" "<<g<<endl;
     }
 };

int main()
{
    Derieved1 d1; 
    return 0;
}