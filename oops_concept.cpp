#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_no;
};

int main(){
    Student s1;
    s1.name="Deepanshu";
    s1.age=19;
    s1.roll_no=45;
    cout<<"name is : "<<s1.name<<endl;
    cout<<"age is : "<<s1.age<<endl;
    cout<<"rollno is : "<<s1.roll_no<<endl;
}   
