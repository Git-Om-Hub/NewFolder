#include<iostream>
using namespace std;

int main(){

    int n = 4;
    int i = 0;
    while (i < n)
    {
        int j=0;
        while (j<n-i)
        {
            cout<<" ";
            j++;
        }

        int k = 0;
        while (k <i+1)
        {
            cout<<"*";
            k++;
        }
        int m = 0;
        while (m < i)
        {
            cout<<"*";
            m++;
        }
        
        cout<<endl;
        i++;

    }
    
    
    
    return 0;

}