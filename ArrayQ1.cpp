#include<iostream>
using namespace std;

void ProSum(int arr[],int size){

    int sum = 0;
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        prod = prod * arr[i];
    }
    
    cout<<"The sum is : "<<sum<<endl;
    cout<<"The product is : "<<prod<<endl;


}

void MinMaxSwap(int arr[],int size){
    int min = 0;
    int max = 0;

    for (int i = 1; i < size; i++)
    {
        
        if (arr[i] < arr[min])
        {
            
            min = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        
    }
    
    swap(min,max);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

void UniqueValue(int arr[],int size){
    int unique;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] != arr[j])
            {
                cout<<arr[i]<<" ";
                
            }
            
            
        }
        
    }
    
}

void SwapAlternate(int arr[],int size){
    
    for (int i = 0; i < size-1; i++)
    {
        swap(arr[i] , arr[i+1]);
        i++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    ProSum(arr,size);

    SwapAlternate(arr,size);

    return 0;
}