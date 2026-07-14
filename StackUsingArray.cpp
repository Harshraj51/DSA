#include<iostream>
using namespace std;

int top = -1;
void push(int arr[],int size){
    if (top == size - 1) {
        cout << "Stack overflow. Cannot push more elements." << endl;
        return;
    }
     int x;
    cout<<"Enter the element to push: ";
    cin>>x;
    top++;
    arr[top] = x;
}
void pop(int arr[], int &top){
    if (top == -1) {
        cout << "Stack is empty. Cannot pop." << endl;
    } else {
        cout << "Popped element: " << arr[top] << endl;
        top--;
    }
}
void peek(int arr[], int top){
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element is: " << arr[top] << endl;
    }
}

int main(){
    int arr[100],ch;
    cout<<"Enter the size of the stack: ";
    int size;
    cin>>size;
    if(size <= 0 || size > 100) {
        cout << "Invalid stack size. Please enter a size between 1 and 100." << endl;
        return 1;
    }
    cout<<"Enter choice: \n1. Push\n2. Pop\n3. Display\n4. Exit\n";
    while (1)
    { 
    cout<<"Enter your choice: ";
     cin>>ch;
    switch (ch)
    {
    case 1 :
        push(arr, size);
        break;
    case 2 : 
        pop(arr, top);
        break;
    case 3 :
        peek(arr, top);
        break;
    case 4 :
        exit(0);
    
    default:
        cout<<"Invalid choice. Please try again."<<endl;
        break;
    }
 
    }
    
      return 0;
}
