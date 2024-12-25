#include<iostream>
using namespace std;
void printFibo(int n){
    int a = 0;
    int b = 1;

    for(int i = 1; i <= n; i++){

        cout<<a<<" "<<" ";
        int c = a + b;

        a = b;
        b = c;
    }
}
int main(){
    int n = 9;
    // printFibo(n);

    int a = 0;
    int b = 1;

    for(int i = 1; i <= n; i++){

        cout<<a<<" "<<" ";
        int c = a + b;

        a = b;
        b = c;
    }
    return 0;
}