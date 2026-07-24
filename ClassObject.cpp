// class objects for the C++ programming language
#include <iostream>
using namespace std;
class marks{
    public:
    int marks;
};
class Student : public marks{
    string name;
    int rollno;
public:
    Student(string n, int r, int m){
        name = n;
        rollno = r;
        marks = m;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }

    void greet(){
        cout<< "Thank you for using this program!" << endl;
    }

};
int main(){
    Student s1("Ajay", 101, 85);
    Student s2("Viajy", 102, 90);
    s1.display();
    s2.display();
    s1.greet();
    return 0;
}
