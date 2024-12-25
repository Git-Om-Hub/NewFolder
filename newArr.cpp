#include<iostream>
using namespace std;

int main() {
    int arr[10] = {11, 22, 33, 44, 55, 666, 66, 77, 88, 99};

    int temp = sizeof(arr);
    cout << "Size of the array in bytes: " << temp << endl;

    cout << "Elements using *(arr + i): ";
    for (int i = 0; i < 10; i++) {
        cout << *(arr + i) << " ";
    }
    cout<<endl;

    cout << "Elements using i[arr]: ";
    for (int i = 0; i < 10; i++) {
        cout << i[arr] << " ";
    }
    cout << endl;

    char ch[] = {'a','l','w','a','y','s'};
    char *lol = &ch[0];
    cout<<lol;

    return 0;
}
