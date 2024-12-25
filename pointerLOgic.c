#include<stdio.h>
int sum(int* x , int* y){
    *x = 6;
    return (*x+*y);
}
int main(){
    int a = 1, b = 6, temp;
    temp = a;
    a = b;
    b = temp ;
    printf("THe value of a is : %d\n", a);
    printf("THe value of b is : %d\n", sizeof(b));
    printf("THe value of a and b is : %d \n", sum(&a,&b));
    printf("THe value of a is : %d", a);
    return 0;
}