#include<iostream>
#include<math.h>
using namespace std;

void DecimalToBinary(int num){
    int i = 0;
    int ans = 0;

    while (num!=0)
    {
        int bit = num & 1;

        int power = pow(10,i);

        ans = (bit * power) + ans;

        // num = num >> 1;
        num = num/2;

        i++;
    }

    cout<<ans;
    
}
int main(){

    int n;
    cin>>n;
    DecimalToBinary(n);
    return 0;
}