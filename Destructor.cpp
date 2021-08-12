//C++ destructor cannot have parameters. Moreover, modifiers can't be applied on destructors.
#include<iostream>
using namespace std;

class Destructor{
  public:
      float value;

      Destructor()
      {
          cout<<"Constructor Invoked"<<endl;
      }

    ~Destructor()
      {
         cout<<"Destructor Invoked"<<endl;
      }
  };
int main()
  {
    Destructor d1;
    Destructor d2;
    return 0;
  }
