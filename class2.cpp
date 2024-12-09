#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_no;

    Student(string a,int b,int c){
        name = a;
        age = b;
        roll_no = c;
    }

    void displayinfo(){
        cout<<"Name is : "<<name<<endl;
        cout<<"Age is : "<<age<<endl;
        cout<<"Roll no is : "<<roll_no<<endl;
    }
};

int main(){
    Student s1("Deepanshu",19,45);
    s1.displayinfo();
    return 0;
}

