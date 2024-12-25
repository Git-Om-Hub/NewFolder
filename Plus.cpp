#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    int num = 5;
    for (int i = 1; i <= 10; i++)
    {
        if (i%2 == 0)
        {
        cout<<num <<" x " <<i <<" = " <<i*num<<endl;
        }
        else
        {
            cout<<"\n";
        }
        
        
        
    }
    
    return 0;
}
