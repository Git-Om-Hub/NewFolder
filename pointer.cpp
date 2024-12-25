#include<iostream>
using namespace std;

void print(int **p){
    **p+=1;
   cout<<**p<<endl;
}
    int main(){
        int val = 5;
        int* temp = &val;
        int* *ptr = &temp;
      
        cout<<"**ptr: " << **ptr<<endl;
        cout<<"*ptr: " <<*ptr<<endl;
        cout<<"&temp : "<<&temp<<endl;
        cout<<"ptr: "<<ptr<<endl;
        cout<<"*temp: "<<*temp<<endl;
        cout<<"temp: "<<temp<<endl;
        print(ptr);
        cout<<"**p: "<<**ptr<<endl;
        // cout<<*temp<<endl;
return 0;
 }