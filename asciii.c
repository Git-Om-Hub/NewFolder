#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: " );
    scanf("%c", &ch);
    if (ch>=97 && ch <= 122)
    {
        printf("its lowercase");
    }
    else
    {
        printf("its not lowercase");
    }
    
    
    return 0;
}