#include<iostream>

using namespace std;

int CheckMin(int arr[],int size){
    
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    
    return min;
   
}

int CheckMax(int arr[],int size){
    
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    
    return max;
   
}

bool LinearSearch(int arr[],int size,int num){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout<<"Num found at index "<<i<<endl;
            return 1;
            break;
        }
        
    }
    return 0;
}

int main(){

int arr[] = {23,49,69,29,83,3,111,55,33};

int size = sizeof(arr) / sizeof(arr[0]);

cout<<"Minimum is " <<CheckMin(arr,size)<<endl;

cout<<"Maximum is " <<CheckMax(arr,size)<<endl;

bool ans = LinearSearch(arr,size,343);

if (ans == 0)
{
    /* code */
    cout<<"num not found"<<endl;

}


}
