#include <iostream>

int main() {
    using namespace std;
    char name[5] = "aba";
    int count;
    for(int i = 0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
    return 0;
}
