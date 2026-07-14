#include<iostream>
#include<conio.h>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node *start=0; // global declaration

struct node * createNode(){
  struct node *h1;
  h1=(struct node *)malloc(sizeof(struct node));
  cout<<"Enter a data:";
  cin>>h1->data;
  h1->next=0;
  return h1;
  
  
}
void insertStart(){
  
  struct node *k1;
  k1=createNode();
  if(start==0){
    start=k1;
  }
  else {
    k1->next=start;
    start=k1;
    cout<<"Node added successfully"<<endl;
  }

}
void insertEnd(){
  struct node *k1,*h1;
  k1=createNode();
  if (start==0)
  {
    start=k1;
  }
  else
  {
    h1=start;
    while (h1->next!=0)
    {
      h1=h1->next;
    }
    h1->next=k1;
    
    cout<<"Node added successfully"<<endl;
  }
  
}
void insertMiddle(){ 
{
  /* data */
};


}
void deleteStart(){

}
void deleteEnd(){

}
void deleteMiddle(){

}
void display(){
  struct node *k1;
  k1=start;
  while (k1!=0)
  {
    cout<<k1->data <<" ";
    k1=k1->next;
    
  }
    
} 


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
        case 1:{ insertStart();
          break;

        }
        case 2:{
            insertEnd();
            
          break;
        } 
        case 3:{
            insertMiddle();
          break;

        }
        case 4:{
            deleteStart();
          break;

        }
        case 5:{
            deleteEnd();
          break;

        }
        case 6:{
            deleteMiddle();
          break;

        }
        case 7:{
            display();
          break;

        }
        case 8: exit(0);
        default: cout<<"Invalid choice";
        break;
        
    
    }
   }
  cout<<"hello";   

    return 1;
}