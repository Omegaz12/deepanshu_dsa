#include <iostream>
using namespace std;
int main() {
    int max,min,arr[5],i;
    for(i=0;i<5;i++){
        cout<<"Enter the elements of array : ";
        cin>>arr[i];
    }
    max = arr[0];
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"Max value = "<<max<<endl;
return 0;
