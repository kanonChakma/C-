#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
   int width, height;
   Rectangle(int w,int h){
      width = w;
      height = h;
   }

void Display(){
       cout << "width is "<<this->width<<endl;
       cout<< " height is "<<this->height<<endl;
       cout<<width*height<<endl;
   }
};

int main(){
    Rectangle r1(10,20);
    r1.Display(); 
    return 0;
}

//https://www.geeksforgeeks.org/structure-vs-class-in-cpp/