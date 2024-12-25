#include<iostream>
using namespace std;

int pivott(int arr[],int n){
    int s = 0;
    int e = n-1;

    while (s<e)
    {
    int mid = (s+e)/2;

    if (arr[mid] > arr[0])
    {
        s = mid + 1;
    }
    else
    {
        e = mid;
    }
    }
   
    return e;
}
int BinarySearch(int arr[], int s, int e,int k){
    int start = s;
    int end = e;
    
    while (start <= end)
    {
    int mid =(start+end)/2;

    if (k == arr[mid])
    {
        return mid;
    }
    
    else if (k<arr[mid])
    {
        end = mid - 1;
    }
    else{
        start = mid + 1;
    }
    }
    return -1;
}
int main(){
    int arr[] = {7,9,1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = pivott(arr,n);
    int key;
    cout<<"enter key: "<<endl;
    cin>>key;
    int idx;
    if (key >= arr[ans] && key <= arr[n-1])
    {
        idx = BinarySearch(arr,ans,n-1,key);
    }
    else{
        idx = BinarySearch(arr,0,ans - 1, key);
    }
    
    if (idx != -1)
    {
        cout<<"key is present at index "<<idx<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    
    
    return 0;
}