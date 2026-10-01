class Test{
public:
  Test(){ 
    cout<< "Hello";
  }
  Test(int X) {
    cout<<X;
  }
};

int main(){
Test t1(10,20);
}

//output :- Error
