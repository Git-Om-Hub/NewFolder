#include<stdio.h>

int avg(int a,int b,int c){
    return (a+b+c)/3;
}
int main(){

    int a,b,c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    int x = avg(a,b,c);
    printf("The avg of these three numbers is: %d", x);
    return 0;
}