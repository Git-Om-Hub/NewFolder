#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int i = 1;

    while (i<=n)
    {
       int j = 1;
       while (j<=n-i+1)
       {
         cout<<"*";
        j++;
       }
       cout<<endl;
       i++;
    }
    
    return 0;
}