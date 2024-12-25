#include<iostream>
using namespace std;
int rec(int n){
    if (n==0 || n == 1)
    {
        return 1;
    }
    int ans = n * rec(n-1);
    return ans;
}
int main(){
    
    int n = 5;
    cout<<rec(5)<<endl;
    return 0;

}