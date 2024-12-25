#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 2;
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    while (i<=n)
    {
        if (i%2 == 0)
        {
        sum += i;
        cout<<"sum of "<< i <<" = " <<sum <<endl;
        }
        i++;
        
    }
    
    return 0;
}