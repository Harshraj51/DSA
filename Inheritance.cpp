// Inheritance
// 1)single inheritance
// 2)multiple inheritance
// 3)multilevel inheritance
// 4)hierarchical inheritance
// 5)hybrid inheritance

#include<iostream>
using namespace std;
class  sumsung1 {
  public:
  int x,y;
  void f1(){
    x=2;
    cout<<"x: "<<x<<endl;
  }
  void f2(){
    y=3;
    cout<<"y: "<<y<<endl;
  }
  
};
class sumsung2: public sumsung1
{   int z;
  public:
  void f3(){
     z=9;   
  }
  void f4(){
    cout<<x<<" "<<y<<" "<<z<<endl;
  }
};

int main()
{
  sumsung2 s1;
  s1.f2();
}
