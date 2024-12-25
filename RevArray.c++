#include<iostream>
#include<vector>
using namespace std;

void RevArr(int arr[],int size){
    int s = 0;
    int e = size-1;

    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
 
int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int size = sizeof(arr) / sizeof(arr[0]);

    RevArr(arr,size);
    // for (int i = 0; i < size/2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[size-i-1];
    //     arr[size-i-1] = temp;
    // }

    
    
    

    return 0;
}