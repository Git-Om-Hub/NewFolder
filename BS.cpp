#include<iostream>
using namespace std;
int printBS(int arr[], int size, int key){
    
    int start = 0;
    int end = size -1;

    int mid = (start+end)/2;

    while(start<=end){
        if (arr[mid]== key)
        {
            return mid;
            
        }
        if (key  < arr[mid] )
        {
            end = mid-1;
        }
        else {
           start= mid+1;
        }
        
        mid = (start+end)/2;
    }
        return -1;
}

int main(){

    int arr[6] = {3,4,56,66,77};
   int ind = printBS(arr,6,6);
    cout<<ind;
    return 0;

}