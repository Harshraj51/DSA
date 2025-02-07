#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    cout<<"            Linked List   "<<endl;
    cout<<"    [head]--[Data][Add]--[Data][Add]--[null]        "<<endl;
    cout<<"1.Insertion from start"<<endl;
    cout<<"2.Insertion from end"<<endl;
    cout<<"3.Insertion from middle"<<endl;
    cout<<"4.Delete from start"<<endl;
    cout<<"5.Delete from end"<<endl;
    cout<<"6.Delete from middle"<<endl;
    cout<<"7.Display"<<endl;
    cout<<"8.Exit"<<endl;
   int ch;
   while (1)
   {
     cout<<"Enter choise"<<endl;
     cin>>ch;
     switch(ch)
    {
        case 1: cout<<"hello"<<endl;
        break;
        case 2: cout<<"world"<<endl; 
        break;
        case 8: exit(0);
        default: cout<<"Invalid choice";
        break;
        
    
    }
   }
  cout<<"hello";   

    return 1;
}