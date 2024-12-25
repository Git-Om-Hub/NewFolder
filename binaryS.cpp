#include<iostream>
using namespace std;

int firstOcc(int arr[],int size, int num){
    int s = 0;
    int e = size - 1;
   
    int ans = -1;
    while (s<=e)   
        {
        int mid = (s + e) / 2;
        if (arr[mid] == num)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid]>num)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        
        mid = (s-e)/2;
        
    }
    return ans;
}

int lastOcc(int arr[],int size, int num){
    int s = 0;
    int e = size - 1;
    int mid = (s+e)/2;
    int ans = -1;
    while (s<=e)
    {
     int mid = (s + e) / 2;
        if (arr[mid] == num)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid]>num)
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        
        mid = (s-e)/2;
        
    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,4,4,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = firstOcc(arr,size,4);
    cout<<"first occ at index: "<<first<<endl;

    int last = lastOcc(arr,size,4);
    cout<<"last occ at index: "<<last<<endl;
    return 0;
}