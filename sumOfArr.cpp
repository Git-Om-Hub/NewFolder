#include<iostream>
using namespace std;
void printSumOfArr(int arr[],int sizeOfArr){
    int sum = 0;
    for (int i = 0; i < sizeOfArr; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
}
int main(){

    int arr[]= {2,4,6,8,10,2,9} ;
    int sizeOfArr = sizeof(arr)/ sizeof(arr[0]);

    printSumOfArr(arr,sizeOfArr) ;

    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] == 8)
        {
            cout<<" 8 is present at index "<<i<<endl;
            break;
        }
    }
    
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = i+1; j < sizeOfArr; j++)
        {
            if (arr[i] == arr[j])
            {
                cout<<arr[i]<<" is duplicate at index "<<j;
                break;
            }
            
        }
        
        
    }
    

    return 0;

}