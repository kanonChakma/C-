//Default constructor and parameterized constructor writing in one funcion;

#include<iostream>
using namespace std;

class village
{

private:
    string name;
    int people;
    float temparature;

public:
    village(string name, int people, float temp);
    village(village &v3);
    ~village();
    void getResult(){
       cout<<"name is "<<name<<endl;
       cout<<"people is "<<people<<endl;
       cout<<"temparature is "<<temparature<<endl;
       cout<<endl;
    }
};

village::village(string n ="dajar para", int pe = 500, float temp = 25.6f)
{
   name = n;
   people = pe;
   this->temparature = temp;
}
village::village(village &v3){
 this->name = v3.name;
 this->people=v3.people;
 this->temparature=v3.temparature;
}
village::~village()
{
  cout<<"Destructor are destroyed"<<endl;
}

int main(){
     village v1, v2("mohajon", 700, 56.5f), v3(v2);
     v1.getResult();
     v2.getResult();
     v3.getResult();
     return 0;
}
