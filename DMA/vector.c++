#include<iostream>
#include<vector>
void swpration(){
    
}
using namespace std;
int main()
{
    cout<<"Running ";
    int a[6]={0,1,2,3,4,5}; // Initialize an array with 6 elements
    vector<int> even;
    vector<int>odd;
    for(int i=0;i<6;i++){
        if(i%2==0)
        {
            even.push_back(a[i]); // Add even numbers to the vector
        }
        else
        {
            odd.push_back(a[i]); // Add odd numbers to the vector
        }
    }
    cout<<"even numbers"<<endl; // Indicate even numbers
    cout<<"[";
    for(int i:even){
        cout<<i<<" "; // Print even numbers
    }
    cout<<"]"<<endl; // Indicate even numbers
    cout<<endl;
    cout<<"odd numbers"<<endl; // Indicate odd numbers
    cout<<"[";
    for(int i:odd){
        cout<<i<<" "; // Print odd numbers
    }
    cout<<"]"<<endl; // Indicate odd numbers
    cout<<endl;
    cout<<"End of program"<<endl; // Indicate the end of the program
    
cout<<"single Numbers"<<endl; // Indicate single numbers
int arr[3]={2,2,1};
vector<int> r;
vector<int> s;
for(int i=0;i<3;i++){
    if(arr[i]==1)
    {
        r.push_back(arr[i]); // Add single numbers to the vector
    }
    else
    {
        s.push_back(arr[i]); // Add non-single numbers to the vector
    }
}
cout<<"[";
for(int i:r){
    cout<<i<<" "; // Print single numbers
}
cout<<"]"<<endl; // Indicate single numbers
cout<<"[";
for(int i:s){
    cout<<i<<" "; // Print non-single numbers
}
cout<<"]"<<endl; // Indicate non-single numbers
cout<<endl;
cout<<"End of program"<<endl; // Indicate the end of the program

    return 0; // Program will exit with 0 status
} 