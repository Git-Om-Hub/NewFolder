#include<iostream>
using namespace std;
int power(){
    int a,b;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    int ans = 1;
    for (int  i = 0; i < b; i++)
    {
        ans *= a;
    }
    cout<<ans<<endl;
    return ans;
    
}
int main(){

    power();
    power();

    return 0;
}