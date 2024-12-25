#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0,j = 0,k = 0;
    while (i<n && j<m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        { 
            arr3[k++] = arr2[j++];
        }  
    }
    while (i<n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j<m)
    {
        arr3[k++] = arr2[j++];
    }
}
    void print(int ans[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        
    }
int main(){
    
    int arr1[6] = {1,2,3};
    int arr2[] = {2,5,6};
    int sizeofarr1 = sizeof(arr1)/sizeof(arr1[0]);
    int sizeofarr2 = sizeof(arr2)/sizeof(arr2[0]);
    int sizeofarr3 = sizeofarr1 + sizeofarr2;
    int arr3[sizeofarr3];
    merge(arr1,sizeofarr1,arr2,sizeofarr2,arr3);
    print(arr3,sizeofarr3);
    return 0;
}