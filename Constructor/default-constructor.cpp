#include<bits/stdc++.h>
using namespace std;

class Base {

 private:
     int a,b;
     float a1;
     string s1;

 public:
    Base(){
       a1 = 3.4646f;
       s1="what are you doing?";
       a=10;
       b=20;
    }

   void getData(){
     cout<<a<<" "<<b<<" "<<s1<<" "<<a1<<endl;
   }
};

int main()
{
    Base b1;
    b1.getData();
    return 0;
}
