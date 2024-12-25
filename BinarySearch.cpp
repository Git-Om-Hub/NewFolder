#include<iostream>
using namespace std;
int printFO(int arr[],int size, int key){
int start = 0;
int end = size - 1;
int mid = (start + end)/2;
int ans = -1;

while(start<=end){
    if (key == arr[mid])
    {
        ans = mid;
        end = mid - 1;
    }
    else if (key > arr[mid])
    {
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid = (start + end)/2;

}
return ans;
}
int printLO(int arr[], int size, int key){
    int start = 0;
int end = size - 1;
int mid = (start + end)/2;
int ans = -1;

while(start<=end){
    if (key == arr[mid])
    {
        ans = mid;
        start = mid + 1;
    }
    else if (key > arr[mid])
    {
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid = (start + end)/2;

}
return ans;
}
int main(){
    int arr[] ={1,2,4,4,4,4,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout<<"Enter key to find: "<<endl;
    cin>>key;
    int firstOcc = printFO(arr,size,key);
    int lastOcc = printLO(arr,size,key);
    cout<<"index of first occ of key is: "<<firstOcc<<endl;
    cout<<"index of Last occ of key is: "<<lastOcc<<endl;

    int totalOcc = lastOcc - firstOcc + 1;
    cout<<"total no of occ is "<<totalOcc<<endl;

    return 0;
}