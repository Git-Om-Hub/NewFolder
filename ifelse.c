#include<stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter marks of OOM: ");
    scanf("%f",&s1);
    printf("Enter marks of NLDS: ");
    scanf("%f",&s2);
    printf("Enter marks of MOM: ");
    scanf("%f",&s3);
    
    float avg = (s1+s2+s3)/3;
    printf("%f\n", avg);

    if (avg >= 40 && s1>=33 || s2>=33 || s3>=33  )
    {
       printf("YOU ARE passes");

    }
    else
    {
        printf("YOU FAILED");
    }
    
    
}