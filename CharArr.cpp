#include<iostream>
using namespace std;
char toLower(char ch){
    if (ch >= 'A' && ch<= 'Z')
    {
        
      return ch - 'A' + 'a';
      
    }
    return ch;
    
}
int main(){

    char ch[50];
    cin>>ch;
    int length = 0;
    while (ch[length] != '\0')
    {
         length++;
    }
    cout<<"Length of your given string is: "<<length<<endl;
    
    bool check = true;
    for (int i = 0; i < length/2; i++)
    {
        if (tolower(ch[i])!= tolower(ch[length-i-1]))
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout<<"is palindrome";
    }
    else
    {
        cout<<"isnt palindrome";
    }
    
    
    
    return 0;

}