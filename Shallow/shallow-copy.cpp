#include<iostream>
using namespace std;

class Company{
       string companyName;
       int  companyPeople;
        int *p;

   public:
       Company(){
             p= new int;
       }
       void setData(int People,string Name,int z)
       {
          companyPeople=People;
          companyName=Name;
          *p=z;
       }

       void Display()
       {
          cout<<companyPeople<<" "<<companyName<<" "<<*p<<endl;
       }
};

int main()
{
    Company c1;
    c1.setData(22,"bubon",5);
    c1.Display();
    Company c2=c1;
   // c2.setData(24,"siston");
    c2.Display();

return 0;
}
