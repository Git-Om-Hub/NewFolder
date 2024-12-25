#include<iostream>
using namespace std;

int sqrBinarySearch(int arr[],int k){
    int s = 0;
    int e = k-1;
    int ans = -1;
    while (s<=e)
    {
    int mid = (s+e)/2;
        int sq = mid*mid;
        if (k == sq)
        {
            return mid; 
        }
        else if (k < sq)
        {
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        
    }
        return -1;
    
}
int main(){
    int k = 324;
    int arr[k];
    
    int ans = sqrBinarySearch(arr,k);
    cout<<ans;
    
    return 0;
}