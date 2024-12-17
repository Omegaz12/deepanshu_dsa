#include <iostream>

int main() {
    using namespace std;
    char name[5] = "abcd";
    int n = 5;
    char s =0;
    char e = n-1;
    while(s<e){
    swap(name[s],name[e]);
    s++;
    e--;
    }
    for(int i =0;i<n;i++)
    cout<<name[i];
    return 0;
}
