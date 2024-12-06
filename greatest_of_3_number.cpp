#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the value of num1 = ";
    cin>>num1;
    cout<<"Enter the value of num2 = ";
    cin>>num2;
    cout<<"Enter the value of num3 = ";
    cin>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<"The Largest number is = "<<num1;
    }
    else if(num1<num2 && num2>num3)
    {
        cout<<"The largest number is = "<<num2;
    }
    else if(num1==num2 && num2>=3)
    {
        cout<<"Two numbers are equally largest";
    }
    else if(num1==num2 && num2==num3)
    {
        cout<<"All numbers are equal";
    }
    else
    {
        cout<<"garbage";
    }
    return 0;
}